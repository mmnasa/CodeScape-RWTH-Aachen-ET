#include "codescape.h"
#include <stdlib.h>

void run(char array[]) {
    int moves = 0;
    int indexOfA = -1;  

    // Find first 'a'
    for (int j = 0; array[j] != '\0'; j++) {
        if (array[j] == 'a') {
            indexOfA = j;
            break;
        }
    }
    
    for (int i=0; i<13; i++) {
        if (i == 2 || i == 12 || i == 3 || i == 11) {
            turnLeft();
            if (i == 2) {
                writeInt(indexOfA);
            }
            if (i == 12) {
                char temp[2] = { array[5], '\0' };
                write(temp);
            }
        } 
        if (i == 7) {
            pickUp();
        }
        while(!isMovePossible()){
            turnRight();
        }
        move();
    }
}
