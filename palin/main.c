#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MAX_DIGISTS 1000000

int charToInt(char c) {
   char* p_c = &c;
   return atoi(p_c);
}

int stringToInt(char* string) {
   return atoi(string);
}


int main(int argc, char** argv) {
   int testCases;
   int i;

   scanf("%li", &testCases);
   for(i = 0; i < testCases; i++) {
      char currentPalin[MAX_DIGISTS];
      char originPalin[MAX_DIGISTS];
      int len, mid, runMidToLeft, runMidToRight;
      scanf("%s", currentPalin);
      strcpy(originPalin, currentPalin);
      printf("First: %s\nSecond: %s\n", currentPalin, originPalin);
      len = strlen(currentPalin);
      mid = len / 2;
      runMidToLeft = (len %2 == 0) ? mid : mid - 1;
      runMidToRight = (len %2 == 0) ? mid : mid + 1;
      printf("%i\n", (len/2));
      printf("%i <-> %i\n", runMidToLeft, runMidToRight);
      while(runMidToLeft >= 0) {
         currentPalin[runMidToRight++] = currentPalin[runMidToLeft--];
      }
      printf("First: %s\nSecond: %s\n", currentPalin, originPalin);
      printf("%i\n", stringToInt(currentPalin));
      if(stringToInt(currentPalin) <= stringToInt(originPalin)) {
         printf("in if!\n" );
         currentPalin[mid] = currentPalin[mid]++;
      }
      printf("%s\n", currentPalin);
      printf("len: %d, mid: %d\n", len, mid);
   }

   return 0;
}
