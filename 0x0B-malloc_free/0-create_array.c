#include "main.h"
/**
 * create_array - creates an array of characters
 *@size: size of memory
 *@c: character
 *Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	for (j = 0; j < size; j++)
		p[j] = c;
	return (p);
}
