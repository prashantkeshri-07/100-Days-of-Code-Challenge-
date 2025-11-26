//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
int main(){
	int a,b;
	printf("enter your 1st number:");
	scanf("%d",&a);
	printf("enter your 2nd number:");
	scanf("%d",&b);
	int sum= a+b;
    int difference = a-b;
	int product = a*b;
	int quotient = a/b;
	printf("the sum is : %d  \n",sum);
	printf("the difference is :%d  \n",difference);
	printf("the product is : %d \n",product);
	printf("the quotient is : %d \n",quotient);
	return 0;
}