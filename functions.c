#include "holberton.h"
/**
 * _putchar - function that display a character.
 * @cr: character to display.
 * Return: 1 and character.
 */
int _putchar(char cr)
{
	return (write(1, &cr, 1));
}
/**
 * print_char - function that display a character.
 * @argmnt: character to display.
 * Return: 1 and character.
 */
int print_char(va_list argmnt)
{
	char c = va_arg(argmnt, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - function that display string.
 * @argmnt: string to display.
 * Return: lenght of string.
 */
int print_string(va_list argmnt)
{
	int i;
	char *str = va_arg(argmnt, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * get_function - function that compares characters to locate function.
 * @letter: character for compares.
 * Return: address function
 */
int (*get_function(char letter))(va_list)
{
	int i;

	ft comparador[] = {
		{'c', &print_char},
		{'s', &print_string},
		{'\0', NULL}};
	for (i = 0 ; comparador[i].c != '\0' ; i++)
	{
		if (comparador[i].c == letter)
			return (comparador[i].f);
	}
	return (NULL);
}



