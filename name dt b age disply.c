#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *numbers;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' numbers
    numbers = (int*) malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of the %d numbers is: %d\n", n, sum);

    // Free dynamically allocated memory
    free(numbers);

    return 0;
}

