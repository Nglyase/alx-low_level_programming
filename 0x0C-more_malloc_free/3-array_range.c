#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: minimum values
 *@max: maximum values
 *Return: A pointer
 */
int *array_range(int min, int max)
{
	int *m;
	int count = 0;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (!m)
		return (NULL);
	while (min <= max)
	{
		m[count] = min;
		min++;
		count++;
	}
	return (m);
}
