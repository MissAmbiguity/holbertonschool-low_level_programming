#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a string using puts
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "Programming is like building a multilingual puzzle\n", 49);
	return (0);
}

