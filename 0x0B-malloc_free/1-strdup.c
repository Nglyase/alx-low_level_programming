#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function returns pointer to new memory space
 *@str: the string
 *Return: pointer to the allocated memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *mem_str;
	int m = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	mem_str = malloc((i + 1) * (sizeof(char)));
	if (!mem_str)
		return (NULL);
	for (m = 0; m < i; m++)
	{
		mem_str[m] = str[m];
	}
	mem_str[i] = '\0';
	return (mem_str);
}
