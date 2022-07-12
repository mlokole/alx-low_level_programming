#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len, i, half;
	char temp;
	
	for (l = 0; l < _strlen(s) / 2; l++);
	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
