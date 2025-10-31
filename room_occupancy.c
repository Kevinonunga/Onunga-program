/*
NAME: Kevin Odhiambo Onunga
REG: 	CT100/G/26137/25
DESCRIPTION: A room occupancy 2D array
*/

#include <stdio.h>

int main()
{
	int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    printf("Enter room occupancy data (1 = occupied, 0 = vacant):\n");

    for (floor = 0; floor < 5; floor++) {
        printf(" Floor %d \n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d - Occupied: %d, Vacant: %d\n",
               floor + 1, occupied, vacant);
    }
	return 0;
}