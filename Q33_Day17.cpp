//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    // This loop is for finding 'n', the number of digits in the input number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num; // Reset originalNum to the input number

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n); // Calculate digit raised to the power of n
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}