#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @x: The character to be checked
 * Return: 1 for uppercase letter, 0 for any other
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}

