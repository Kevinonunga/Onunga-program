/* 
NAME:Kevin Odhiambo Onunga 
REG : CT100/G/26137/25
DESCRIPTION:A program for password access.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char password[5];
	int i;
	
	do{
		printf("Enter password:\n");
		scanf("%4s", password);
		i++;
		
	}
	while(strcmp(password, "1234") != 0);
	{
		printf("Access Granted");
	}
	return 0;
}