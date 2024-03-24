#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    char concatenated[MAX_LENGTH * 2]; // Double the maximum length to accommodate both strings

    printf("Enter the first string: ");
    fgets(str1, MAX_LENGTH, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Removing newline character

    printf("Enter the second string: ");
    fgets(str2, MAX_LENGTH, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Removing newline character

    strcpy(concatenated, str1);
    strcat(concatenated, str2);

    printf("Concatenated string: %s\n", concatenated);

    return 0;
}
