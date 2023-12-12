#include<stdio.h>
#include<math.h>
//This program calculates the area of the circle.
int main(){
	float r,area;
	printf("Enter the radius: \n"); scanf("%f",&r);
	area=M_PI*pow(r,2);
	
	printf("The area of the circle is:%f",area);
	
	return 0;
}
