#include "main.h"
#include <stdlib.>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 *
 * @c: char to assign
 * Description: creat array of size size and assign char c
 *
 * Return: pointer to array, NULL if fail
 *
 */
{
	unsigned int i = 0;
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
