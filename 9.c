#include <stdio.h>
#include <stdlib.h>

#define NUM_MATCHES 10

float calculateAverage(int *scores, int numMatches) {
    int sum = 0;
    for (int i = 0; i < numMatches; i++) {
        sum += scores[i];
    }
    return (float)sum / numMatches;
}

int main() {
    int *scores = (int *)malloc(NUM_MATCHES * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed\n");
        return 1; // indicate failure
    }

    printf("Enter the scores of %d matches:\n", NUM_MATCHES);
    for (int i = 0; i < NUM_MATCHES; i++) {
        printf("Match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    float average = calculateAverage(scores, NUM_MATCHES);
    printf("Average score of the %d matches: %.2f\n", NUM_MATCHES, average);

    free(scores); // free dynamically allocated memory

    return 0;
}
