#include "main.h"

/**
  * _strchr - locate character in string code
  *
  * @s: source string code
  *
  * @c: character to find
  *
  * Return: the string from character found/0
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
