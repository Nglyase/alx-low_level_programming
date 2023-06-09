#include "main.h"
#include <string.h>

/**
 *_strspn - find length of substring
 *@s: pointer to string to search
 *@accept: pointer to the set of character
 *Return: on success (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;

	int accept_len = strlen(accept);
	int s_len = strlen(s);

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == accept_len)
		{
			break;
		}
	}

	return (0);
}
