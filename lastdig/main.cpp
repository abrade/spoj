#include <iostream>
#include <sstream>
#include <cstdio>

int main(int argc, char** argv) {
   int testCases;
   //std::cin >> testCases;
   scanf("%i", &testCases);
   for(int i = 0; i < testCases; i++) {
      int base;
      unsigned long long int index;
      scanf("%i %ulli", &base, &index);
      unsigned long output = 1;
      if(index > 0) {
         index %= 4;
         if(index == 0) {
            index = 4;
         }
         for(int j = 0; j < index; j++) {
            output *= base;
         }
      }
      printf("%u\n", output%10);
   }

   return 0;
}
