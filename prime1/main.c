#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned long int *allPrimeValues;


void calcPrime(unsigned long int min, unsigned long int max) {
   unsigned long int i, j;
   memset(allPrimeValues, 0, sizeof(unsigned long int)* max);
   for(i = 1; i <= max; i++) {
      allPrimeValues[i] = i;
   }

   for(i = 2; i < sqrt(max); i++) {
      for(j = i+i; j <= max; j += i) {
         allPrimeValues[j] = 0;
      }
   }
   allPrimeValues[1] = 0;
   allPrimeValues[0] = 0;

   for(i = min; i <= max; i++) {
      if(allPrimeValues[i] != 0) {
         printf("%li\n", allPrimeValues[i]);
      }
   }
}

int main(int argc, char** argv)
{
   int testCases;
   unsigned long int min, max;
   int i;
   scanf("%i", &testCases);
   for(i = 0; i < testCases; i++) {
      scanf("%li %li", &min, &max);
      allPrimeValues = malloc(sizeof(unsigned long int) * max);
      calcPrime(min, max);
      free(allPrimeValues);
      printf("\n");
   }
   return 0;
}
