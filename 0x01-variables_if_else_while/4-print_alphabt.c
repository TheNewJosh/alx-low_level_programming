#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: This return zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
