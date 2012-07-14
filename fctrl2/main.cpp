#include <iostream>
#include <sstream>

unsigned long fak(unsigned long faktorial)
{
   if(faktorial == 1)
      return 1;
   return faktorial * fak(faktorial - 1);
}


int main(int argc, char** argv)
{
   int testCases;
   
   std::cin >> testCases;

   for(int i = 0; i < testCases; i++)
   {
      unsigned long faktorial;
      std::cin >> faktorial;
      std::cout << fak(faktorial) << std::endl;
   }


   return 0;
}
