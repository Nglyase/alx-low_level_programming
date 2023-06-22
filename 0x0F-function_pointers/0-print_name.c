#include "function_pointers.h"

/**
 *print_name - a function that prints a name
 *@name: name to print
 *@f: pointer to function
 *Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
