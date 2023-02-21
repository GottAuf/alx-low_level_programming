#include "main.h"

/**
 *  _isalpha: check if it's letter
 *  @c: charachter to be checked
 *
 *  Return: 1 if it's letter 0 if it's not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
