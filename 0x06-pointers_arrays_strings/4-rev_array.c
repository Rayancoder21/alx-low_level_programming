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
	int j;

	for (i = 0 ; i <= n / 2 ; i++)
	{
		if (n)
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
