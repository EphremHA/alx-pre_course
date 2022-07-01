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
	int z = 122;

	do {
		putchar(z);
		--z;
	} while (z > 96);
	putchar('\n');
	return (0);
}
