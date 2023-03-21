#include "main.h"

/**
 * main - Function that prints the last digit of a number
 *
 * Return: Last value of the last digit
 */

int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
