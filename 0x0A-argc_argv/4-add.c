#include "main.h"
#include <ctype.h>
/**
 * main - sums two digits
 *sum: adds two numbers
 *@argv: argument vector
 *@argc: argument counter
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x = 1, y = 0, sum = 0;

	while (x < argc)
	{
		y = 0;

		while (argv[x][y] != '\0')
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");
				return (1);
		}
		y++;
	}
	sum = sum + atoi(argv[x]);
	x++;

	}

	printf("%d\n", sum);
	return (0);
}
