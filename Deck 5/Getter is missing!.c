#include "codescape.h" 
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "List_missing_methods.c"

// write your get method here:
char* Get(listptr queue)
{
    if (IsEmpty(*queue)) return NULL;

    char* item = queue->first->data;
    Delete(item, queue);
    return item;
}

void run(listptr pActionQueue) {
    char* aktion;
    while (!IsEmpty(*pActionQueue)) {
        aktion = Get(pActionQueue);

        switch (*aktion) {
            case 'm': 
                move();
                break;
            case 'l': 
                turnLeft();
                break;
            case 'r': 
                turnRight();
                break;
        }
    }
}
