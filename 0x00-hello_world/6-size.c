#include <stdio.h>

/**
 * main - prints a given phrase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	 printf("Size of long int: %zu bytes\n", sizeof(longintType));
	 printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
		return (0);
}
