//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until the number becomes 0
    while (num != 0) {
        // Get the last digit of the number
        remainder = num % 10;

        // Build the reversed number
        reversedNum = reversedNum * 10 + remainder;

        // Remove the last digit from the original number
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number = %d\n", reversedNum);

    return 0;
}