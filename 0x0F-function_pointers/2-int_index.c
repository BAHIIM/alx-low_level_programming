#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to use.
 *
 * Return: The index of the first element for which the comparison function
 * returns true; otherwise, -1 if no element matches or if parameters are
 * invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Check for NULL parameters or invalid size */
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/* Search for the first element that satisfies the comparison function */
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	/* If no matching element is found, return -1 */
	return (-1);
}
