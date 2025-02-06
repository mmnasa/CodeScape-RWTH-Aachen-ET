#include "codescape.h"
#include <stdio.h>
void run() {
// Declare "char buffer[50]" to store the password.
// Use "read (buffer)" to get the password into buffer.
    char buffer[50];
    
    move();
    move();
    turnLeft();
    read(buffer);
    turnRight();
    move();
    turnLeft();
    write(buffer);
    turnRight();
    move();
    move();
}