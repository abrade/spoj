#include <iostream>

unsigned long traillingZeros(unsigned long num)
{
   unsigned long z = 0;
   unsigned long factor = 5;
   while(num >= factor)
   {
      z = z + (num/factor);
      factor *= 5;
   }
   return z;
}

int main(int argc, char** argv)
{
   int testCases;

   std::cin >> testCases;

   for(int i = 0; i < testCases; i++)
   {
      unsigned long faktorial;
      std::cin >> faktorial;
      std::cout << traillingZeros(faktorial) << std::endl;
   }

   return 0;
}
