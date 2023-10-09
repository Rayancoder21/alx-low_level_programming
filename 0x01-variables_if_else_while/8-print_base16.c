#include <stdio.h>
/**
 * main - enrty point
 * Return: 0 (success)
 */
int main(void)
{
	char o;
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (o = 'a' ; o <= 'f' ; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
