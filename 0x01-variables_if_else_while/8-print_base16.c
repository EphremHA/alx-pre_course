#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	for (n > 47; n < 103; ++n)
	{
		putchar(n);
		if (n == 57)
		{
			n += 40;
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
