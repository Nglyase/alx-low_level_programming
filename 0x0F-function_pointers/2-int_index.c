#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: An array
 *@size: number of elements in array
 *@cmp: function pointer
 *Return: On success 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int search = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (search = 0; search < size; search++)
			if (cmp(array[search]))
				return (search);
	}
	return (-1);
}
