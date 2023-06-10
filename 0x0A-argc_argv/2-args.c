#include "main.h"
/**
 * main - prints all arguments
 *@argc: counts arguments
 *@argv: arguments to print
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
