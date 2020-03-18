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
 * print_d - function that compares characters to locate function.
 * @argmnt: List to integer.
 * Return: nr
 */
int print_d(va_list argmnt)
{
	int nr = 0;
	int n = va_arg(argmnt, int);
	unsigned int mod = 0, aux = 0;
	int k = 1;

	if (n < 0)
	{
		mod = -n;
		nr += _putchar('-');
	}
	else
		mod = n;
	aux = mod;
	while (aux / 10)
	{
		aux = aux / 10;
		k *= 10;
	}
	aux = mod;
	while (k != 0)
	{
		aux = mod;
		aux /= k;
		nr += _putchar((aux % 10) + '0');
		k /= 10;
	}
	return (nr);
}

