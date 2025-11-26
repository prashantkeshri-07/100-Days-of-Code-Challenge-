//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
	#include<stdio.h>
	int main(){
		float a;
		printf("Enter your temperature in celsius : ");
		scanf("%f",&a);
		printf("Given temperature in fahrenheit : %0.2f \n",(a*9/5)+32);
		return 0;
	}