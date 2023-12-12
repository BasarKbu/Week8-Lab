#include<stdio.h>
//This program calculates the sum of two numbers.
int main(){
	int n1,n2,sum=0;
	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
	
	sum=n1+n2;
	printf("Sum of the two numbers is:%d ",sum);
	
	return 0;
}
