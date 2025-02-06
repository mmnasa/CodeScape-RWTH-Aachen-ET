#include "codescape.h"
#include <stdlib.h>
#include <string.h>
void run() {
    // Reading the string and moving the RB to the beginning of the maze.
    move();
	turnLeft();
	/**
	 * A word consisting of the letters "L", "M" and "R" is read.
	 * The letters are separated by a comma.
	 * The variable "weg" could look like this: "M,L,M,R,M".
	 */
	char weg[25];
	read(weg);
	for (int i=0; i<2; i++) {
		turnRight();
	}

	// Split the string into an array using char * strtok ( char * str, const char * delimiters )
	// and program the running of the correct path!
    // Your Code here:
	char take[]=",";
	
	char *trueway=strtok(weg,take);
	
	while (trueway!=NULL){
	        if (*trueway=='M'){
	            move();
	        }else if(*trueway=='L'){
	            turnLeft();
	        }else if(*trueway=='R'){
	            turnRight();
	        }
        trueway = strtok(NULL, take);
	}
	move();
	turnLeft();
	move();
}