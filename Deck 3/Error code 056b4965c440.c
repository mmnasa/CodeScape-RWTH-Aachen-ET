#include "codescape.h"
#include <stdlib.h>
#include <string.h>
void run(char array[]) {
    int moves = 0;

    while (moves < 25) {
        move();
        moves++;
        if (moves == 2 || moves == 12) {
            turnLeft();
            for (int i = 0; i < strlen(array); i++) {
                if (array[i] == '\0') break;
                char temp[1];
                temp[0] = array[i];
                temp[1] = '\0';
                write(temp);
            }
            turnRight();
        }else {
            if (moves == 3 || moves == 11) {
                turnLeft();
            } else if ( moves == 7 || moves == 9) {
                turnRight();
                pickUp();
            }
        }
    }
}