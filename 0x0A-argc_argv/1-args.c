#include "main.h"
/**
 * main - prints number of arguments passed
 *@argc: argument counter
 *@argv: argument vector
 *Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
