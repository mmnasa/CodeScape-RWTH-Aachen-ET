#include "codescape.h"
/**
 * Hier die zu erstellende Funktion moveX()
 */
void moveX(int x){
    for (int i=0;i<x;i++){
        move();
    }
}

void run() {
    turnRight();
    moveX(6);
    turnLeft();
    moveX(3);
    turnLeft();
    moveX(2);
    turnRight();
    moveX(2);
    turnLeft();
    moveX(2);
    turnLeft();
    moveX(2);
}
