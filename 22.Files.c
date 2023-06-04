#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in write mode
    file = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is an example file.\n");

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read and print the contents of the file
    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}



