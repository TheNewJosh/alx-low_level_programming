#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: This return zero
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
