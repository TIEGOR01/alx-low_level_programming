#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number that returns square root
 *
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if(n < 0)
		return (-1);
	return (n);
}

/**
 * actual_sqrt_recursion - natural square root
 *
 * @n: number of square root
 *
 * @i: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if(i*i > n)
		return (-1);
	if(i*i == n)
		return (i);
	return (n, i + 1);
}
