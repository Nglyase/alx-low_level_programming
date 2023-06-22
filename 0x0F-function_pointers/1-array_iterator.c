#include "function_pointers.h"
/**
 *array_iterator - iterates through an array
 *@array: array to iterate
 *@size: size of the array
 *@action: a function pointer
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator = 0;

	if (array && action)
	{
		for (iterator = 0; iterator < size; iterator++)
		{
			action(array[iterator]);
		}
	}
}
