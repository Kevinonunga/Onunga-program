// Prompt age, Phone number, Height and Weight
/*
NAME: Kevin Odhiambo Onunga 
REG: CT100/G/26137/25
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int age;
	int phone;
	float height;
	float weight;

	printf("Please enter your age:");
	scanf("%d", & age);
	
	printf("Please enter your phone number:");
	scanf("%d", & phone);
	
	printf("Please enter your height:");
	scanf("%f", &height);
	
	printf("Please enter your weight:");
	scanf("%f", &weight);
	
	printf("Your age is %d\n", age);
	printf("Your phone number is %d\n", phone);
	printf("Your height is %.2f\n", height);
	printf("Your Weight is %.2f\n", weight);
	
	
	return 0;
}