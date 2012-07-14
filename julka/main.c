#include <stdio.h>
#include <math.h>

#define MAX_TESTCASES 10

int roundFtoI(float val)
{
   float rest = val / 1.0;
   if(rest >= 0.5)
      return (val + 1);

   return val;
}

int main(int argc, char** argv)
{
   int testCases = 0;
   int klaudiaMore;
   int klaudia = 0;
   int natalia = 0;
   int apples;
   
   while(testCases < MAX_TESTCASES)
   {
      scanf("%i", &apples);
      scanf("%i", &klaudiaMore);
      testCases++;

      int halfApples = apples/2;
      float halfApplesMoref = klaudiaMore/2.0;
      int halfApplesMore = ceil(halfApplesMoref);

      klaudia = halfApples + halfApplesMore;
      natalia = apples - klaudia;
//      natalia = halfApples - round(halfApplesMoref);
//      klaudia = apples - natalia;

      printf("Klaudia has: %d\n", klaudia);
      printf("Natalia has: %d\n", natalia);
      if((klaudia- natalia) != klaudiaMore)
      {
         printf("Error ... \n");
      }

   }
   return 0;
}
