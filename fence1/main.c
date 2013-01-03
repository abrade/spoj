#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char** argv) {
   int fence  = 1;
   float a, r;
   do {
      scanf("%i", &fence);
      if(fence == 0) {
         break;
      }
      a = (fence * fence) / M_PI;

      printf("%.2f\n", (a/2.0));

   } while(fence);

   return 0;
}
