#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 *
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to apply to each array element.
 *
 * Description: This function takes an array, the number of elements in the
 * array, and a pointer to a function. It applies the specified function to
 * each element of the array. If either the array or the function pointer is
 * NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check for NULL parameters */
	if (array == NULL || action == NULL)
		return;

	/* Apply the specified function to each element of the array */
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
