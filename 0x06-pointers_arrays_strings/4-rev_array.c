#include "main.h"
/**
 * reverse_array - reverses array
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		a[n - i] = a[i];
}
