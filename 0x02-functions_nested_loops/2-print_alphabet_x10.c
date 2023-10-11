#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet 10 time
 * Return: return nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			putchar(i);
		putchar('\n');
	}


}
