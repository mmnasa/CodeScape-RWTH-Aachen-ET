#include "codescape.h"
#include <stdlib.h>
#include <string.h>

void run(char array[]) {
    int moves = 0;
    int indexOfA = -1;  
    int arrayLength = strlen(array);  

    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == 'a') {
            indexOfA = i;
            break;  
        }
    }
    while (moves < 25) {
        move();
        moves++;
        if (moves == 2 || moves == 12) {
            turnLeft();

            if (moves == 2 && indexOfA != -1) {
                writeInt(indexOfA);
            }
            if (moves == 12) {
                char temp[2] = { array[5], '\0' };
                write(temp);
            }
            turnRight();
        } 
        else if (moves == 3 || moves == 11) {
            turnLeft();
        }
        else if (moves == 7 || moves == 9) {
            turnRight();
            pickUp();
        }
    }
}
