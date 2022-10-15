#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet lowercase
 * number stored in the variable ch
 * Return: Always 0 (Success)
 **/

int main(void)
{
int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
putchar('\n');
return (0);
}
