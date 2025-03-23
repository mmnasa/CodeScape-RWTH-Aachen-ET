#include "codescape.h"
#include <stdlib.h>
#include <string.h>
#include "List_missing_methods.c"

// Get inverse of movement command
char getInverse(char c) {
    switch (c) {
        case 'L': return 'R';
        case 'R': return 'L';
        case 'M': return 'M';
        default: return '\0';
    }
}
char* Pop(listptr stack) {
    if (IsEmpty(*stack)) return NULL;
    char* item = stack->first->data;
    Delete(item, stack);
    return item;
}

void run(listptr stackIn) {
    char* action;
    char password[20];

    List stack;
    listptr stackOut = &stack;
    Init(stackOut);
    
    move();
    turnRight();

    while (!IsEmpty(*stackIn)) {
        action = Pop(stackIn);
        if (action == NULL) continue;

        char c = action[0];

        switch (c) {
            case 'M': move(); break;
            case 'L': turnLeft(); break;
            case 'R': turnRight(); break;
        }

        // Save reverse command
        char inv = getInverse(c);
        if (inv != '\0') {
            char* rev = malloc(2);
            rev[0] = inv;
            rev[1] = '\0';
            Push(rev, stackOut);
        }
    }

    move();
    turnLeft();
    move();
    turnLeft();
    read(password);
    turnLeft();
    move();
    turnRight();
    move();

    // Return to start
    while (!IsEmpty(*stackOut)) {
        action = Pop(stackOut);
        if (action == NULL) continue;

        char c = action[0];

        switch (c) {
            case 'M': move(); break;
            case 'L': turnLeft(); break;
            case 'R': turnRight(); break;
        }
    }
    write(password);
    turnLeft();
    move();
    move();
}
