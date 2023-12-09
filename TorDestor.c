#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Unused function that just wipes a memory region to 0
void wipe(void *ptr, size_t size) {
    memset(ptr, 0, size); 
}

// Function for wiping the file three times
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


// Main function: Takes in a single filename as an argument
int main(int artc, char **argv) {

    char *file_name = argv[1];

    FILE *file = fopen(file_name, "r+");

    fseek(file, 0L, SEEK_END);

    size_t size = ftell(file); 
    rewind(file);
    
    random_wipe(file, size);

    fseek(file, 0L, SEEK_SET);

    fclose(file);
    remove(file_name);

    return 0;
}