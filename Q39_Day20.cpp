//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int number, digit;
    long long product_of_odd_digits = 1; // Use long long to handle potentially large products
    int has_odd_digit = 0; // Flag to check if any odd digit was found

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle the case of 0 separately
    if (number == 0) {
        printf("The number 0 contains no odd digits. Product is 1 (empty product).\n");
        return 0;
    }

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10; // Get the last digit

        // Check if the digit is odd
        if (digit % 2 != 0) {
            product_of_odd_digits *= digit; // Multiply if it's an odd digit
            has_odd_digit = 1; // Set flag to true
        }
        number /= 10; // Remove the last digit
       
    }

    if (has_odd_digit) {
        printf("Product of odd digits: %lld\n", product_of_odd_digits);
    } else {
        printf("No odd digits found in the number. Product is 1 (empty product).\n");
    }

    return 0;
}