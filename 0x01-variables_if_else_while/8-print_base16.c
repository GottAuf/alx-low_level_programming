#include <stdio.h>

/**
 * main - hexa
 * Return: 0
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar(48 + x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
