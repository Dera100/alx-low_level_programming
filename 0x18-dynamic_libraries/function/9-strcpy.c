#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src code
 *
 * @dest: char type string code
 *
 * @src: char type string code
 *
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
