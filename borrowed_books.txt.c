/*
NAME : Kevin Odhiambo Onunga 
REG  : CT100/G/26137/25
DESCRIPTION : A program storing book titles in a file borrowed_books.txt.
*/

#include <stdio.h>

int main(void) {
    char title[256];
    FILE *file;

    printf("Enter the book title: ");
    if (fgets(title, sizeof(title), stdin) == NULL) {
        printf("Error in reading input.\n");
        return 1;
    }

    {
        int i = 0;
        while (title[i] != '\0') {
            if (title[i] == '\n') {
                title[i] = '\0';
                break;
            }
            i++;
        }
    }

    file = fopen("borrowed_books.txt", "a");  
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(file, "%s\n", title);
    fclose(file);

    printf("Book title \"%s\" was successfully stored.\n", title);

    return 0;
}
