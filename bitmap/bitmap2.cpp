#include <cstdio>
#include <cstdlib>
#include <string>
#include <deque>
#include <queue>

#define MAXVALUE 182
#define INVALID 1000

struct Position {
   Position(int r, int c) {
      row = r; col = c;
   }

   int row;
   int col;
};

int r,c;

bool validPos(Position pos) {
   return ((pos.row >= 0) && (pos.row <= r) && (pos.col >= 0) && (pos.col <= c));
}

int calcDistance(const Position& startPos, const Position& currentPos) {
   return (abs(startPos.row - currentPos.row) + abs(startPos.col - currentPos.col));
}


int main(int argc, char** argv) {
   int t;
   scanf("%i",&t);
   for(int i = 0; i < t; i++) {
      scanf("%i %i", &r, &c);
      int result[r][c];
      int values[r][c];
      for(int row = 0; row < r; row++) {
         char bitmap[c];
         scanf("%s", bitmap);
         for(int column = 0; column < c; column++) {
            values[row][column] = bitmap[column] - '0';
            if(values[row][column] == 1) {
               result[row][column] = 0;
               continue;
            }
            result[row][column] = INVALID;
         }
      }

      for(int row = 0; row < r; row++) {
         for(int column = 0; column < c; column++) {
            if(values[row][column] == 1) {
               std::queue<Position> nodes;
               nodes.push(Position(row,column));
               while(!nodes.empty()) {
                  Position pos = nodes.front();
                  nodes.pop();
                  for(int i = (pos.row - 1); i < (pos.row + 1); i++) {
                     for(int j = (pos.col - 1); j < (pos.col + 1); j++) {
                        Position curPos(i,j);
                        printf("Cur Pos: %i %i\n", i,j);
                        if(validPos(curPos)) {
                           int distance = calcDistance(pos, curPos);
                           printf("Dist: %i == %i\n", distance, result[i][j]);
                           if(result[i][j] > distance) {
                              result[i][j] = distance;
                              printf("Dist: %i == %i\n", distance, result[i][j]);
                              nodes.push(curPos);
                           }
                        }
                     }
                  }
               }
            }
         }
      }


      for(int row = 0; row < r; row++) {
         for(int column = 0; column < c; column++) {
            printf("%i ", result[row][column]);
         }
         printf("\n");
      }


   }

   return 0;
}
