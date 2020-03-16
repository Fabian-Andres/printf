#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - writes the character c to stdout
 * @format: The characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
	va_list varg;
	int i;

	va_start(varg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format == NULL)
		{
			_printf("(null)");
			va_end(varg);
			return (0);
		}
		else
		{
			if (format[i] == '%')
			{
				char nextchar = format[++i];

				if (nextchar == 'c')
				{
					char c = va_arg(varg, char*);

					_putchar(c);
				}
				else if (nextchar == 's')
				{
					char *c = va_arg(varg, char*);

					_printf(c, 0);
				}
				else if (nextchar == 'i')
				{
					char *c = va_arg(varg, char*);

					_printf(c, 0);
				}
				else
				{
					_putchar(nextchar);
				}
			}
			else
			{
				_putchar(format[i]);
			}
		}
	}
	va_end(varg);
	return (0);
}
