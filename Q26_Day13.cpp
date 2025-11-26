//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter a number
    printf("Enter a positive integer (n): ");
    // Read the input from the user
    scanf("%d", &n);

    // Check if the input is valid (positive)
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Loop from 1 to n and print each number
    printf("Numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Print a newline character at the end

    return 0; // Indicate successful execution
}