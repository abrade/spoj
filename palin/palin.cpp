#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int aToI(char c)
{
   return (c - '0');
}


string getNextPalin(const string & input)
{
   int pivot;
   pivot = input.size() / 2;
   if(input.size() % 2)
      pivot++;
   int indexLeft = pivot - 1;
   int indexRight = pivot;
   int left = aToI(input[indexLeft]);
   int right = aToI(input[indexRight]);
   
   string result = input;
   if(left > right)
   {
      result[indexRight] = input[indexLeft];
   }
   else
   {
      left++;
      result[indexLeft] = left;
   }
   

   while(indexLeft > 0 && indexRight < input.size())
   {
      left = aToI(input[indexLeft--]);
      right = aToI(input[indexRight++]);
      
   }

   return result;
}

int main(int argc, char** argv)
{
   int t;
   cin >> t;
   vector<string> results;
   for(int count = 0; count < t; ++count)
   {
      string input;
      cin >> input;
      results.push_back(getNextPalin(input));
   }
   
   cout << "Results: " << endl;
   for(vector<string>::iterator it = results.begin();
       it != results.end();
       ++it)
   {
      cout << *it << endl;
   }
   
   return 0;
}
