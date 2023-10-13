#include "main.h"

/**
 * positive_or_negative - Determine if a number is positive, negative, or zero.
 * @i: The number to be checked
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
