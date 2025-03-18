#include "codescape.h"
void run() {
    int i = 0;
    int turn = 7;
    int nextTurn = turn;

    for (; i < 35; i++) {
        if (i == nextTurn) {
            turnRight();
            nextTurn += turn;
            turn--;
        }
        move();
    }
}
