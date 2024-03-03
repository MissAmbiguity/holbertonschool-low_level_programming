#include "main.h"

/**
 *_is super -Checks if a letter is upper
 *@x: The number to ber checked 
 *Return: 1 for upper letter or 0 for any other 
 */

int _isuper(int x)
{

	if (x>= 65 && x <= 90)
	{
	return(1);
	}
	return(0);

