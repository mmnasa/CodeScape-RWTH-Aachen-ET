#include "codescape.h"
void run() {
	// Hier sollte eine WHILE-Schleife verwendet werden
	// Die Karte ändert sich nur, wenn der Hund eine Aktion 
	// durchführt. isMovePossible() reicht nicht aus!
	// Dein Code hier:
	for(int i=0; i<7; i++){
	    while(!isMovePossible()){
	        rest();
	    }
	    move();
	}
}
