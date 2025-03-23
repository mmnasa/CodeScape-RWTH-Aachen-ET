#include "codescape.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void turnAround(){
    for (int i=0 ; i<2 ; i++){
        turnRight();
    }
}

void run() {
	//Your Code here:
	
	char array[50];
	for (int i=0 ; i<11 ; i++){
	    if (i == 3||i == 6||i == 9){
	        turnLeft();
	    }
	    if (i==4){
	        read(array);
	        turnAround();
	    }
	    if (i==8){
	        turnLeft();
            int len = strlen(array);
                for (int j = 0; j < len / 2; j++) {
                    char temp = array[j];
                    array[j] = array[len - 1 - j];
                    array[len - 1 - j] = temp;
                }
                write(array);
	    }
	    if(i==10||i==8) {
	        turnRight();
	    }
	    move();
	}
}
