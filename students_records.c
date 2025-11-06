/*
NAME : Kevin Odhiambo Onunga 
REG  : CT100/G/26137/25
DESCRIPTION : Program to read student records from a binary file and display their names and marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    // Use the correct path to your results.dat
    file = fopen("C:\\Users\\HomePC\\Documents\\Y1S1 NOTES\\Programming\\results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Student Name\tTotal Marks\n");
    
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%s - %d\n", s.name, s.totalMarks);
    }

    fclose(file);
    return 0;
}
