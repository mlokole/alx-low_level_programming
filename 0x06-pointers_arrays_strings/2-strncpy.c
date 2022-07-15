#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string@src: source string
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest)
}
