#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void calcPrime(long min, long max) {
   int counter;
   for(;min<=max;min++) {
      if(min == 1) {
         continue;
      }
      for(counter = (min - 1); min % counter;counter--) {}
      if(counter == 1)
      {
         printf("%li\n", min);
      }
   }
}

int main(int argc, char** argv)
{
   int testCases;
   long min, max;
   int i;

   scanf("%i", &testCases);
   for(i = 0; i < testCases; i++) {
      scanf("%li %li", &min, &max);
      calcPrime(min, max);
      printf("\n");
   }
   return 0;
}
