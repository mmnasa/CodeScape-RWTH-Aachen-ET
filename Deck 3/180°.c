#include "codescape.h"
// Write the function turnOver() here: 
void turnOver(){
    for (int j =0 ; j<2 ; j++){
    turnRight();
    }
    
    
}



void run() {
    move();
    for(int i=0; i<3; i++) {
	    turnLeft();
	    move();
	    pickUp();
	    turnOver();
	    move();
	}
	turnLeft();
    for(int i=0; i<2; i++) {
        move();
    }
}
