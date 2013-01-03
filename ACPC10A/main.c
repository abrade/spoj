#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv)
{
   int a1, a2, a3;
   int r1, r2, r3;
   while(1) {
      scanf("%i %i %i", &a1, &a2, &a3);
      if(a1 == 0 && a2 == 0 && a3 == 0) {
         break;
      }
      r1 = a2 - a1;
      r2 = a3 - a2;
      if(r1 == r2) {
         printf("AP %i\n", (a3 + r2));
      } else {
         r1 = a2 / a1;
         r2 = a3 / a2;
         printf("GP %i\n", (a3 * r2));
      }
   }
   return 0;
}
