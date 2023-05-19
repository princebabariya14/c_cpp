#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("The address of 'num' variable is: %p\n", &num);
    printf("The address of 'num' variable using pointer is: %p\n", ptr);

    return 0;
}
