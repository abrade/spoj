#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
   if(argc == 2) {
      int maxCount = atoi(argv[1]);
      std::cout << maxCount << std::endl;
      for(int count = 0; count < maxCount; count++) {
         int maxRow = (rand()%180)+1;
         int maxColumn = (rand()%180)+1;
         std::cout << maxRow << " " << maxColumn << std::endl;
         for(int i=0; i < maxRow; i++) {
            for(int j = 0; j < maxColumn; j++) {
               std::cout << (rand()%2);
            }
            std::cout << std::endl;
         }

      }
   } else if(argc == 3) {
      int row = atoi(argv[1]);
      int column = atoi(argv[2]);
      srand(time(0));
      for(int i=0; i < row; i++) {
         for(int j = 0; j < column; j++) {
            std::cout << (rand()%2);
         }
         std::cout << std::endl;
      }
   } else {
      std::cout << "182" << std::endl;
      srand(time(0));
      for(int maxCount = 0; maxCount < 182; maxCount++) {

      int maxRow = (rand()%180)+1;
      int maxColumn = (rand()%180)+1;
      std::cout << maxRow << " " << maxColumn << std::endl;
      for(int i=0; i < maxRow; i++) {
         for(int j = 0; j < maxColumn; j++) {
            std::cout << (rand()%2);
         }
         std::cout << std::endl;
      }
      }

   }

   return 0;
}
