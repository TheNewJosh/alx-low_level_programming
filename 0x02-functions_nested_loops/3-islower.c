#include "main.h"

/**
 * _islower - This is the function that check for lowercase
 *@c: The character to be check
 * Return: This return one if lowere case and zero if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
