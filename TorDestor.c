#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wipe(void *ptr, size_t size) {
    memset(ptr, 0, size); 
}



int main() {
    FILE *file = fopen("Sensitive.txt", "r+");

    fseek(file, 0L, SEEK_END);

    size_t size = ftell(file); 
    rewind(file);

    char *content = malloc(size);
    
    fread(content, 1, size, file);

    printf("File contents: %s\n", content);

    wipe(content, size);

    printf("Wiped contents: %s\n", content);


    fseek(file, 0L, SEEK_SET);
    fwrite(content, 1, size, file);

    fclose(file);
    free(content);
    
    return 0;
}