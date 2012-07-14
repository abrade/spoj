#include <iostream>

unsigned int traillingZeros(unsigned int num)
{
   unsigned int z = 0;
   unsigned int factor = 5;
   while(num > factor)
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
      unsigned int faktorial;
      std::cin >> faktorial;
      std::cout << traillingZeros(faktorial) << std::endl;
   }

   return 0;
}
