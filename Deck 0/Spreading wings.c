#include "codescape.h"
void run() {

    int maxMoves = 100; 
    int moveCount = 0;


    while (isMovePossible() == 1 && moveCount < maxMoves) {
        move();
        moveCount++;
        pickUp();
        
        if (moveCount > 7) {
        turnRight();
        }
        
         while (isMovePossible() ==0) {
        turnLeft();
         }
        
    
    }
}