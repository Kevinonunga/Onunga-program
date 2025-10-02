/*
NAME: Kevin Odhiambo Onunga 
REG NO: CT100/G/26137/25
DESCRIPTION: Program to calculates users water bill
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float units;
	float bill;
	
	printf("Enter the number of water units consumed:\n");
	scanf("%f", &units);
	
	if ( units >=0 && units <=30){
		bill = 20 * units;
		
	}
	 else if( units >=31 && units <=60){
		bill = (20 * 30) + ((units - 30) * 25); 
		
	}
	 else if( units > 60)
	{ bill = (30 *20) + (30 * 25) + ((units - 60) * 30);
	}
	
	printf("Total water bill:\n %.2fKES", bill);
	return 0;
}