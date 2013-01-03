#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char** argv)
{
   int testCases;
   int value;
   int i;
   int diagonal, endpoint;
   scanf("%i", &testCases);
   for(i = 0; i < testCases; i++) {
      scanf("%i", &value);
      diagonal = (sqrt(8*value + 1)/2);
      endpoint = (value * value) + value;
      endpoint /= 2;
      printf("TERM %i IS %i/%i\n", value, diagonal, endpoint);
   }

   return 0;
}
