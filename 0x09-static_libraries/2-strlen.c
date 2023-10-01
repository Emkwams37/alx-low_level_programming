#include "main.h"
/**
 * _strlen - retuns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longin = 0;

	while (*s != '\0')
	{
		longin++;
		s++;
	}
	return (longin);
}
