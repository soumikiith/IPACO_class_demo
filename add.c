#include <stdio.h>

int main() {
    int a, b, sum;

    // Input: Get two integers from the user
    // printf("Enter the first integer: ");
    scanf("%d", &a);

    // printf("Enter the second integer: ");
    scanf("%d", &b);

    // Calculate the sum of the two integers
    sum = a + b;

    // Output: Print the result
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
