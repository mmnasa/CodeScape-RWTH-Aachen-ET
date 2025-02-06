#include "codescape.h"
void re_er() {
    char pass[100];
    
    turnLeft();
    read(pass);
    turnRight();
    move();
    turnLeft();
    write(pass);
    turnRight();
}

void run() {
    int moves = 0;
    
    while (moves < 30) {
        if (isMovePossible()) {
            if (moves == 2 || moves == 23) {
                re_er();
                moves++;  
            } else {
                move();
                moves++;
            }
        }else if (!isMovePossible() && (moves == 5 || moves == 16)) {
            turnRight();
        } else if (!isMovePossible() && moves == 10 ) {
            turnRight();
            pickUp();
        }else {
            turnLeft();
        }
    }
}