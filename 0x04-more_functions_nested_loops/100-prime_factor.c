#include <stdio.h>
#include <math.h>

/**
 * getMaxPrimeFactor - gets the maximu prime factor
 * @n: number whoose largest prime number is to be found
 * Return: max, the maximum prime factor
 */
int getMaxPrimeFactor(int n) {
   int i, max = 612852475143;

   while(n % 2 == 0) {
      max = 2;
      n = n/2;
   }
   for(i = 3; i <= sqrt(n); i=i+2){ 
      while(n % i == 0) {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) {
      max = n;
   }
   return max;
}

/**
 * main - program entry point
 *
 * Return: 0 always
 */
int main(void) 
{
   int n = 612852475143;

   printf("%d",getMaxPrimeFactor(n));
   return(0);
}
