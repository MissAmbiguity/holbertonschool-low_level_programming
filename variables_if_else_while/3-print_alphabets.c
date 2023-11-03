#include <stdio.h>

/**
* main - Prints the alphabetic
*
* Return: Always 0 (Success)
*/
int main(void)
{
char low, high;

for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}

for (high = 'A'; high <= 'Z'; high++)
{
putchar(high);
}

putchar('\n');
return (0);
}

