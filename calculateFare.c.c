/*
NAME: Kevin Odhiambo Onunga 
REG: CT100/G/26137/25
DESCRIPTION: Program to calculate the fare of a distance taken.
*/

#include <stdio.h>

float calculateFare(float distance);
int main()
{
	float distance, totalfare;
	printf("Enter the distance covered in kilometers:\n");
	scanf("%f", &distance);
	
	totalfare = calculateFare(distance);
	
	printf("Your total fare is Ksh %.2f\n", totalfare);
	
	return 0;
}

float calculateFare(float distance){
	float fare;
	fare = distance * 50;
	return fare;
}
