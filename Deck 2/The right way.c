#include "codescape.h"
void run(int nr) {
    for (int i=0;i<=1;i++){
        move();
    }
    if (nr<=2){
        turnLeft();
    }else { 
        turnRight();
    }
    for (int i=0;i<=2;i++){
        move();
    }
    if (nr>2){
        turnLeft();
    }else { 
        turnRight();
    }
    for (int i=0;i<=1;i++){
        move();
    }
    if(nr%2==0){
        turnRight();
        for (int i=0;i<=1;i++){
        move();
    }
    }else{
        turnLeft();
        for (int i=0;i<=1;i++){
        move();
        }
        for (int i=0;i<=1;i++){
            turnLeft();
        }
    }
        move();
        pickUp();
        move();
}
