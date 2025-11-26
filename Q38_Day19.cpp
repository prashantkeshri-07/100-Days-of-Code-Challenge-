//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to extract digits and calculate their sum
    // The loop continues as long as 'number' is not zero
    while (number != 0) {
        // Extract the last digit using the modulo operator (%)
        digit = number % 10;
        
        // Add the extracted digit to the sum
        sum += digit;
        
        // Remove the last digit from the number by integer division
        number /= 10;
    }

    // Print the calculated sum of digits
    printf("Sum of the individual digits: %d\n", sum);

    return 0; // Indicate successful program execution
}