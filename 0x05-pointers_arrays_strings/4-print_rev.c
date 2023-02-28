#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int a;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	for (a -=1; a == 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
