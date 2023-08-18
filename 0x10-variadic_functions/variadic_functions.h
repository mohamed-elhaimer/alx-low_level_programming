#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list args);
void print_float(va_list args);
void print_char(va_list args);
void print_str(va_list args);

typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

#endif
