#include "main.h"
/**
 * _strchr - Entry point
 * @s: 1st input
 * @c: 2nd input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
