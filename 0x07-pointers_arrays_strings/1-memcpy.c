#include "main.h"
/**
 *_memcpy - a function that copies
 *@dest: memory where it is stored to
 *@src: memory where it is copied to
 *@n: number of bytes
 *
 *Return: copied memory with n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
