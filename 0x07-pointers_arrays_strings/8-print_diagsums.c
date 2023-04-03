#include <stdio.h>
#include "main.h"

/**
 * print diagsums - Entry point
 * @a: input
 * @size: input
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum 2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + 1];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 = a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
