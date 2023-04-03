#include "main.h"

/**
 * Main - _strspn gets the length of a prefic substring
 *
 * @s: input
 * @accept: input
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; i++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
		return (0);
}
