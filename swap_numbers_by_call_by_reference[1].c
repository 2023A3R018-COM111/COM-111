#include <stdio.h>

// Function to swap two numbers using call by value
void swapByValue(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the value of A: ");
    scanf("%d", &num1);
    printf("Enter the value of B: ");
    scanf("%d", &num2);

    // Passing values to the function
    swapByValue(&num1, &num2);

    printf("\nAfter swap: value of A: %d, value of B: %d\n", num1, num2);

    return 0;
}

