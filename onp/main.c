#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 400

int isOperator(const char c)
{
   switch(c)
   {
   case '+':
   case '-':
   case '/':
   case '^':
   case '*': return 1;
   default: return 0;
   }
   return 0;
}


int main(int argc, char** argv)
{
   int testCases,i,j;
   int count = 0, idx, k;
   char onp[MAX_CHARS];
   char new_onp[MAX_CHARS];
   scanf("%i", &testCases);

   for(i = 0; i < testCases; i++)
   {
      scanf("%s", onp);
      for(j = 0; j < strlen(onp); j++)
      {
         if(onp[j] == '(')
         {
            idx = j;
            count++;
         }

         if(onp[j] == ')')
         {
            for(k = idx + 1; k < j; k++)
            {
               if(isOperator(onp[k]) == 1)
               {
                  
               }
            }
         }
      }
   }
   return 0;
}
