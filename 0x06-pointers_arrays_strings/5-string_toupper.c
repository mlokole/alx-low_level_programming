#include 'main.h"

/**
 * string_toupper - change lowercase string to uppercase
 *
 * @n: string
 *
 * Return: n in uppercase
 *
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
