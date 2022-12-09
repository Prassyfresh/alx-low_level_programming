#include <stdio.h>

/**
 * main - prints a given phrase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n". sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
		return (0);
}
