//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // First term is 1
    sum = 1.0; 

    // Loop for the remaining terms (from the second term onwards)
    for (i = 2; i <= n; i++) {
        // Numerator: 2*i - 1 (3, 5, 7, ...)
        // Denominator: 2*i - 2 + 2 = 2*i (4, 6, 8, ...)
        sum += (double)(2 * i - 1) / (2 * i); 
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}