#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu\n", sizeof(intType));
	printf("size of float: %zu\n", sizeof(floatType));
	printf("size of double: %zu\n", sizeof(doubleType));
	printf("size of charType: %zu\n", sizeof(charType));

	return (0);
