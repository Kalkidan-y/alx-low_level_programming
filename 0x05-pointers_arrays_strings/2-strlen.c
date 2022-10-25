#include "main.h"
#include <stddef.h>

/**
 * _strlen -> function to get the length of a tring
 * @s: string pointer to passed to this function
 * Return: returns the length of the string.
 *
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
