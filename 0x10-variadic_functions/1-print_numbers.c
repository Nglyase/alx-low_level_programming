#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 *@separator: string that separate numbers
 *@n: number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k = 0;
	va_list num;

	va_start(num, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(num, int));
		if (separator && k < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
