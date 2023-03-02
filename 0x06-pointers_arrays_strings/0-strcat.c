#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 * @dest: desitnation string
 * @src: source
 *
 * Return: Pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int a;

	while (dest[l])
	{
		l++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[l] = src[a];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}
