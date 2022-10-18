#include <stdio.h>
/*
 * main: returns the value of the fun print_to_98
 * print_to_98: prints succesive numbers from n to 98
 * return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n <= 98)
	{
		putchar('n');
		putchar(',');
		n++;
	}
	putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
		putchar('n');
		putchar(',');
		n--;
		}
		putchar('\n');
	}
}
int main(void)
{
	int n = 45;
		print_to_98(n);
		return (0);
}

