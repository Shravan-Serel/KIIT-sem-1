#include <stdio.h>

int count_a(char array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 'a' || array[i] == 'A') {
            count++;
        }
    }
    return count;
}

int main() {
    char array[] = {'a', 'b', 'c', 'd', 'a', 'e', 'f', 'a'};
    int size = sizeof(array) / sizeof(array[0]);

    int occurrences = count_a(array, size);
    printf("Number of 'a's in the array: %d\n", occurrences);

    return 0;
}
