#include <stdio.h>

// Program to swap two numbers using call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the value of A: ");
    scanf("%d", &num1);
    printf("Enter the value of B: ");
    scanf("%d", &num2);

    num2=swap(num1, num2);
    printf("After swap: value of A: %d, value of B: %d\n", num1, num2);

    return 0;
}

