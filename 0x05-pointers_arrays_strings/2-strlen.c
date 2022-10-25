#include "main.h"

/**
 * _strlen -> function to get the length of a tring
 * @s: string pointer to passed to this function
 * Return: returns the length of the string.
 *
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		*s += 1;
	}
	return (len);
}
