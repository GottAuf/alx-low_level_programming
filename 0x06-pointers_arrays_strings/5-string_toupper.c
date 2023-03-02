#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: string to modify
 *
 * Return: char str
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
