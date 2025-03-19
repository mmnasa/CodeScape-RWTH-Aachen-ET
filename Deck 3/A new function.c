#include "codescape.h"
void clearTerminal() {
    char pass[20]; 
    
    turnLeft();
    read(pass);  
    turnRight();
    move();   
    turnLeft();
    write(pass);
    turnRight();
}

void run() {
    for (int i = 0; i < 28; i++) {
        if (i == 2 || i == 23) {
            clearTerminal();  
            i++; 
        }
        while (!isMovePossible()) {
            if (i == 5) {
                turnRight();
            } else {
                turnLeft();
            }
        }
        if (i == 10) {
            pickUp();
        }
        move();
    }
}
