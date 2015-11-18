//make sure that we don't duplicate the code
#ifndef SCREENUTILS_H
#define SCREENUTILS_H

//include dependent files for screen.c
#include "assemblyFunctions.h"
#include "stringUtils.h"

//define variables for kernel.c
bool writing; 
bool progexit; 
bool alt;
bool ctrl;
bool lshift;
bool rshift;
bool capslock;
bool typingCmd; 
uint8 startCmdY; 
uint8 startCmdX; 
bool newCmd;

//define variables for screen.c
int cursorX, cursorY;
const uint8 sw, sh, sd;

//define functions for screen.c
void clearLine(uint8, uint8);
void updateCursor();
void clearScreen();
void scrollUp(uint8);
void newLineCheck();
void printch(char, int);
void print(string, int);
void printint(uint32, int);
void printhex(uint32, int);
void moveCursorX(int);
void moveCursorY(int);

//end the if statment at the start of the file
#endif
