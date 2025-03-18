#include "codescape.h"
void run() {
    // Verwende WHILE/FOR-Schleifen
    // Es ist sinnvoll hier den Modulooperator "%" zu verwenden
    // Dein Code hier:
    int turnCount=1;
    for(int i=0; i<14; i++){
        while(!isMovePossible()){
           if(turnCount%2==0){
                turnLeft();
            }else{
                turnRight();
            }
            turnCount++;
        }
        move();
    }
}
