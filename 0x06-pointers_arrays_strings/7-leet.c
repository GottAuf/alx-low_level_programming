#include "main.h"

/**
 * leet - change to 1337
 * @str: string to modify
 *
 * Return: modified string
 */
char *leet(char *str)
{
	int a = 0, b = 0;
	char albt[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;
		while (b < 5)
		{
			if (str[a] == albt[b] || str[a] - 32 == albt[b])
			{
				str[a] = num[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
