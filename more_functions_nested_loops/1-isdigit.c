#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: The character to be checked
 * Return: 1 for a digit or 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

