//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");

    // Read the integer from the user
    scanf("%d", &number);

    // Outer if-else to check if the number is non-positive or positive
    if (number <= 0) {
        // Inner if-else to distinguish between zero and negative
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is negative.\n");
        }
    } else {
        // If the outer condition (number <= 0) is false, the number must be positive
        printf("The number is positive.\n");
    }

    return 0;
}