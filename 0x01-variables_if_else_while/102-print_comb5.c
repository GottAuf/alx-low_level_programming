#include <stdio.h>

/**
 * main - print double double combo
 * Return: 0;
 */
int main(void)
{
	int x;
	int z;

	x=0;
	while (x < 99)
	{
		z = x + 1;
		while (z <= 99)
		{
			putchar(48 + (x / 10));
			putchar(48 + (x % 10));
			putchar(' ');
			putchar(48 + (z / 10));
			putchar(48 + (z % 10));
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
