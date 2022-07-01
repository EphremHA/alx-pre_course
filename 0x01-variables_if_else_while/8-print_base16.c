#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	do {
		putchar(n);
		if (n == 57)
		{
			n += 40;
			putchar(n);
		}
		n += 1;
	} while (n < 103);
	putchar('\n');
	return (0);
}
