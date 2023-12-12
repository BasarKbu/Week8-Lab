#include<stdio.h>
//Determine the temperature if it is below the freezing point or below the freezing point.
//But I added the freezing point as well to the question. 
int main(){
	float C;
printf("Enter the degree in celcius type: \n"); scanf("%f",&C);

if(C>0)
printf("The degree is above the freezing point \n");
else if(C == 0)	
printf("The degree is equall to the freezing point. \n");	
else
printf("The degree is below the freezing point. \n");	
	
	return 0;
}
