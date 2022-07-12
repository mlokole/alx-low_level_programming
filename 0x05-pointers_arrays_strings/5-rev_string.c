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
	
	for (l = 0; l < _strlen(s) / 2; l++)
	{
			r = s[l];
			s[l] = s[_strlen(s) - l - 1];
			s[_strlen(s) - l - 1] = r;
	}
}
