#inxlude "main.h"
void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10, i++)
	{
		for (j = 0 ; j < 10, j++)
		{
			result = i * j;
			_putchar(result);
		}
	}
	_putchar('\n')
}
