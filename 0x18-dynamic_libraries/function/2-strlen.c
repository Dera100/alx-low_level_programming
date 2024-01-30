#include "main.h"
/**
 * _strlen - find the length of a string code
 *
 * @s: pointer to the string to check code
 *
 * Return: void/0
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
