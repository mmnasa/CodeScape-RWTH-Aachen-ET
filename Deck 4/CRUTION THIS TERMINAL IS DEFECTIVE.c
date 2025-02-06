#include "codescape.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void selectionSort(int arr[], int step) {
    int len = 10; 

    for (int i = 0; i < step && i < len - 1; i++) {
        int minIdx = i;

        
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }


        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}


void arrayToString(int arr[], char result[]) {
    char buffer[5]; 
    result[0] = '\0'; 

    for (int i = 0; i < 10; i++) {
        sprintf(buffer, "%d", arr[i]); 
        strcat(result, buffer);
        if (i < 9) strcat(result, ",");
    }
}

void run(int unsortedKeys[], int step) {
  
    selectionSort(unsortedKeys, step);
    char solution[50];
    arrayToString(unsortedKeys, solution);

    int steps[] = {3,0,1,3,1,1,1,1,1,1,4};
    char direct[] = {'l','r','r','x','l','l','r','r','l','l','r'};
    
    int moves = 0;
    while (moves < 11) {
        for(int i = 0; i < steps[moves]; i++) {
            move();
        }

      
        if (direct[moves] == 'l') {
            turnLeft();
        } else if (direct[moves] == 'r') {
            turnRight();
        } else if (direct[moves] == 'x') {
            rest(); 
        }

        if (moves == 0) {
            write(solution);
        }

        if (moves > 2) {
            pickUp();
        }
        moves++;
    }
}