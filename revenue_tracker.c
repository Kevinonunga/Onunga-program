/*
NAME: Kevin Odhiambo Onunga
REG: 	CT100/G/26137/25
DESCRIPTION: A revenue tracker array showing weekly total and daily avarage revenue. 
*/

#include <stdio.h>

int main()
{
	float revenue[7];       
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  
    }

    average = total / 7;

    printf("Total Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

	return 0;
}