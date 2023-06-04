#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char result[40];

    // String Length - strlen()
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("Length of str1: %d\n", len1);
    printf("Length of str2: %d\n", len2);

    // String Copy - strcpy()
    strcpy(result, str1);
    printf("Copied string: %s\n", result);

    // String Concatenation - strcat()
    strcat(result, " ");
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);

    // String Comparison - strcmp()
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // String Searching - strstr()
    char* found = strstr(result, "World");
    if (found != NULL) {
        printf("Substring found: %s\n", found);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}