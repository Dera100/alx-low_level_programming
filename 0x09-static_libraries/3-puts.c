#include "main.h"

/**
 * _puts - A pointer to an int as parameter
 *  and updates the value it points to to 98.
 *
 * @str: pointer to string area
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
