#include "main.h"

/**
 * _memset -fill memory with constant values code
 *
 * @s: pointer to char params code
 *
 * @b: constant byte numb
 *
 * @n: byte of mem area code
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
