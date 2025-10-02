/*
NAME: KEVIN ODHIAMBO ONUNGA 
REG: CT100/G/26137/25
DESCRIPTION: PROGRAM FOR FINAL EXAMS ELIGIBILITY
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float attendance;
	float marks;
	
	printf("Enter your total class attendance percentage:\n");
	scanf("%f%%", &attendance);
	
	printf("Enter your average marks:\n");
	scanf("%f", &marks);
	
	if ( attendance >=75 && marks >=40){
		printf("You are eligible for final exams");
	} else
	{
		printf("Not eligible for final exams");
	}
	return 0;
}