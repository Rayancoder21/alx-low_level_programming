#include "main.h"
/**
 * print_square - create square shape with#
 * @size: parameter
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
			_putchar('\n');
	}
}
