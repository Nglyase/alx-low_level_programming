#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @p: the character
 * Return: 0
 */
int print_last_digit(int p)
{
	int ld = p % 10;

	if (ld < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (ld);
}
