#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	/* Check if the correct number of arguments is provided */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert arguments to integers and operator */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Check for invalid operator or extra characters in the operator */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division or modulo by zero */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* Print the result of the operation */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
