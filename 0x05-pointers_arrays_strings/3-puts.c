#include "main.h"

/*
 * _puts - is a function that prints string.
 * @str: a parameter to _puts function
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar('\n');
}
