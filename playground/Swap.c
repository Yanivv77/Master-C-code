#include <stdio.h>
#include <string.h>

// Function to swap two strings
void swapStrings(char *str1, char *str2) {
    char temp[50];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);

    // Call the swapStrings function
    swapStrings(str1, str2);

    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}