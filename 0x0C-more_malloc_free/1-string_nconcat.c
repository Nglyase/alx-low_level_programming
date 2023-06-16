#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: string one
 *@s2: string two
 *@n: number of bytes
 *Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, count;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + x) != '\0')
		x++;
	while (*(s2 + y) != '\0')
		y++;
	if (n > y)
		n = y;
	count = x + n;

	str = malloc(count + 1);
	if (!str)
		return (NULL);
	for (z = 0; z < count; z++)
	{
		if (z < x)
			*(str + z) = *(s1 + z);
		else
			*(str + z) = *(s2 + z - x);
	}
	*(str + z) = '\0';
	return (str);
}
