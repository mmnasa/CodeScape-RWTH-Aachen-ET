#include "codescape.h"
void run() {
    int steps[] = {1,2,2,2,0,
                   3,2,2,2,2,
                   0,2,2,1,4};
    char direct[]={'l','r','r','r','r',
                   'r','l','r','r','r',
                   'r','l','r','l','l'};
    int moves=0;
    while (moves<16){
        
        
        for(int i=0;i<steps[moves];i++){
            move();
        }
        if (direct[moves]=='l'){
            turnLeft();
        }else if (direct[moves]=='r'){
            turnRight();
        }
        moves++;
    }
}