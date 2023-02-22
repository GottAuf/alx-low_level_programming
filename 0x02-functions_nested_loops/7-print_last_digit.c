#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
		x *= -1;
	}
	_putchar(n + '0');

	return (n);
}
