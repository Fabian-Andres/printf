#include "holberton.h"
/**
 * _printf -  function that produces output according to a format.
 * @format: output standar.
 * Return: lenght of output.
 */
int _printf(const char *format, ...)
{
	va_list argmnt;
	int i, count = 0;
	int (*p)(va_list);

	if (format == NULL)
		return (-1);
	va_start(argmnt, format);
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			if ((format[i + 1] == 'c') || (format[i + 1] == 's'))
			{
				p = get_function(format[i + 1]);
				count += p(argmnt);
			}
			else
			{
				if (format[i + 1] == '\0')
					return (-1);
				if (format[i + 1] != '%')
					count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
			}
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(argmnt);
	return (count);
}
