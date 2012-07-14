#include <stdio.h>

unsigned int traillingZeros(unsigned int num)
{
   unsigned int z = 0;
   unsigned int factor = 5;
   while(num > factor)
   {
      z = z + (num/factor);
      factor *= 5;
   }
   return z;
}

int main(int argc, char** argv)
{
   int testCases;
   int i;
   scanf("%i",&testCases);

   for(i = 0; i < testCases; i++)
   {
      unsigned int faktorial;
      scanf("%i", &faktorial);
      printf("%d\n", traillingZeros(faktorial));
   }

   return 0;
}
