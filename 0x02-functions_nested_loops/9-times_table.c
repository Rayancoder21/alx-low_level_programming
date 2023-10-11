#include "main.h"
#include <stdio.h>
/**
 * times_table - shows times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			int x = i * j;

			if (j == 0)
				printf("%d, ", x);
			else
				printf("%2d", x);
			if (j != 9 && j != 0)
				printf(", ");
			}
	printf("\n");
	}
}
