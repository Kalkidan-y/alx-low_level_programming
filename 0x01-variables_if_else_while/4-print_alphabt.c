#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase alphabets except q and e
 * Return: Always 0 (Sucess)
 **/
	int main(void)
{
	char ch = 'a';

	if (ch == 'e' || ch == 'q')
{
}
	while (ch <= 'z')
{
		putchar (ch);
		ch++;
}
putchar ('\n');
return (0);
}
