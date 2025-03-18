#include "codescape.h"
void run() {
    for (int i=0; i<24; i++){
        if(i==6||i==8||i==21){
            turnRight();
        }else if (i==13||i==15){
            turnLeft();
        }
        if(i==21){
            pickUp();
        }
        while(!isMovePossible()){
            rest();
        }
        move();
    }
}
