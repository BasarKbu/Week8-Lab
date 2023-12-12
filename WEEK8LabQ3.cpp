#include<stdio.h>
//This program decides if the number is even or odd
int main(){
int number;	
	printf("Enter a number: \n"); scanf("%d",&number);
	if(number % 2 == 0)
	printf("Number is even.");
	else
	printf("Number is odd.");
	
	return 0;
}
