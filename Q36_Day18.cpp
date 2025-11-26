//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure both numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Indicate an error
    }

    // Euclidean algorithm for GCD
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    // When num1 equals num2, that value is the HCF
    printf("The HCF (GCD) is: %d\n", num1);

    return 0; // Indicate successful execution
}