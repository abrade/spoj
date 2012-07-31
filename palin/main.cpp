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
      // std::cerr << "pos1 < 0" << std::endl;
      palinVec.insert(palinVec.begin(), 1);
      palinVec[palinVec.size() - 1] = 1;
   }
   // else if(pos1 == 0 && palinVec.size() > 2)
   // {
   //    // std::cerr << "pos1 == 0 && palinVec.size() > 2 " << std::endl;
   //    palinVec[pos2] = palinVec[pos1];
   // }
   else if(palinVec[pos1] < 9)
   {
      // std::cerr << "palinVec[pos1] < 9" << std::endl;
      palinVec[pos1] = palinVec[pos2] = palinVec[pos1] + 1;
   }
   else
   {
      // std::cerr << "Else" << std::endl;
      palinVec[pos1] = palinVec[pos2] = 0;
      doWork(palinVec, pos1-1, pos2+1);
   }
}

bool checkDiff(const std::vector<int>& palinVec)
{
   int pos1, pos2;
   pos1 = 0;
   pos2 = palinVec.size() -1;
   while(pos1 <= pos2)
   {
      if(palinVec[pos1++] != palinVec[pos2--])
      {
         return true;
      }
   }
   return false;
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
      int mid = pos2;
      if(palinVec.size() % 2 == 0)
      {
         pos1--;
      }
      else
         mid++;

      for(int j = 0; j < mid; j++)
      {
         if(palinVec[pos1--] != palinVec[pos2++])
         {
            doWork(palinVec, pos1, pos2);
         }
      }
      // doWork(palinVec, pos1--, pos2++);      
      // while(checkDiff(palinVec))
      // {
      //    doWork(palinVec, pos1--, pos2++);
      // }
      for(int j = 0; j < palinVec.size(); j++)
      {
         std::cout << palinVec[j];
      }
      std::cout << std::endl;
   }

   return 0;
}
