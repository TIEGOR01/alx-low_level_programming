#include "main.h"

/**
 * print_array - print elements of an array of integers
 * followed by a new line
 *
 * @a: array name
 * @n: is the number of elemts of an array
 * Return: a and n inputs
 */

void print_arrays(int *a, int n)
{
	int i;
	
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
