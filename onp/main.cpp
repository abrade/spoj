#include <iostream>
#include <sstream>
#include <vector>
#include <set>

bool inFront(const char&c ) {
   switch(c) {
   	case '+':
   	case '-': return true; break;
   	case '*':
   	case '/':
   	case '^':
   	default: return false; break;
   }
}

bool isOperator(const char& c) {
   switch(c) {
   	case '+':
   	case '-':
   	case '*':
   	case '/':
   	case '^': return true; break;
   	default: return false; break;
   }
}

int main(int argc, char** argv) {
   int testCases;
   
   std::cin >> testCases;

   for(int i = 0; i < testCases; i++) {
      std::string input;
      std::cin >> input;
      std::vector<char> onp(input.length());
      int countOpen = 0;
      int countClose = 0;
      std::vector<int> indexOfOpen;
      std::set<char> alreadyFound;
      for(int j = 0; j < input.length(); j++) {
         if(input[j] == '(')
            indexOfOpen.push_back(j);

         if(input[j] == ')') {
            int lastIndex = indexOfOpen.back();
            indexOfOpen.pop_back();
            std::vector<char> onp_sep(j - lastIndex);
    
            char op;
            for(int k = (lastIndex + 1); k < j; k++) {
               if(input[k] == '(' || input[k] == ')') {
                  continue;
               }

               if(alreadyFound.count(input[k]) != 0) {
                  continue;
               }
               if(isOperator(input[k])) {
                  op = input[k];
                  alreadyFound.insert(op);
               } else {
                  onp_sep.push_back(input[k]);
                  alreadyFound.insert(input[k]);
                  std::cerr << " onp.push_back -> " << input[k] << std::endl;
               }
            }
            if(inFront(op)) {
               onp.push_back(op);
               onp.insert(onp.begin(), onp_sep.begin(), onp_sep.end());
            }
            else {
               onp.insert(onp.end(), onp_sep.begin(), onp_sep.end());
               onp.push_back(op);
            }
         }
      }

      for(int i = 0; i < onp.size(); i++) {
         std::cout << onp[i];
      }

      std::cout << std::endl;
   }

   return 0;
}
