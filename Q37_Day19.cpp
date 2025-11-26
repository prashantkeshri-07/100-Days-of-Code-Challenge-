//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int calculateLCM(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; // LCM is 0 if either number is 0
    }
    int gcd = calculateGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure numbers are positive for GCD/LCM calculation
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int lcm = calculateLCM(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}