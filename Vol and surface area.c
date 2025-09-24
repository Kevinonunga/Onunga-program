/*
NAME: Kevin Odhiambo Onunga
REG NO: CT100/G/26137/25
DESCRIPTION: Program to compute volume and surface area of a cylinder  
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	float radius;
	float height;
	float volume;
	float surface_area;
	
	printf("Enter the radius:\n");
	scanf("%f", &radius);
	
	printf("Enter the height:\n");
	scanf("%f", &height);
	
	volume = M_PI * radius * radius * height;
	
	surface_area = 2 * M_PI * radius * radius + 2 * M_PI * radius * height;
	
	printf("Volume = %.4f\n", volume);
	printf("Surface Area = %.4f", surface_area);
	
	return 0;
}