#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer.
 *
 * @name: The name to be printed.
 * @f: A pointer to the function used to print the name.
 *
 * Description: This function takes a name and a pointer to a function that
 * specifies how the name should be printed. If either the name or the function
 * pointer is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check for NULL parameters */
	if (name == NULL || f == NULL)
		return;

    /* Call the specified function to print the name */
	f(name);
}
