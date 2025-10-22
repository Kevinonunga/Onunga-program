/*
NAME: Kevin Odhiambo Onunga 
REG: CT100/G/26137/25
DESCRIPTION: Program converting fahrenheit temperature to degrees celcius
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit);\

int main()
{
	float temperature, convertedtemp;
	
	printf("Enter the temperature in Fahrenheit:\n");
	scanf("%f", &temperature);
	
	convertedtemp = convertToCelsius(temperature);
	
	printf("The temperature is: %.2f celcius", convertedtemp);
	return 0;
}

float convertToCelsius(float fahrenheit){
	float c;
	
	c = (fahrenheit - 32) * 5/9;
	
	return c;
}