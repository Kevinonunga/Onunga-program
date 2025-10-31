/*
NAME: Kevin Odhiambo Onunga
REG: 	CT100/G/26137/25
DESCRIPTION: A 3D array showing the data of three branches of a hotel.
*/

#include <stdio.h>

int main()
{
	int chain[3][5][10];   
    int branch, floor, room;
    int totalOccupied = 0;

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                
                chain[branch][floor][room] = (branch + floor + room) % 2;
            }
        }
    }

    for (branch = 0; branch < 3; branch++) {
        printf(" Branch %d \n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            int occupied = 0, vacant = 0;

            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }

            printf("Floor %d - Occupied: %d, Vacant: %d\n",
                   floor + 1, occupied, vacant);
            totalOccupied += occupied;
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

	return 0;
}