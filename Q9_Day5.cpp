//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
int main(){
    float a,b,c;
	printf("Enter the value of Principal : ");
	scanf("%f \n",&a);
	printf("Enter the value of Rate: ");
	scanf("%f \n",&b);
	printf("Enter the value of Time : ");
	scanf("%f \n",&c);
	
	printf("Your Simple interest is : %0.2f \n",(a*b*c)/100 );
	return 0;
}