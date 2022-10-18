#include <stdio.h>
#include <stdlib.h>
/*
 *
 *  main - gives the result of the print_alphabet function.
 *
 *  return: 0 success.
 *
 * */
void print_alphabet(int ch)
{
 ch = 'a';

 while(ch <= 'z')
 {
	 putchar(ch );
         ch ++;
	 putchar( "\n" );						    
  }
}

int main(void)
{
 int ch = 'a';
 print_alphabet(ch );
 return 0;
}
