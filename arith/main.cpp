#include <iostream>
#include <iomanip>
#include <sstream>

int calcAdd(int operand1, int operand2)
{
   return operand1 + operand2;
}
int calcSub(int operand1, int operand2)
{
   return operand1 - operand2;
}

int calcMul(int operand1, int operand2)
{
   return operand1 * operand2;
}

int calcDiv(int operand1, int operand2)
{
   return operand1 / operand2;
}

int convertToInt(const std::string& value)
{
   std::stringstream converter(value);
   int convertedToInt;
   converter >> convertedToInt;
   return convertedToInt;
}

typedef int(*operation)(int,int);

bool isOperator(const char& operatorChar)
{
   switch(operatorChar)
   {
   case '*':
   case '+':
   case '-':
   case '/': return true;
   default: return false;
   }
}

operation getOperationFor(const char& operatorChar)
{
   switch(operatorChar)
   {
   case '*': return &calcMul;
   case '+': return &calcAdd;
   case '-': return &calcSub;
   case '/': return &calcDiv;
   }

}

int calculate(int operand1, int operand2, operation op)
{
   return op(operand1, operand2);
}


int getCountIntegeres(int value)
{
   std::stringstream ss;
   ss << value;
   return ss.str().length();
}

int getMaxLength(const std::string& op1, const std::string& op2, int result)
{
   int resultLength = getCountIntegeres(result);
   int firstMax = std::max(op1.length(), op2.length());
   return std::max(firstMax, resultLength) +1;
}

void calc(const std::string& toCalculate)
{
   std::string operand1 = "", operand2 ="";
   char operatorType;
   for(int size = 0; size < toCalculate.length(); size++)
   {
      if(not isOperator(toCalculate[size]))
      {
         continue;
      }
      operand1 = toCalculate.substr(0, size);
      operatorType = toCalculate[size];
      operand2 = toCalculate.substr(size+1, toCalculate.length());

      break;
   }

   if(operand2.empty())
   {
      return;
   }
   
   std::cout << " -> " << operand1 << " " << operatorType << " " << operand2 << std::endl;
   int op1, op2;
   op1 = convertToInt(operand1);
   op2 = convertToInt(operand2);
   int result = calculate(op1, op2, getOperationFor(operatorType));

   int maxLength = getMaxLength(operand1, operand2, result);

   std::cout << std::setw(maxLength) << std::setfill(' ') << operand1 << std::endl;
   std::cout << std::setw(maxLength) << std::setfill(' ') << operatorType << operand2 << std::endl;
   std::cout << std::setw(maxLength) << std::setfill('-') << "";
   if(operatorType == '*')
   {
      std::cout << std::endl;
      for(int i = (operand2.length() - 1) ; i >=0; i--)
      {
         std::string current = &operand2[i];
         int value = convertToInt(current);
         int mulResult = calculate(op1, value, getOperationFor(operatorType));
         
         std::cout << mulResult << std::endl;
      }
   }

   std::cout << std::endl << result << std::endl;
}

int main(int argc, char** argv)
{
   int testCases;
   
   std::cin >> testCases;
   std::string arithm[testCases];

   for(int i = 0; i < testCases; i++)
   {
      std::string currentTestCase;
      std::cin >> currentTestCase;
      arithm[i] = currentTestCase;
   }
   
   for(int i = 0; i < testCases; i++)
   {
      calc(arithm[i]);
   }

   return 0;
}
