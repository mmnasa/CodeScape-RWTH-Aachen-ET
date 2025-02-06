#include "codescape.h"

void turnAround() {
    
    for(int i=0;i<2;i++){
        turnLeft();
    }
}
void angle() {
    int movesA = 0;  
    turnRight();

    while (movesA < 8) { 
        if (!isMovePossible()) {
            rest();
            continue;
        }

        move();
        movesA++;

        if (movesA == 2 || movesA == 6) {
            pickUp();
            turnAround();
        } else if (movesA == 4 || movesA == 8) {
            turnRight();
        }
    }
}

void run() {
    int moves = 0;

    // Initial move and turn
    move();
    turnLeft();

    while (moves < 16) {  
        move();
        moves++;

        if (moves%4==0) {  
            angle();
        }
    }
    move();
    turnLeft();
    move();
}