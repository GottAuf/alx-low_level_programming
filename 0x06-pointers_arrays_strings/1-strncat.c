#include "main.h"

/**
 * _strncat - Concatenate 2 strings using at most n bytes
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int a = 0;

	while (dest[l])
	{
		l++;
	}
	while (a < n && src[a])
	{
		dest[l] = src[a];
		l++;
		a++;
	}
	dest[l + n + 1] = '\0';
	return (dest);
}
