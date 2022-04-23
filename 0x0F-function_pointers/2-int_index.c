#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: number of elements of array
 * @cmp: pointer function to compare values
 * Return: index of the first element that matches cmp function or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
