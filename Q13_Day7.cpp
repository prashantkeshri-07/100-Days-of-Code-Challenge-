//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");

    // Read the year input from the user
    scanf("%d", &year);

    // Check for leap year conditions using if-else if-else statements
    // A year is a leap year if it is divisible by 400
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    // OR if it is divisible by 4 but not by 100
    else if ((year % 4 == 0) && (year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    }
    // Otherwise, it is not a leap year
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0; // Indicate successful program execution
}