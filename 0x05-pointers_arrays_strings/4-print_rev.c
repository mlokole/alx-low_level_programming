#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
