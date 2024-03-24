#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "textfile.txt";
    char ch;
    int charCount = 0, spaceCount = 0, newlineCount = 0;

    // Write text into file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter text. Press Ctrl+D (Unix/Linux) or Ctrl+Z (Windows) to end:\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);

    // Read text from file and count characters, spaces, and newlines
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        if (ch == ' ') {
            spaceCount++;
        } else if (ch == '\n') {
            newlineCount++;
        }
    }
    fclose(file);

    printf("\nNumber of characters in the file: %d\n", charCount);
    printf("Number of spaces in the file: %d\n", spaceCount);
    printf("Number of newlines in the file: %d\n", newlineCount);

    return 0;
}
