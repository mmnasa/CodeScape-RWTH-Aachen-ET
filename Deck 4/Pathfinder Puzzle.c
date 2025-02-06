#include "codescape.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * The path array looks something like this:
 * {{'B', 'R'}, {'A', 'M'}, {'C', 'R'}}
 * You need to sort it by the first value of each pair
 * The second value dictates the appropriate movement:
 * "L" = left, "R" = right, "M" = move
 *
 * int length - Length of the path array
 */


// Selection Sort: Sort the array by the first character of each pair
void selectionSort(char path[][2], int length) {
    for (int i = 0; i < length - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < length; j++) {
            if (path[j][0] < path[minIdx][0]) {
                minIdx = j;
            }
        }

        // Swap elements
        if (minIdx != i) {
            char temp[2];
            temp[0] = path[i][0];
            temp[1] = path[i][1];

            path[i][0] = path[minIdx][0];
            path[i][1] = path[minIdx][1];

            path[minIdx][0] = temp[0];
            path[minIdx][1] = temp[1];
        }
    }
}

void run(char path[][2], int length) {
    int moves=2;
    while (moves<4){
        move(); 
        if(!isMovePossible()&&moves%2==0){
            turnRight();
        }else{
            turnLeft();
        }
        moves++;
        selectionSort(path, length);  
    
        for (int i = 0; i < length; i++) {
            if (path[i][1] == 'L') {
                turnLeft(); 
            } else if (path[i][1] == 'R') {
                turnRight(); 
            } else {
                move();
            }
        }
    }
}