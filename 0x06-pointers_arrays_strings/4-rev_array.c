#include "main.h"

/**
 * reverse_array - function to reverse contents of an array of integers
 *
 * @a: array of integers
 * @n: number of elements
 *
 * Return: Nothing
 *
 */
void reverse_array(int *a, int n)
{
	int m;
	int swp;

	for (m = 0; m < n--; m++)
	{
		swp = a[m];
		a[m] = a[n];
		a[n] = swp;
	}
}
