#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	for (a > 96; a < 123; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
