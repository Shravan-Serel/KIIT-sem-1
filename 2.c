#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5, 6, 7};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    if (size1 > size2) {
        printf("Array 1 is bigger.\n");
    } else if (size2 > size1) {
        printf("Array 2 is bigger.\n");
    } else {
        printf("Both arrays are of equal size.\n");
    }

    return 0;
}
