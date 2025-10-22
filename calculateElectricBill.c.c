/*
NAME: KEVIN ODHIAMBO ONUNGA
REG : VT100/G/26137/25
DESCRIPTION: C function calculating electric bill
*/

#include <stdio.h>

float calculateElectricBill(float unitsconsumed);

void main()
{
	float unitsconsumed, total_bill;
	printf("Enter the number of units consumed:\n");
	scanf("%f", &unitsconsumed);
	
	total_bill = calculateElectricBill(unitsconsumed);
	
	printf("Your total bill is: Ksh %.2f\n", total_bill);

}

float calculateElectricBill(float unitsconsumed){
	float bill;
	if(unitsconsumed<= 100)
		bill = unitsconsumed * 10;
	else if(unitsconsumed > 100 && unitsconsumed <=200)
	{
		bill =((100 * 10) + ((unitsconsumed - 100) * 15));
	}
	else
	{
		bill = ((100 *10)+ (100 * 15) + ((unitsconsumed - 200) * 20));
	}
	return bill;
}

