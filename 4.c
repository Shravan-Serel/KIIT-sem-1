#include <stdio.h>

#define ROWS 3
#define COLS 3

void rowWiseSum(int arr[ROWS][COLS], int rowSum[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
    int rowSum[ROWS];

    rowWiseSum(arr, rowSum, ROWS, COLS);

    printf("Row-wise sum:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
