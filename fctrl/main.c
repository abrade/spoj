#include <stdio.h>

unsigned long traillingZeros(unsigned long num)
{
   unsigned long z = 0;
   unsigned long factor = 5;
   while(num >= factor)
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
      unsigned long faktorial;
      scanf("%li", &faktorial);
      printf("%ld\n", traillingZeros(faktorial));
   }

   return 0;
}
