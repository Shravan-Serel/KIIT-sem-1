#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int areStringsEqual(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    printf("Enter the first string: ");
    fgets(str1, MAX_LENGTH, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, MAX_LENGTH, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (areStringsEqual(str1, str2))
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
