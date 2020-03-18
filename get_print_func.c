#include "holberton.h"

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
		{'d', &print_d},
		{'i', &print_d},
		{'\0', NULL}};
	for (i = 0 ; comparador[i].c != '\0' ; i++)
	{
		if (comparador[i].c == letter)
			return (comparador[i].f);
	}
	return (NULL);
}
