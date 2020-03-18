#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
* struct fmt - structure used to get the address of a function
* according to the format
 * @c: The character
 * @f: The function associated
 */
typedef struct fmt
{
	char c;
	int (*f)(va_list);
} ft;
int _printf(const char *format, ...);
int _putchar(char cr);
int (*get_function(char letter))(va_list);
int print_string(va_list argumnt);
int print_char(va_list argumnt);
int print_d(va_list argumnt);
#endif
