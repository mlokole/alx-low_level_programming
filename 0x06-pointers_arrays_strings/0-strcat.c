#include "main.h"

/**
 *
 * _strcat - function concatenates two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: pointer to the rsulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	int a = 0;
	while (dest[a] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
