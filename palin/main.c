#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MAX_DIGISTS 1000000

int charToInt(char c)
{
   char* p_c = &c;
   return atoi(p_c);
}


int main(int argc, char** argv)
{
   int testCases;
   int i;

   scanf("%i", &testCases);
   for(i = 0; i < testCases; i++)
   {
      char currentPalin[MAX_DIGISTS];
      int len, mid;
      scanf("%s", currentPalin);
      len = strlen(currentPalin);
      mid = len / 2;
      if(len % 2 == 1)
      {
         int currentMid = charToInt(currentPalin[mid]);
         char rChar[3];
         currentMid++;
         sprintf(rChar, "%d", currentMid);
         
      }

      printf("len: %d, mid: %d\n", len, mid);
   }

   return 0;
}
