#include <stdio.h>

/**
 * main - print 0-9
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(48 + x);
	putchar('\n');
}
