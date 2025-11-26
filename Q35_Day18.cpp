//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop from 1 to the number itself
    for (i = 1; i <= num; i++) {
        // Check if 'i' divides 'num' without a remainder
        if (num % i == 0) {
            printf("%d ", i); // If it does, print 'i' as a factor
        }
    }
    printf("\n"); // Print a newline for better formatting

    return 0; // Indicate successful execution
}