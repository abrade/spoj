#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
   int testCases;
   int i;
   int x,y;
   scanf("%i", &testCases);

   for(i = 0; i < testCases; i++)
   {
      int result = 0;
      scanf("%i %i", &x, &y);
      if(x != y && (x-2) != y)
      {
         printf("No Number\n");
         continue;
      }

      if(x == y)
      {
         result = x * 2;
         if(x % 2 != 0)
            result -= 1;
         printf("%d\n", result);
         continue;
      }

      result = x + y;
      if(y % 2 != 0)
         result -= 1;
      printf("%d\n", result);
   }
   return 0;
}
