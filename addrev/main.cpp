#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

typedef std::pair<unsigned int,unsigned int> addrev;

std::string convertToString(unsigned int value)
{
   std::stringstream ss;
   ss << value;
   return ss.str();
}

unsigned int convertToInt(const std::string& value)
{
   std::stringstream ss(value);
   unsigned int retVal;
   ss >> retVal;
   return retVal;
}

int main(int argc, char** argv)
{
   int testCases;
   
   std::cin >> testCases;
   std::vector<addrev> pairs;
   for(int i = 0; i < testCases; i++)
   {
      unsigned int first, second;
      std::cin >> first >> second;
      pairs.push_back(std::make_pair(first, second));
   }

   for(int i = 0; i < pairs.size(); i++)
   {
      std::string first, second;
      addrev current = pairs[i];
      first = convertToString(current.first);
      second = convertToString(current.second);

      std::reverse(first.begin(), first.end());
      std::reverse(second.begin(), second.end());

      unsigned int firstInt = convertToInt(first);
      unsigned int secondInt = convertToInt(second);

      unsigned int result = firstInt + secondInt;
      std::string resultString = convertToString(result);
      std::reverse(resultString.begin(), resultString.end());
      std::cout << convertToInt(resultString) << std::endl;
   }
   return 0;
}
