#include "main.h"

/**
 * main - print the numbers from 1-100, followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", ab);
		else if (i % 3 == 0)
			printf("%s", a);
		else if (i % 5 == 0)
			printf("%s", b);
		else
			printf("%d", i);
	}
	printf('\n');
}
