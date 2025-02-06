#include "codescape.h"
void run() {
    
    int nums[7]={6,2,5,2,6,0,3};
    for(int i=0; i<=6 ; i++){
        int moves=0;
        int num=nums[i];
        
        if(num==0){
            
            pickUp();
            continue;
        }
        
        while(moves<num){
            
            if(isMovePossible()){
                
               move();
               moves++;
            }else{
                
                rest();
            }
        }
        
        if(i==2 || i==3){
            turnLeft();
        }else{
            turnRight();
        }
    }
}