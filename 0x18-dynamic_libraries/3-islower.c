#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: parameter
 * Return: return 0 or 1
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
