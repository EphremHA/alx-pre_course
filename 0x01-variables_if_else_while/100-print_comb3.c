#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int y = 48;

	for (x = 48; x < 58; ++x)
	{
		for (y = 48; y < 58; ++y)
		{
			if ((x != y) && (y > x))
			{
				putchar(x);
				putchar(y);
				if ((x < 56) && (y < 58))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		y = 0;
	}
	putchar('\n');
	return (0);
}
