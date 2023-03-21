#include "main.h"

/**
 * main - Print all natural numbers from n to 98,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if(n >= 98)
	{
		for (i = n : i <= 98; i++)
			printf("%d, ", i);
	}
	printf('\n');
	else if (n < 0)
	{
		for ( = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
			printf('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		printf('\n');
	}
	else
		printf("%d, ", n);
	return (0);
}
