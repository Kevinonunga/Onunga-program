/* 
NAME:Kevin Odhiambo Onunga 
REG : CT100/G/26137/25
DESCRIPTION:A program for money withdrawal in an ATM.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int balance=500;
	int amount;
	
	printf("Your current balance is %d\n", balance);
	while(balance>0)
	{
     printf("Enter the amount you wish to withdraw:\n");
	 scanf("%d", &amount);
	 balance-=amount;
	 amount--; 
	 printf("Your balance is %d\n", balance);
	}
	printf("insuficient balance");
	return 0;
}


