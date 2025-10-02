/*
NAME: Kevin Odhiambo Onunga 
REG NO: CT100/G/26137/25
DESCRIPTION: Program for data bundle purchase
*/

#include <stdio.h> 

int main(int argc, char** argv)
{
	int choice;
	
	printf("select your choice of data bundle:\n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200KES \n");
	printf("3. 1GB   @ 350KES \n");
	printf("4. 2GB   @ 600KES \n");
	printf("Enter you data bundle choice (1-4):");
	scanf("%d", &choice);
	
	if ( choice == 1){
		printf("You have selected 100MB Cost 50KES");
	} 
	else if( choice == 2){
		printf("You have selected 500MB Cost 200KES");
	}
	else if( choice == 3){
		printf("You have selected 1GB Cost 350KES");
	}
	else if( choice == 4){
		printf("You have selected 2GB Cost 600KES");
	}
	else
	{
		printf("Invalid Choice!");
	}
	
	return 0;
}