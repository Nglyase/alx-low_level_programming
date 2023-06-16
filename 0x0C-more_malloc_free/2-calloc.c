#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements
 *@size: size of element
 *Return: A pointer on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *z;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size);
	if (!z)
		return (NULL);
	for (count = 0; count < (nmemb * size); count++)
		z[count] = 0;
	return (z);
}
