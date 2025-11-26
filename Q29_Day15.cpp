//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; // Use long long to handle larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Handle negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    // Handle factorial of 0
    else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}