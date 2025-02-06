#include "codescape.h" 
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "List_missing_insert_behind.c"


// write your insert-behind method here:
#include <stdio.h>
int countMoveActions(listptr pActionQueue) {
    int moveCount = 0;
    listptr tempQueue = pActionQueue;


    char* actions[50]; 
    int actionCount = 0;

    while (!IsEmpty(*tempQueue)) {
        char* temp = Get(tempQueue);
        actions[actionCount++] = temp;
        if (*temp == 'm') moveCount++;
    }

    for (int i = 0; i < actionCount; i++) {
        Put(actions[i], tempQueue);
    }

    return moveCount;
}

void modifyQueue(listptr pActionQueue) {
    int moveCount = countMoveActions(pActionQueue);

    List newQueue;
    listptr newQueuePtr = &newQueue;
    Init(newQueuePtr);

    int inserted = 0;
    while (!IsEmpty(*pActionQueue)) {
        char* action = Get(pActionQueue);

        if (*action == 'm' && moveCount - inserted == 3) {
            Put("l", newQueuePtr);
        }

        Put(action, newQueuePtr);
        if (*action == 'm') inserted++;
    }

    *pActionQueue = *newQueuePtr;
}

void run(listptr pActionQueue) {
    modifyQueue(pActionQueue);  

    char* aktion = NULL;

    while(!(IsEmpty(*pActionQueue))){
        aktion = Get(pActionQueue);
        if(*aktion == 'm') move();
        else if(*aktion == 'r') turnRight();
        else if(*aktion == 'l') turnLeft();
        else if(*aktion == 'p') pickUp();
    }
}
