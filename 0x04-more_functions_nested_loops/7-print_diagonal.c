#include "main.h"
/**
 * print_diagonal - print slashes that form a diagonal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (m = 1 ; m <= i ; m++)
			{
			_putchar(' ');
			}
		_putchar('/');
			_putchar('\n');
		}
	}
}
