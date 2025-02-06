#include "codescape.h"

   // Die Energiezellen sind nur mit sehr effizientem Programmieren sammelbar
void run() {
    int moves = 0;

    while (moves < 15) { 
        
            while (!isMovePossible()) {
                turnLeft();
                moves=0; 
            }
            move();
            moves++;
            if (moves==6){
                pickUp();
                turnLeft();
                move();
                pickUp();
            }
        
    }
}
