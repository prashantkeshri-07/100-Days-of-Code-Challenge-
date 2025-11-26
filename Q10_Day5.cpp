//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
	int a;
	printf("Enter your time in seconds :");
	scanf("%d",&a);
	int b,c;
	printf("Your value in Hour :%d \n",a/3600);
	printf("Your value in Minute:%d\n",(a%3600)/60);
	printf("Your value in Seconds : %d\n",a%60);
	int Hours = a/3600;
	int Minutes = (a%3600)/60;
	int Seconds = a%60;
	printf("Your time in H:M:S : %d:%d:%d",Hours,Minutes,Seconds);
	
	return 0;
}


