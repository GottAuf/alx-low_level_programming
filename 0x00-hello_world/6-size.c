#include <stdio.h>
/**
 * main - print size of variables
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %u\n", sizeof(a));
	printf("Size of an int: %u\n", sizeof(b));
	printf("Size of a long int: %u\n", sizeof(c));
	printf("Size of a long long int: %u", sizeof(d)," byte(s)\n");
	printf("Size of a float: %u byte(s)", sizeof(e));
	return (0);
}
