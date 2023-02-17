#include <stdio.h>

/**
 * main - single numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(48 + x);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
