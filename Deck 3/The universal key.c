#include "codescape.h"
void run(char *keys[]) {
    // "keys" beinhaltet alle Passwörter. Diese werden der Reihenfolge nach an den jeweiligen Terminals eingegeben
   int moves=0;
   while(moves<20){
       move();
       moves++;
       if (moves==3){
           turnLeft();
           write(keys[0]);
           turnRight();
       }else if(moves==5){
           turnLeft();
           write(keys[1]);
           turnRight();  
       }else if(moves==7||moves==10){
           turnRight();
       }else if(moves==11){
           turnRight();
           write(keys[2]);
           turnLeft();  
       }else if(moves==13){
           turnRight();
           write(keys[3]);
           turnLeft();  
       }
   }
}