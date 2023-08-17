#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H
/**
 * File: function_pointers.h
 * Auth: SimoLogic
 * Desp: Header file containing all prototypes for all function
 * 		used in 0x0F-function_pointers 
*/
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif