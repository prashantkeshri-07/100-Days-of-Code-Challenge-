//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    int num, i, isPrime = 1;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle special cases for prime numbers
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else if (num == 2) {
        isPrime = 1; // 2 is the only even prime number
    } else if (num % 2 == 0) {
        isPrime = 0; // All other even numbers are not prime
    } else {
        // Check for divisibility by odd numbers up to the square root of num
        for (i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, it's not prime
                break;       // No need to check further
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}