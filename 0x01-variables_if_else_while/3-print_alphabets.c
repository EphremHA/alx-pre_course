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
	int A = 65;

	for (a = 97; a < 123; ++a)
	{
		putchar(a);
	}
	for (A = 65; A < 91; ++A)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
