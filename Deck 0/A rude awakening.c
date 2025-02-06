#include "codescape.h"
void run() {
    int max = 11;
    int start = 0;
    
    while (isMovePossible()==1 && start<max) {
        move();
        start++;
        while (isMovePossible()==0) {
        pickUp();
        turnRight();
        
    }
    }
    turnRight();
    while (isMovePossible()==1) {
        move();
    }
}