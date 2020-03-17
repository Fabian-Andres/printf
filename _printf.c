#include "holberton.h"
/**
 * _printf - writes the character c to stdout
 * @format: The characters to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
	va_list varg;
	int i, s = 0;

	va_start(varg, format);
	if (format == NULL)
	{
		va_end(varg);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			char nextchar = format[++i];

			if (nextchar == '\0')
				return (-1);
			if (nextchar == 'c')
			{
				char c = va_arg(varg, char*);

				s += _putchar(c);
			}
			else if (nextchar == 's')
			{
				char *c = va_arg(varg, char*);

				if (c == NULL)
					c = "(null)";
				s += _printf(c, 0);
			}
			else
			{
				if (nextchar != '%')
					s += _putchar(format[i - 1]);
				s += _putchar(nextchar);
			}
		}
		else
			s += _putchar(format[i]);
	}
	va_end(varg);
	return (s);
}
