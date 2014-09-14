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
   bool operator<(const Position& rhs) {
      return row < rhs.row && col < rhs.col;
   }

   bool operator>(const Position& rhs) {
      return row > rhs.row && col > rhs.col;
   }

   Position operator()(const Position& rhs) {
      row = rhs.row;
      col = rhs.col;
      return *this;
   }
};

int r,c;

inline
bool validPos(Position& pos) {
   return ((pos.row >= 0) && (pos.row < r) && (pos.col >= 0) && (pos.col < c));
}

inline
int calcDistance(const Position& startPos, const Position& currentPos) {
   int row = startPos.row - currentPos.row;
   if(row < 0)
      row *= -1;

   int col = startPos.col - currentPos.col;
   if(col < 0)
      col *= -1;
   return (row + col);
}


int main(int argc, char** argv) {
   int t;
   scanf("%i",&t);
   std::queue<Position> nodes;
   // std::priority_queue<Position, std::vector<Position>, std::greater<Position> > nodes;
   for(int i = 0; i < t; i++) {
      scanf("%i %i", &r, &c);
      int result[r][c];
      int values[r][c];
      for(int row = 0; row < r; row++) {
         char bitmap[c];
//scanf("%s", bitmap);
         fscanf(stdin, "%s", bitmap);

         for(int column = 0; column < c; column++) {
            values[row][column] = bitmap[column] - '0';
            if(values[row][column] == 1) {
               result[row][column] = 0;
               nodes.push(Position(row, column));
               continue;
            }
            result[row][column] = INVALID;
         }
      }

      while(!nodes.empty()) {
         Position pos = nodes.front();
         // Position pos = nodes.top();
         nodes.pop();
         Position curPos(pos.row + 1, pos.col);
         int distance = result[pos.row][pos.col] + 1;
         if(validPos(curPos)) {
// int distance = calcDistance(onePosition, curPos);
            if(result[curPos.row][curPos.col] > distance) {
               result[curPos.row][curPos.col] = distance;
               nodes.push(curPos);
            }
         }

         curPos = Position(pos.row, pos.col + 1);
         if(validPos(curPos)) {
// int distance = calcDistance(onePosition, curPos);
            if(result[curPos.row][curPos.col] > distance) {
               result[curPos.row][curPos.col] = distance;
               nodes.push(curPos);
            }
         }

         curPos = Position(pos.row - 1, pos.col);
         if(validPos(curPos)) {
// int distance = calcDistance(onePosition, curPos);
            if(result[curPos.row][curPos.col] > distance) {
               result[curPos.row][curPos.col] = distance;
               nodes.push(curPos);
            }
         }

         curPos = Position(pos.row, pos.col - 1);
         if(validPos(curPos)) {
// int distance = calcDistance(onePosition, curPos);
            if(result[curPos.row][curPos.col] > distance) {
               result[curPos.row][curPos.col] = distance;
               nodes.push(curPos);
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
