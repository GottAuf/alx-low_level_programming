#include "main.h"

/**
 * cap_string - capitalize all words
 * @str: string to modify
 *
 * Return: char str
 */
char *cap_string(char *str)
{
	int a = 0, b;
	char chr[] = {32, 44, 46, '\t', '\n', ';', '!', '(', ')', '?', '"', '{', '}'};

	while (str[a])
	{
		b = 0;

		while (b < 13)
		{
			if ((a == 0 || str[a - 1] == chr[b]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			b++;
		}
		a++;
	}
	return (str);
}
