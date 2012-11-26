#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 500
#define RESULT_DIGITS (MAX_DIGITS*2)

int charToInt(char c)
{
   char* p_c = &c;
   return atoi(p_c);
}

int calcAdd(int operand1, int operand2, int result)
{
   return operand1 + operand2 + result;
}

int calcSub(int operand1, int operand2, int result)
{
   return operand1 - operand2;
}

int calcMul(int operand1, int operand2, int result)
{
   return operand1 * operand2;
}

int calcDiv(int operand1, int operand2, int result)
{
   return operand1 / operand2;
}

typedef int(*operation)(int,int, int);

void nothing(int* i) { (void)i; }
void increment(int* i) { (*i)++; }
void decrement(int* i) { (*i)--; }

typedef void(*specific)(int*);


char* calculate(char* op1, char* op2, operation operand, specific sp)
{
   char result[RESULT_DIGITS];
   memset(result, 0, RESULT_DIGITS);

   int op1Len = strlen(op1) - 1;
   int op2Len = strlen(op2) - 1;
   int i,k, l;
   
   if(op1Len > op2Len)
   {
      i = op1Len;
   }
   else
   {
      i = op2Len;
   }

   sp(&i);
   while(op1Len >= 0 || op2Len >= 0)
   {
      int op1Int = charToInt(op1[op1Len--]);
      int op2Int = charToInt(op2[op2Len--]);
      int resultInt = op1Int + op2Int + charToInt(result[i]);
      char rChar[3];
      sprintf(rChar, "%d", resultInt);
      l = i--;
      for(k = strlen(rChar)- 1; k >= 0 ; k--)
      {
         result[l--] = rChar[k];
      }
   }
   return result;

}

char* add(char* op1, char* op2)
{
   char result[RESULT_DIGITS];
   memset(result, 0, RESULT_DIGITS);

   int op1Len = strlen(op1) - 1;
   int op2Len = strlen(op2) - 1;
   int i,k, l;
   
   if(op1Len > op2Len)
   {
      i = op1Len;
   }
   else
   {
      i = op2Len;
   }

   i++;
   while(op1Len >= 0 || op2Len >= 0)
   {
      int op1Int = charToInt(op1[op1Len--]);
      int op2Int = charToInt(op2[op2Len--]);
      int resultInt = op1Int + op2Int + charToInt(result[i]);
      char rChar[3];
      sprintf(rChar, "%d", resultInt);
      l = i--;
      for(k = strlen(rChar)- 1; k >= 0 ; k--)
      {
         result[l--] = rChar[k];
      }
   }
   return result;
}

char* sub(char* op1, char* op2)
{
   char result[RESULT_DIGITS];
   memset(result, 0, RESULT_DIGITS);

   int op1Len = strlen(op1) - 1;
   int op2Len = strlen(op2) - 1;
   int i,k, l;
   
   if(op1Len > op2Len)
   {
      i = op1Len;
   }
   else
   {
      i = op2Len;
   }

   while(op1Len >= 0 || op2Len >= 0)
   {
      int op1Int = charToInt(op1[op1Len--]);
      int op2Int = charToInt(op2[op2Len--]);
      int resultInt = op1Int - op2Int - charToInt(result[i]);
      char rChar[3];
      sprintf(rChar, "%d", resultInt);
      printf("%s\n", rChar);
      l = i--;
      for(k = strlen(rChar)- 1; k >= 0 ; k--)
      {
         if(rChar[k] == '-')
         {
            rChar[k] = '1';
         }
         result[l--] = rChar[k];
      }
   }

   for(k = strlen(result) -1 ; k >= 0; k--)
   {
      int c = charToInt(result[k]);
      if(c > 0)
         c = 10 - c;

      char newChar[1];
      sprintf(newChar, "%d", c);
      result[k] = newChar[0];
   }
   return result;
}

int main(int argc, char** argv)
{
   int testCases;
//   scanf("%i", &testCases);

   char first[MAX_DIGITS];
   char second[MAX_DIGITS];

   strcpy(first, "999999");
   strcpy(second, "999999");

   char* result = add(first, second);

   printf("%s+%s=%s\n", first, second, result);

   strcpy(first, "1203234");
   strcpy(second, "999999");
   

   char* subResult = sub(first, second);
   printf("%s-%s=%s\n", first, second, subResult);

   
   return 0;
}
