#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGIT 501
#define MAX_ARITH MAX_DIGIT*2+1

unsigned long calcAdd(unsigned long operand1, unsigned long operand2)
{
   return operand1 + operand2;
}

unsigned long calcSub(unsigned long operand1, unsigned long operand2)
{
   return operand1 - operand2;
}

unsigned long calcMul(unsigned long operand1, unsigned long operand2)
{
   return operand1 * operand2;
}

unsigned long calcDiv(unsigned long operand1, unsigned long operand2)
{
   return operand1 / operand2;
}

typedef unsigned long(*operation)(unsigned long,unsigned long);

int isOperator(const char operatorChar)
{
   switch(operatorChar)
   {
   case '*':
   case '+':
   case '-':
   case '/': return 1;
   default: return 0;
   }
}

operation getOperationFor(const char operatorChar)
{
   switch(operatorChar)
   {
   case '*': return &calcMul;
   case '+': return &calcAdd;
   case '-': return &calcSub;
   case '/': return &calcDiv;
   }

}

unsigned int calculate(unsigned int operand1, unsigned int operand2, operation op)
{
   return op(operand1, operand2);
}

void printSpaces(int spaces)
{
   int i;
   for(i = 0; i < spaces; i++)
      printf(" ");
}

void printLines(int length)
{
   int i;
   for(i = 0; i < length; i++)
   {
      printf("-");
   }
   printf("\n");
}

int getLength(unsigned long value)
{
   char buffer[MAX_DIGIT];
   sprintf(buffer, "%d", value);
   return strlen(buffer);
}

void printValue(char* value, int maxLength)
{
   int spaces = maxLength - strlen(value);
   printSpaces(spaces);
   printf("%s\n", value);
}

void printResult(unsigned long value, int maxLength)
{
   char buffer[MAX_DIGIT];
   sprintf(buffer, "%d", value);
//   printLines(maxLength);
   printValue(buffer, maxLength);
}

int main(int argc, char** argv)
{
   int testcases, i, j, k, spaces;
   unsigned long maxSize;
   char arith[MAX_ARITH];
   char* tmp;
   char operand1[MAX_DIGIT], operand2[MAX_DIGIT];
   unsigned long op1, op2, result, mul, mulResult;
   scanf("%d", &testcases);
   
   for(i = 0; i < testcases; i++)
   {
      memset(arith, 0, MAX_ARITH);
      memset(operand1, 0, MAX_DIGIT);
      memset(operand2, 0, MAX_DIGIT);
      scanf("%s", arith);
      
      for(j = 0; j < strlen(arith); j++)
      {
         if(isOperator(arith[j]) == 1)
         {
            break;
         }
      }
      strncpy(operand1, arith, j);
      operand1[j] = '\0';
      tmp = &arith[j+1];
      strncpy(operand2, tmp, strlen(tmp));
      tmp = &arith[j];
      operation op = getOperationFor(arith[j]);
      op1 = atol(operand1);
      op2 = atol(operand2);
      result = op(op1, op2);

      if(strlen(operand1) > strlen(tmp)) 
         maxSize = strlen(operand1);
      else
         maxSize = strlen(tmp);

      if(maxSize < getLength(result))
         maxSize = getLength(result);

      printValue(operand1, maxSize);
      printValue(tmp, maxSize);
      // multi
      if(arith[j] == '*' && strlen(operand2) > 1)
      {
         spaces = maxSize - strlen(tmp);
         printSpaces(spaces);
         printLines(strlen(tmp));
         for(k = 0; k < strlen(operand2); k++)
         {
            char currentMul = operand2[strlen(operand2) - k - 1];
            char buffer[MAX_DIGIT];
            mul = currentMul - '0';
            mulResult = op(op1, mul);
            sprintf(buffer, "%d", mulResult);
            printValue(buffer, maxSize - k);
         }
         spaces = maxSize - getLength(result);
         printSpaces(spaces);
         printLines(getLength(result));
      }
      else
      {
         printLines(maxSize);
      }
      printResult(result, maxSize);
      printf("\n");
   }
   return 0;
}
