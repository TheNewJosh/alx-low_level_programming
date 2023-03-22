#include "main.h"

/**
 * print_alphabet - This is the function that print alphbet
 *
 * Return: This return zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
