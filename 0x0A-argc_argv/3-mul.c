#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
