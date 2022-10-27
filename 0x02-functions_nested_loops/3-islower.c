#include "main.h"

/**
 * _lslower: chesks if the character is lowercase.
 * @c: The character to be checked.
 * Return: 1 if it is lowercase and 0 is it is not.
 *
 */

int _lslower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
