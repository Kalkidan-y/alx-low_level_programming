#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main => assign a random numberto the variable n each time it is executed. pri nt out something.
 *based on condition
 *Return: always 0
 */
int main(void)
{
 int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if(n>0)
    printf("%d is positive\n",);
  if(n==0)
    printf("%d is zero\n",);
  if(n<0)
    {  
    printf("%d is negative\n"n,);
    }
 return (0);
}
