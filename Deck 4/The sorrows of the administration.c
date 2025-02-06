#include "codescape.h"
#include <string.h>

/**
 * Vorgefertigte Funktion
 * Kombination einer Vorwärtsbewegung und einer Drehung
 * @param steps Anzahl der Schritte
 * @param direction Richtung der anschließenden Drehung
 */
void moveThenTurn(int steps, char direction) {
	for (int i=0; i<steps; i++) {
		move();
	}
	if (direction == 'l') {
		turnLeft();
	} else if (direction == 'r') {
		turnRight();
	}
}
void run() {
    // Declare movement directions
    char direct[] = {'l','l','r','r','l',
                     'l','l','r','r','r',
                     'l','l','r','r','l',
                     'l','r','r','l','l',
                     'l','r','r','r','l',
                     'l','r','r','r'};  
                     
    int movment[] = {1,3,1,0,2,
                     0,1,6,1,0,
                     2,0,1,3,5,
                     3,1,0,2,0,
                     1,6,1,0,2,
                     0,1,3,1}; 

    int length = sizeof(direct) / sizeof(direct[0]); // Get the length of the arrays
    int nSteps=0;
    char pass[15];
    
    for (int i = 0; i < length; i++) {
        moveThenTurn(movment[i], direct[i]);
        nSteps++;
        if(nSteps==3||nSteps==9||nSteps==17||nSteps==23){
            read(pass);
        }else if(nSteps==5||nSteps==11||nSteps==19||nSteps==25){
            write(pass);
        }
    }
}