#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly copied string area
 *
 * @str: thestring to copied area
 *
 * Return: the pointer to a newly copied string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *p;

	if (str == 0)
		return (NULL);

	for ( ; str[size] != '\0'; size++)
		;
	p = malloc((sizeof(*str) * size) + 1);
	if (p == 0)
		return (NULL);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
