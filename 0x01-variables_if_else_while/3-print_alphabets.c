#include <stdio.h>
/**
 * main - enrty point
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	char o;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (o = 'A' ; o <= 'Z' ; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
