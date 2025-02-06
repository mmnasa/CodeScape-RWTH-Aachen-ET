#include "codescape.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void pass(char pw[], int combi[], int terminal) {
    int len = strlen(pw);           // Length of the password
    int n = combi[terminal] % len;  // Rotation value for the terminal
    char temp[len + 1];             // Temporary array to hold rotated string

    // Rotate the string
    strncpy(temp, pw + n, len - n); // Copy rotated part
    strncpy(temp + len - n, pw, n); // Copy wrapped-around part
    temp[len] = '\0';               // Null-terminate

    strcpy(pw, temp);               // Update the password
}

void run(char pw[], int combi[]) {
    // There is a 10-digit password and an array "combi" with three digits.
    // Each N-th terminal expects the password rotated by combi[N].

    int moves = 0;
    int turns = 0;

    while (moves < 50) { 
        move();
        moves++;
         if((turns-1)%2==0){
            pickUp();
            }
        if (moves == 5 || moves == 19 || moves == 29) {
            int terminal = (moves == 5) ? 0 : (moves == 19) ? 1 : 2;

            
            if (terminal == 0 || terminal == 2) {
                turnLeft();
                pass(pw, combi, terminal);  // Rotate and write password
                write(pw);
                turnRight();               
            } else if (terminal == 1) {
                turnRight();
                pass(pw, combi, terminal); 
                write(pw);
                turnLeft();                 
            }

            // Debugging: Print the rotated password
            printf("Terminal %d expects: %s\n", terminal, pw);
        } else if (!isMovePossible()) {
            turns++;
            turnRight(); 
            
               
        }
    }
}