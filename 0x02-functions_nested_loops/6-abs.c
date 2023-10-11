#include "main.h"
/**
 * _abs - return the absolute value of negative numbers
 * @i: parameter
 * Return: return -i or i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
