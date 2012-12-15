#include <iostream>
#include <sstream>
#include <cmath>
#include <cstring>

void calcPrime(unsigned long int min, unsigned long int max) {
   unsigned long int i, j;
   unsigned long int *allPrimeValues = new unsigned long int[(max - min) + 2];
   for(i = 1; i <= (max - min); i++) {
      allPrimeValues[i] = i;
   }
//   unsigned long int sqrtMax = sqrt(max);
   int counter = 1;
   for(i = min; i < max; i++) {
      if(allPrimeValues[counter] % 2 == 0) {
         allPrimeValues[counter] = 1;
      } else if(allPrimeValues[counter] % 3 == 0) {
         allPrimeValues[counter] = 1;
      } else if(allPrimeValues[counter] % 5 == 0) {
         allPrimeValues[counter] = 1;
      } else if(allPrimeValues[counter] % 7 == 0) {
         allPrimeValues[counter] = 1;
      } else {
         allPrimeValues[counter] = 0;
      }

      counter++;
   }
//   allPrimeValues[1] = 0;
   allPrimeValues[0] = 0;

   for(i = min; i <= max; i++) {
      if(allPrimeValues[i] != 0) {
         //printf("%li\n", allPrimeValues[i]);
         std::cout << allPrimeValues[i] << std::endl;
      }
   }
   delete allPrimeValues;
}

int main(int argc, char** argv)
{
   int testCases;

   std::cin >> testCases;
   for(int i = 0; i < testCases; i++) {
      unsigned long int min, max;
      std::cin >> min;
      std::cin >> max;
      calcPrime(min, max);
      std::cout << std::endl;
   }
   return 0;
}
