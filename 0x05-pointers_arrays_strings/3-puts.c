#include "main.h"

/**
 * _puts - Prints a string followed by a new line code...
 *
 *
 * @str: store string code.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return('\n');
}
