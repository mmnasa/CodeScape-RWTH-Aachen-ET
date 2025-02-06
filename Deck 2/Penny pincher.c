#include "codescape.h"
void run() {
    
    int moves=0;
    while (moves<27) {
        move();
        moves++;
        
        while (isMovePossible() == 0) {
            turnRight();
        }
        if(moves == 11) {
                turnRight();
        }else if(moves == 14) {
                pickUp();
        }
        
        
    }
}