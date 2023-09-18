#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be swapped
 * @b: second integer to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
