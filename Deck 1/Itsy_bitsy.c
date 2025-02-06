#include "codescape.h"
#include <stdio.h>
#include <string.h>
// A logical operation ('>', '<', '&', '|', ‘<<’, ‘<<’) is specified at the first terminal.
// The run function returns the first operand for this operation.
// Read the second operand from the second terminal with \"int readInt()\".
// Write the result to the console with \"writeInt(int)\" to disable the laser!

void run(int op1) {
    char operation[3];
    int op2 = 0;
    int result = 0;

    move();
    move();
    turnLeft();
    read(operation);
    turnRight();

    move();
    turnLeft();
    op2 = readInt();
    turnRight();

    move();
    turnLeft();

    if (strcmp(operation, ">") == 0) {
        result = op1 > op2;
    } else if (strcmp(operation, "<") == 0) {
        result = op1 < op2;
    } else if (strcmp(operation, "&") == 0) {
        result = op1 & op2;
    } else if (strcmp(operation, "|") == 0) {
        result = op1 | op2;
    } else if (strcmp(operation, "^") == 0) {
        result = op1 ^ op2;
    } else if (strcmp(operation, "<<") == 0) { 
        result = op1 << op2;
    } else if (strcmp(operation, ">>") == 0) { 
        result = op1 >> op2;
    } else {
        result = 0;
    }

    writeInt(result);

    turnRight();
    while (true){
        move();
    }
}
