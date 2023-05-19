#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int* a, int* b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping by value
    swapByValue(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping by reference
    swapByReference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

