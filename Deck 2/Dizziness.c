#include "codescape.h"
void run() {
    int moves = 0;
    int i = 7; // Initial value of i
    int count = 0; // Counter for condition executions

    while (true) {
        move();
        moves++;

        if (moves % i == 0) {
            turnRight();
            count++; // Increment the counter each time the condition is met
            if (count > 1) {
                i--; // Decrement i only after the first time
            }
            moves = 0; // Reset moves
        }
    }
}
