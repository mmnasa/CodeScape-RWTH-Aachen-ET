#include "codescape.h"
void run() {
    int turnCount = 0;

    while (true) {
        if (isMovePossible()) {
            move();
        } else {
            if (turnCount % 2 == 0) { //this means that every time we devide turnCount/2 the remainder is 0
                turnRight(); 
            } else {
                turnLeft(); 
            }
            turnCount++; 
        }
    }
}
