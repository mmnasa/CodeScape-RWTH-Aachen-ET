#include "codescape.h"
void run() {
	// Hier sollte eine WHILE-Schleife verwendet werden
	// Die Karte ändert sich nur, wenn der Hund eine Aktion 
	// durchführt. isMovePossible() reicht nicht aus!
	// Dein Code hier:
	while (true){
	    if(isMovePossible()==1){
	    move();
	    }else{
	    turnRight();
	    }
	}
}