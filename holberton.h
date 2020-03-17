#ifndef HOLBERTON
#define HOLBERTON
#include <stdio.h>
#include <stdarg.h>
typedef struct op
{
    char op;
    int (*f)(char c);
} op_t;
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_func(char *))(char);
/** Print functions  */
int print_c(char c);
int print_s(char *s);
#endif
