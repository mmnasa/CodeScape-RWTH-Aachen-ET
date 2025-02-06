#include "codescape.h"
//RB moves forward with m and turns left with l
void moveThenTurnLeft(int m, int l) {
    for(int i=0; i<m; i++) move();
    for(int i=0; i<l; i++) turnLeft();
}

//Write the swap function here
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}




void run() {
    int forward = 3;
    int left = 1;
    for(int i=0; i<5; i++) {
        moveThenTurnLeft(forward, left);
        swap(&forward, &left);
        
        
    }
}