#include "codescape.h"
void run() {
    // Die Energiezellen sind nur mit sehr effizientem Programmieren sammelbar
	for(int i=0; i<9; i++){
	    if (i==6 || i==7){
	        pickUp();
	        turnLeft();
	    }
	    while(!isMovePossible()){
	        turnLeft();
	        i=0;
	    }
	    move();
	}
}
