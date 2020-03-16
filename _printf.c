#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
    va_list vstring;
	int i;
	char *c;

	va_start(vstring, format);
	for (i = 0; i < format; i++)
	{
		c = va_arg(vstring, char *);
		if (c == NULL)
            _putchar('n');
            _putchar('i');
            _putchar('l');
		else
            if (c == '%')
				_putchar(c, 0);
			else 
				_prinf(c);
	}
	_putchar('\n');
	va_end(vstring);

}
