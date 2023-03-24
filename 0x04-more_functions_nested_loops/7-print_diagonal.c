#include "main.h"
/**
 *print_diagonal - printing diagonally
 *@n: the length of the line
 *Return: 0
 */
void print_diagonal(int n)
{
	int m = 0;
	int i;

	if (n > 0)
	{
		while (m < n)
		{
			for (i = 0; i < m; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
			m++;
		}
	}
	else
	{
		_putchar(10);
	}
}
