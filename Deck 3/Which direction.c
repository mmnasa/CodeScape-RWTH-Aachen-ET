#include "codescape.h"
void run(char* key) {
// char* key describes which portal is correct
// (u = bottom, o = top, r = right, l = left)
// all other portals lead to the laser
    
    for(int i=0;i<2;i++){
        if (*key=='l'){
        turnLeft();   
        }
    }
    if (*key=='o'){
        turnLeft();
    }else if(*key=='u'){
        turnRight();
    }
    int moves=0;
    while(moves<10){
        if(!isMovePossible()){
            turnRight();
        }else{
            move();
        moves++;
        if(moves==6){
            pickUp();  
        }
        }
        
    }
}