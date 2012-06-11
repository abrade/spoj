#include <iostream>
#include <iomanip>
#include <sstream>

unsigned int calcAdd(unsigned int operand1, unsigned int operand2)
{
   return operand1 + operand2;
}

unsigned int calcSub(unsigned int operand1, unsigned int operand2)
{
   return operand1 - operand2;
}

unsigned int calcMul(unsigned int operand1, unsigned int operand2)
{
   return operand1 * operand2;
}

unsigned int calcDiv(unsigned int operand1, unsigned int operand2)
{
   return operand1 / operand2;
}

int convertToInt(const std::string& value)
{
   std::stringstream converter(value);
   unsigned int convertedToInt;
   converter >> convertedToInt;
   return convertedToInt;
}

typedef unsigned int(*operation)(unsigned int,unsigned int);

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

unsigned int calculate(unsigned int operand1, unsigned int operand2, operation op)
{
   return op(operand1, operand2);
}


int getCountIntegeres(unsigned int value)
{
   std::stringstream ss;
   ss << value;
   return ss.str().length();
}

int getMaxLength(const std::string& op1, const std::string& op2, unsigned int result)
{
   int resultLength = getCountIntegeres(result);
   int firstMax = std::max(op1.length(), op2.length());
   return std::max(firstMax, resultLength);
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
   
   unsigned int op1, op2;
   op1 = convertToInt(operand1);
   op2 = convertToInt(operand2);
   int result = calculate(op1, op2, getOperationFor(operatorType));

   const std::string opAndop2 = operatorType + operand2;
   int maxLength = getMaxLength(operand1, opAndop2, result);
   std::cout << std::setw(maxLength) << std::setfill(' ') << operand1 << std::endl;
   std::cout << std::setw(maxLength) << std::setfill(' ') << opAndop2 << std::endl;
   if(operatorType == '*' && operand2.length() > 1)
   {
      int currentMaxLength = std::max(operand1.length(), opAndop2.length());
      std::cout << std::setw(maxLength-currentMaxLength) << std::setfill(' ') << "" << std::setw(currentMaxLength) << std::setfill('-') << "";
      std::cout << std::endl;
      int count = 0;
      for(int i = (operand2.length() - 1) ; i >=0; i--)
      {
         std::string current = &operand2[i];
         current = current[0];
         unsigned int value = convertToInt(current);
         unsigned int mulResult = calculate(op1, value, getOperationFor(operatorType));
         std::cout << std::setw(maxLength - (count++)) << std::setfill(' ') << mulResult << std::endl;
      }
      std::cout << std::setw(maxLength) << std::setfill('-') << "";
   }
   else
   {
      std::cout << std::setw(maxLength) << std::setfill('-') << "";
   }

   std::cout << std::endl << std::setw(maxLength) << std::setfill(' ') <<  result << std::endl;
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
   
   std::cout << std::endl;
   for(int i = 0; i < testCases; i++)
   {
      calc(arithm[i]);
      std::cout << std::endl;
   }

   return 0;
}
