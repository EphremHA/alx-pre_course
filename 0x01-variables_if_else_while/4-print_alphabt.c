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

	for (a = 97; a < 123; ++a)
	{
		if (a == 113 || a == 101)
		{
			++a;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
