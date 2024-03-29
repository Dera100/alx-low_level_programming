#include "main.h"

/**
 * _strcat - appends src to the dest string code
 *
 * @dest: string to append by src code
 *
 * @src: string to append..
 *
 * Return: address of dest/0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
