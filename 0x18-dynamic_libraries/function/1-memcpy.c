#include "main.h"

/**
  * _memcpy - copy memory code
  *
  * @dest:pointer to return code
  *
  * @src: source memory area
  *
  *
  * @n: num of bytes from memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
