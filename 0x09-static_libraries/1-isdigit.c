#include "main.h"

/**
 * _isdigit - check if the input is digit or not is imp
 *
 *
 * @c: checks input of function area
 *
 * Return: 1 if 'c' is digit ifnt
 * else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
