#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *@argc: argument counters
 *@argv: argument vector
 *Return: On success 0
 */

int main(int argc, char *argv[])
{
	int nbts;
	int counter;
	char *opc = (char *)main;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbts = atoi(argv[1]);
	if (nbts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (counter = 0; counter < nbts; counter++)
	{
		printf("%02x", opc[counter] & 0xFF);
		if (counter != nbts - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
