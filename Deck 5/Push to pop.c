#include "codescape.h"
#include <stdio.h>
#include <stdlib.h>
#include "List.c"

#define MAX 100

void run() {
// Push all actions on the stack (pActionStack) in the right order
    List stack;
    listptr pActionStack = &stack;
    Init(pActionStack);    
    //----------LIFO----------
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("r", pActionStack);
    Push("m", pActionStack);
    Push("l", pActionStack);
    Push("p", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("r", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("r", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("l", pActionStack);
    Push("l", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    Push("l", pActionStack);
    Push("m", pActionStack);
    Push("r", pActionStack);
    Push("m", pActionStack);
    Push("m", pActionStack);
    //--------------------

    char* aktion;
    while(!(IsEmpty(*pActionStack))){
        aktion = Pop(pActionStack);
        
        switch(*aktion){
            case 'm': 
                move();
                break;
            case 'l': 
                turnLeft();
                break;
            case 'r': 
                turnRight();
                break;
            case 'p': 
                pickUp();
                break;
        }
    }
}

