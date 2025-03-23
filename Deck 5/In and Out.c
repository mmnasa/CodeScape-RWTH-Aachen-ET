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

    // Custom extra movement instructions
    char extraIn[]  = { 'M', 'L', 'M', 'L', 'P', 'L', 'M', 'R', 'M' };
    int extraInLen  = sizeof(extraIn) / sizeof(extraIn[0]);

    char extraOut[] = { 'W', 'L', 'M', 'M' };
    int extraOutLen = sizeof(extraOut) / sizeof(extraOut[0]);

    // Reverse path stack
    List stack;
    listptr stackOut = &stack;
    Init(stackOut);

    // Start movement
    move();
    turnRight();

    // Step 1: Process original stackIn
    while (!IsEmpty(*stackIn)) {
        action = Pop(stackIn);
        if (action == NULL) continue;

        char c = action[0];
        switch (c) {
            case 'M': move(); break;
            case 'L': turnLeft(); break;
            case 'R': turnRight(); break;
        }

        char inv = getInverse(c);
        if (inv != '\0') {
            char* rev = malloc(2);
            rev[0] = inv;
            rev[1] = '\0';
            Push(rev, stackOut);
        }
    }

    // Step 2: Execute extraIn
    for (int i = 0; i < extraInLen; i++) {
        char c = extraIn[i];
        switch (c) {
            case 'M': move(); break;
            case 'L': turnLeft(); break;
            case 'R': turnRight(); break;
            case 'P': read(password); break;
        }
    }

    // Step 3: Return path
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

    // Step 4: Execute extraOut
    for (int i = 0; i < extraOutLen; i++) {
        char c = extraOut[i];
        switch (c) {
            case 'M': move(); break;
            case 'L': turnLeft(); break;
            case 'R': turnRight(); break;
            case 'W': write(password); break;
        }
    }
}
