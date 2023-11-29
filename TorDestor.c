#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wipe(void *ptr, size_t size) {
    memset(ptr, 0, size); 
}

void random_wipe(FILE *file, size_t size) {
    rewind(file);
    for (int i = 0; i < 3; i++) {
        char *random_data = malloc(size);
        if (random_data == NULL) {
            perror("Error allocating random memory");
            exit(EXIT_FAILURE);
        }

        for (int j = 0; j < size; j++) {
            random_data[j] = rand() % 256;
        }

        fwrite(random_data, 1, size, file);
        free(random_data);
        fflush(file);
    }
} 



int main() {
    char *file_name = "Sensitive.txt";

    FILE *file = fopen(file_name, "r+");

    fseek(file, 0L, SEEK_END);

    size_t size = ftell(file); 
    rewind(file);

    char *content = malloc(size);
    
    fread(content, 1, size, file);

    printf("File contents: %s\n", content);

    random_wipe(file, size);

    fread(content, 1, size, file);
    printf("Wiped contents: %s\n", content);


    fseek(file, 0L, SEEK_SET);

    fclose(file);
    free(content);

    remove(file_name);
 
    return 0;
}