#include "codescape.h"
/**
 * A parameter that is required to solve the room
 * is passed on to the function run().
 * nr Nummer des Teleporters, der zum Ausgang führt
 */
void run(int nr) {
    for (int i = 0; i < 11; i++) {
        if ((nr <= 2 && i == 2) || (nr >= 3 && i == 5)) {
            turnLeft();
        } else if (i == 2 || i == 5) {
            turnRight();
        }
        if (i == 7) {
            if (nr % 2 == 0) {
                turnRight();
            } else {
                turnLeft();
            }
        }
        if (i == 9) {
            while (!isMovePossible()) {
                turnLeft();
            }
        }
        if (i == 10) {
            pickUp();
        }
        move();
    }
}
