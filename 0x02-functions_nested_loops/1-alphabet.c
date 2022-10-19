#include <stdio.h>
#include <stdlib.h>
/*
 *
 *  main: gives ihe result of the print_alphabet function,
 *  print_alphabet:  prints the ch a-z,
 *  return: 0 success.
 *
 */
void print_alphabet(char ch)
{
ch = 'a';

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
	putchar('\n');
}
}

int main(void)
{
int ch = 'a';

print_alphabet(ch);
return (0);
}
