#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
