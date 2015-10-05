#include <iostream>
#include <sstream>
//#include <climits>
#include <stdint.h>


uint64_t fakt(uint64_t fak)
{
	uint64_t calcFak = fak;
	for(uint64_t i = fak - 1; i > 1; i--)
	{
		calcFak = calcFak * i;
	}
	return calcFak;
}


int main(int argc, char** argv)
{
   int testCases;
   std::cin >> testCases;
   for(int i = 0; i < testCases; i++)
   {
	   uint64_t k, n;
	   std::cin >> n >> k;
	   if( n == k )
	   {
		   std::cout << "1" << std::endl;
		   continue;
	   }

	   if ( (n-k) < k ) k = n-k;

	   // formal n! / (n-k)!k!
	   std::cerr << "Values: " << k  << ":" << n << std::endl;
	   uint64_t nenner = fakt(n-k) * fakt(k);
	   std::cerr << nenner << std::endl;
	   uint64_t zaehler = fakt(n);
	   std::cerr << zaehler << std::endl;

	   std::cout << zaehler/nenner << std::endl;
   }


   return 0;
}
