#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet in small case
 *
 * Return: void
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
