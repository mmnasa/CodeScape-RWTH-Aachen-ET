#include "codescape.h"
void run() {
    for (int i=0;i<27;i++){
        while (!isMovePossible()){
            turnRight();
        }
        if (i == 11) {
            turnRight();
        }
        if (i == 14) {
            pickUp();
        }
        move();
    }
}
