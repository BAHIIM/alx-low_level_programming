#!/bin/bash
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	Printf("Size of a char: %lu byte(s)\n", sizeof(char));
	Printf("Size of an int: %lu byte(s)\n", sizeof(int));
	Printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	Printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	Printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
