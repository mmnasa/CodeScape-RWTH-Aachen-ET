#include <stdio.h>
#include "string.h"
#include "codescape.h"
#include "List_missing_methods.c"

char* Get(listptr queue)
{ 
//Your code here...
    //-------------------------------
    if (IsEmpty(*queue)) return NULL;
    
        char* item = queue->first->data;
        Delete(item, queue);
        return item;
    //-------------------------------
}
char* excecute(char* c, char pw[])
{
    int n = *c-48;
    turnRight();
    move();
    if(n==3 || n==4)
    {
        for(int i=0;i<3;i++)
            move();
    }
    else if (n==5 || n==6)
    {
        for(int i=0;i<6;i++)
            move();
    }
    
    if(n%2==1)
    {
        turnRight();
        for(int i=0;i<4;i++)
            move();
        turnRight();
        read(pw);
        turnRight();
        for(int i=0;i<4;i++)
            move();
        turnLeft();
        while(isMovePossible())
        {
            move();
        }
        turnRight();
        
    }
    else 
    {
        turnLeft();
        for(int i=0;i<4;i++)
            move();
        turnLeft();
        read(pw);
        turnLeft();
        for(int i=0;i<4;i++)
            move();
        turnRight();
        while(isMovePossible())
        {
            move();
        }
        turnRight();

    }  
    char* temp = pw;
    return temp;
}

void run(listptr queue)
{
    char result[20]="";
    char temp[4];
    char* act;
    while(!IsEmpty(*queue))
    {
        act = Get(queue);
        excecute(act, temp);
        strcat(result,temp);
    }
    turnLeft();
    write(result);
    for(int i = 0;i<2;i++){
        turnRight();
    }
    for(int i = 0;i<10;i++){
        move();
    }
    turnLeft();
    for(int i = 0;i<4;i++){
        move();
    }
}
