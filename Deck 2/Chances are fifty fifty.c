#include "codescape.h"
#include <stdio.h>
void run() {
    // Die Ausgabe von read() in diesem Raum ist entweder "L" oder "R"

	// Dein Code hier:
	move();
	turnLeft();
	char output[2];
	read(output);
    printf("Output: %s", output);
    turnRight();
    move();
    switch (output[0]){
        case 'L': turnLeft(); break;
        case 'R': turnRight(); break;
    }
    move();
}
