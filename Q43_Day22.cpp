//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, remainder;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store the original number for comparison

    while (temp > 0) {
        remainder = temp % 10; // Get the last digit
        sum += factorial(remainder); // Add factorial of the digit to sum
        temp /= 10; // Remove the last digit
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}