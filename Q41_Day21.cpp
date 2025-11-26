//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single-digit numbers or numbers where first and last are the same
    if (num >= 0 && num < 10) {
        printf("Number after swapping first and last digits: %d\n", num);
        return 0;
    }

    // Find the last digit
    lastDigit = num % 10;

    // Find the number of digits
    digitsCount = (int)log10(num);

    // Find the first digit
    firstDigit = num / (int)pow(10, digitsCount);

    // Remove the first digit and last digit from the number
    swappedNum = num - (firstDigit * (int)pow(10, digitsCount)) - lastDigit;

    // Add the new first digit (original last digit)
    swappedNum = swappedNum + (lastDigit * (int)pow(10, digitsCount));

    // Add the new last digit (original first digit)
    swappedNum = swappedNum + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}