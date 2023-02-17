#include <stdio.h>

/**
 * main - print 2 digit combos
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z <=9; z++)
			{
				putchar(48 + x);
				putchar(48 + y);
				putchar(48 + z);
				if (x != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
