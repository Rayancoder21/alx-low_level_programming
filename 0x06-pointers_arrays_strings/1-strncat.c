#include "main.h"
/**
 * *_strncat -  concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n:parameter
 * Return: returns the conatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlength = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[destlength + i] = *src;
		src++;
	}
	dest[destlength + i] = '\0';
	return (dest);
}
