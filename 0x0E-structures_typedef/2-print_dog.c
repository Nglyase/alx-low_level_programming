#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 *@d: struct to initialize
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\n", (*d).name);
	printf("Age: %0.06f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
