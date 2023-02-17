#include <stdio.h>

/**
 * main - print 2 digit combos
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(48 + x);
			putchar(48 + y);
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
