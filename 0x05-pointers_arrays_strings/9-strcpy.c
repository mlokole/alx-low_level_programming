#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - function to copy
 * @src: source
 *
 * @dest: destination to copy
 *
 * Return: pointer to a destionation
 *
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c <= _strlen(src); c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
