#include "main.h"
/**
 * swap_int - swaps a and b
 *@a: parameter
 *@b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
