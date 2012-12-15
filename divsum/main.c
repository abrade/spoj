#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {
   int testCases;
   int i;
   scanf("%i", &testCases);
   for(i = 0; i < testCases; i++) {
      int testNumber;
      int divsum, j;
      scanf("%i", &testNumber);
      divsum = 0;
      for(j = 1; j < testNumber; j++) {
         if((testNumber % j) == 0) {
            divsum += j;
         }
      }
      printf("%d\n", divsum);
   }
   return 0;
}
