#include <iostream>
#include <sstream>
#include <list>
#include <algorithm>

typedef std::pair<int, std::string> Toandfro;

void decrypt(const Toandfro& crypted)
{
   int pivot = crypted.first;
   std::string cryptedString = crypted.second;
   while((pivot+crypted.first) <= cryptedString.length())
   {
      std::string::iterator start = cryptedString.begin();
      std::string::iterator end = cryptedString.begin();
      std::advance(start, pivot);
      std::advance(end, pivot+crypted.first);
      pivot += (crypted.first*2);
      std::reverse(start, end);
   }

   int outer = cryptedString.length() / crypted.first;
   int count = 0;
   for(int i = 0; i < outer; i++)
   {
      std::string::iterator iter = cryptedString.begin();
      std::advance(iter, i);
      for(int j = 0; j < outer; j++)
      {
         count++;
         std::cout << (*iter);
         std::advance(iter, crypted.first);
         if(count == cryptedString.length())
         {
            std::cout << std::endl;
            return;
         }
      }
   }
   std::cout << std::endl;
}


int main(int argc, char** argv)
{
   std::list<Toandfro> toandfroList;
   int pivot = 1;
   while((std::cin >> pivot) && pivot != 0)
   {
      if(pivot == 1 || pivot > 20)
      {
         continue;
      }
      std::string cryptedText;
      std::cin >> cryptedText;
      if(cryptedText.length() > 200)
         cryptedText = cryptedText.substr(0, 200);
      Toandfro current = std::make_pair(pivot, cryptedText);
      toandfroList.push_back(current);
   }

   for(std::list<Toandfro>::iterator iter = toandfroList.begin();
       iter != toandfroList.end();
       ++iter)
   {
      decrypt(*iter);
   }

   return 0;
}
