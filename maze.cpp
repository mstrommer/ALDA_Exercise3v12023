/*
 *  maze.cpp
 *
 *
 *  Created by Michael Strommer on 29.03.23.
 *
 */

#include "maze.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

char maze[ROWS][COLS];

/* Retrieves the solution. NEEDED FOR AUTO-TESTING PURPOSES. Do not change. */
void getResult(char result[ROWS][COLS]){
    memcpy(result, maze, ROWS * COLS * sizeof(char));
}

// =====================
// Initializes the maze array by the given parameter. Required before starting the escape algorithm.
// ---------------------
void init(char initial[ROWS][COLS]){
    memcpy(maze, initial, sizeof(char) * ROWS * COLS);
}

// =====================
// Pretty prints the maze. For your own debugging purposes, only.
// ---------------------
void print(){
    int i, j;
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}

// =====================
// Recursive function that finds an exit of a maze, if one exists. Returns 1 or 0. Uses backtracking and might call other custom functions.
// ---------------------
int escape(int row, int col){
    return -1;
}
