#include "main.h"
/**
 * _puts - prints a str, followed by a new line code..
 *
 * @str: pointer to the string to print code
 *
 * Return: void
*/


void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
