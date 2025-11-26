//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("\n Enter first integer:  ",num1);
    scanf("%d",&num1);
        printf("\n Enter second integer: ",num2);
         scanf("%d",&num2);
            printf("\n Enter third integer: ",num3);
             scanf("%d",&num3);


    // Check if num1 is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    }
    // Check if num2 is the largest
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    }
    // If neither num1 nor num2 is the largest, then num3 must be
    else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}