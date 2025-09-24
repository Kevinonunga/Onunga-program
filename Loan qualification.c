/*
NAME: Kevin Odhiambo Onunga 
REG NO: CT100/G/26137/25
DESCRIPTION: Program checking if you qualify for loan;
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int age;
	int income;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter your income:");
	scanf("%d", &income);
	
	if (age >= 21 && income >= 21000) {
		printf("Congratulations you qualify for a loan");
	} else
	{
		printf("Unfortunatly, we are unable to offer you a loan at this time");
	}
	
	return 0;
}