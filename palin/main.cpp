#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> convertToVec(const std::string& palin)
{
   std::vector<int> palinVec;
   for(int i = 0; i < palin.length(); i++)
   {
      char c = palin[i];
      palinVec.push_back(int(c - '0'));
   }
   return palinVec;
}

void doWork(std::vector<int>& palinVec, int pos1, int pos2)
{
   if(pos1 < 0)
   {
      palinVec.insert(palinVec.begin(), 1);
      palinVec[palinVec.size() - 1] = 1;
   }
   else if(pos1 == 0)
   {
      palinVec[pos2] = palinVec[pos1];
   }
   else if(palinVec[pos1] < 9)
   {
      if(palinVec[pos1] <= palinVec[pos2])
      {
         palinVec[pos1] = palinVec[pos2] = palinVec[pos1] + 1;
      }
      else if(palinVec[pos1] > palinVec[pos2])
      {
         palinVec[pos1] = palinVec[pos2];
      }
   }
   else
   {
      palinVec[pos1] = palinVec[pos2] = 0;
      doWork(palinVec, pos1-1, pos2+1);
   }
}

int main(int argc, char** argv)
{
   int testCases;
   
   std::cin >> testCases;

   for(int i=0; i < testCases; i++)
   {
      std::string palin;
      std::cin >> palin;
      std::vector<int> palinVec = convertToVec(palin);
      int pos1, pos2;
      pos1 = pos2 = palinVec.size() / 2;
      if(palinVec.size() % 2 == 0)
      {
         pos1--;
         for(int j = 0; j < (palinVec.size() / 2); j++)
         {
            doWork(palinVec, pos1--, pos2++);
         }
      }
      else
      {
         for(int j = 0; j <= (palinVec.size() / 2); j++)
         {
            doWork(palinVec, pos1--, pos2++);
         }
      }
      for(int j = 0; j < palinVec.size(); j++)
      {
         std::cout << palinVec[j];
      }
      std::cout << std::endl;
   }

   return 0;
}
