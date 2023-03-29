/*
 *  maze.hpp
 *
 *
 *  Created by Michael Strommer on 29.03.23.
 *
 */

#pragma once

#define ROWS 10
#define COLS 10
#define SPACE ' '

void print(void);
int escape(int row, int col);
void init(char maze[ROWS][COLS]);
void getResult(char result[ROWS][COLS]);
