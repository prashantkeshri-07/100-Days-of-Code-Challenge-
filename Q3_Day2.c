//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
	int a,b;
	printf("enter your length :");
	scanf("%d",&a);
	printf("enter your breadth :");
	scanf("%d",&b);
	printf("Perimeter of rectangle is :%d \n",2*(a+b));
	printf("Area of rectangle is : %d \n", a*b);
	return 0;
}