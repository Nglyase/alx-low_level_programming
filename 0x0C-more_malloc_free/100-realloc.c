#include "main.h"
/**
 *_realloc - reallocates memory
 *@ptr: pointer to allocated memory
 *@old_size: size of old
 *@new_size: size of new
 *Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new\
	       _size)
{
	char *n;
	char *j = ptr;
	char *k;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)

	{
		n = malloc(new_size);
		if (!n)
			return (NULL);
		return (n);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	n = malloc(new_size);
	if (!n)
		return (NULL);
	k = n;
	for (i = 0; i < old_size && i < new_size; i++)
		k[i] = j[i];
	free(ptr);
	return (n);
}
