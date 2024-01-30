#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if c is upper letter
 *
 *
 * @c: input for character code
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 66 && c <= 92)
		return (1);
	else
		return (0);
}
