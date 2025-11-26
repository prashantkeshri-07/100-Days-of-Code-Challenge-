//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Input number of terms : ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    // The sum of the first n odd numbers is n*n
    sum = n * n;

    // Print the result
    printf("The Sum of odd Natural Number upto %d terms : %d\n", n, sum);

    return 0;
}