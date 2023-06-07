#include "main.h"
/**
 *_strlen_recursion - this function returns length of string
 *@s: the string
 *Return: On success 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
