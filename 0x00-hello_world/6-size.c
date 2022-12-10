#include <stdio.h>

/**
 * main - Entry level
 * Return: 0
 */

int main(void)
{
       	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(d));
	printf("Size of an int: %d byte(s)", sizeof(a));
	printf("Size of a long int: %d byte(s)", sizeof(b));
	printf("Size of a long long int: %d byte(s)", sizeof(c));
	printf("Size of a float: %d byte(s)", sizeof(f));

	return (0);
}
