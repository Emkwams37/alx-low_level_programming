#include "main.h"
/**
 * 1-swap - function that swaps the values of two integers
 * @a: integer to swap 1
 * @b: integer to swap 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
