#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be checked
 *
 * Return: length of string s as int type
 */
int _strlen(char *s)
{
	int a = 0;
	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
