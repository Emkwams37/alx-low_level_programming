#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                // Print a space for white squares
                printf(" ");
            } else {
                // Print an asterisk for black squares
                printf("*");
            }
        }
        printf("\n");  // Move to the next row after completing a row
    }

    return 0;
}
