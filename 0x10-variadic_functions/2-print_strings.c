#include "variadic_functions.h"
/**
 * print_strings - the function prints strings
 *@separator: string to be printed between strings
 *@n: number of strings
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list kub;
	unsigned int ai;
	char *str;

	va_start(kub, n);

	for (ai = 0; ai < n; ai++)
	{
		str = va_arg(kub, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (ai < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(kub);
}
