#include "codescape.h"
void run(char *keys[]) {
    // "keys" beinhaltet alle Passwörter. Diese werden der Reihenfolge nach an den jeweiligen Terminals eingegeben
    int x = 0;  

    for (int i = 0; i < 17; i++) {
        if (i == 3 || i == 5 ) {
            turnLeft();
            write(keys[x]);
            turnRight();
            x++; 
        }else if(i == 11 || i == 13) {
            turnRight();
            write(keys[x]);
            turnLeft();
            x++; 
        }
        while(!isMovePossible()){
            turnRight();
        }
        move();
    }
}
