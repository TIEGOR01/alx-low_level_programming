#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using alloc
 *
 * @nmemb: number of element in the array
 * @size: bytes in array
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
