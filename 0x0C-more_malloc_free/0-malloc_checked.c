#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory to code
 *
 * @b: the size to allocate code
 *
 * Return: the pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *space = malloc(b);

	if (space == 0)
		exit(98);
	return (space);
}
