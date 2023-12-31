#include "main.h"
/**
 * _memset - fill a block of memory with a specific value to remenber
 *
 * @s: starting address of memory to be filled each
 * @b: the desired value no
 *
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

