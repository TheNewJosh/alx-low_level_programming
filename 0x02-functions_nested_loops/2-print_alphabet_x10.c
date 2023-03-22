#include "main.h"

/**
 * print_alphabet_x10 - This is the function that print 10 time the alphbet
 *
 * Return: This return zero
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
