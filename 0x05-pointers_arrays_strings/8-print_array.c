#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array code.
 *
 * @a: pointer to an integer area.
 *
 * @n: number of elements of an array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
