#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
/* #include <time.h> */

#define MAXVALUE 182
#define INVALID 100000
#define MAX_TRIES 2

typedef
struct position_ {
   int row;
   int col;
} Position;

int maxRow, maxCol;
int bitmap[MAXVALUE][MAXVALUE];

int checkPosition(Position currentPos) {
   if(currentPos.row < 0) {
      return 0;
   } else if(currentPos.row > maxRow) {
      return 0;
   } else if(currentPos.col < 0) {
      return 0;
   } else if(currentPos.col > maxCol) {
      return 0;
   }

   return bitmap[currentPos.row][currentPos.col];
}

int calcDist(Position startPos, Position destPos) {
   return (abs(startPos.row - destPos.row) + abs(startPos.col - destPos.col));
}

//short result[MAXVALUE][MAXVALUE];
int calcDistances(Position pos) {
   int nearNeighbour = 1;
   int distance = INVALID;
   int oldDistanceValue = INVALID;
   int sameDistance = 0;
   if(bitmap[pos.row][pos.col] == 1) {
      return 0;
   }
   while(distance == INVALID || sameDistance < MAX_TRIES) {
      Position up;
      up.row = pos.row - nearNeighbour;
      up.col = pos.col;
      if(checkPosition(up)) {
         distance = fmin(distance, calcDist(pos, up));
      }
      Position upRight;
      upRight.row = pos.row - nearNeighbour;
      upRight.col = pos.col + nearNeighbour;
      if(checkPosition(upRight)) {
         distance = fmin(distance, calcDist(pos, upRight));
      }
      Position right;
      right.row = pos.row;
      right.col = pos.col + nearNeighbour;
      if(checkPosition(right)) {
         distance = fmin(distance, calcDist(pos, right));
      }
      Position downRight;
      downRight.row = pos.row + nearNeighbour;
      downRight.col = pos.col + nearNeighbour;
      if(checkPosition(downRight)) {
         distance = fmin(distance, calcDist(pos, downRight));
      }
      Position down;
      down.row = pos.row + nearNeighbour;
      down.col = pos.col;
      if(checkPosition(down)) {
         distance = fmin(distance, calcDist(pos, down));
      }
      Position downLeft;
      downLeft.row = pos.row + nearNeighbour;
      downLeft.col = pos.col - nearNeighbour;
      if(checkPosition(downLeft)) {
         distance = fmin(distance, calcDist(pos, downLeft));
      }
      Position left;
      left.row = pos.row;
      left.col = pos.col - nearNeighbour;
      if(checkPosition(left)) {
         distance = fmin(distance, calcDist(pos, left));
      }
      Position upLeft;
      upLeft.row = pos.row - nearNeighbour;
      upLeft.col = pos.col - nearNeighbour;
      if(checkPosition(upLeft)) {
         distance = fmin(distance, calcDist(pos, upLeft));
      }

      nearNeighbour++;

      if(distance != oldDistanceValue)
         oldDistanceValue = distance;
      else
         sameDistance++;
   }
   return distance;
}

int main(int argc, char** argv) {
   int testCases;
   int i, row, col;
//   int maxRow, maxCol;
   scanf("%i", &testCases);
   /* clock_t allTestCases = clock(); */

   for(i = 0; i < testCases; i++) {
      scanf("%i %i", &maxRow, &maxCol);
      for(row = 0; row < maxRow; row++) {
         char currentArray[maxCol+1];
         scanf("%s", currentArray);
         for(col = 0; col < maxCol; col++) {
            bitmap[row][col] = currentArray[col] - 0x30;
         }
      }

      for(row = 0; row < maxRow; row++) {
         for(col = 0; col < maxCol; col++) {
            Position currentPosition;
            int distance;
            currentPosition.row = row;
            currentPosition.col = col;
            distance = calcDistances(currentPosition);
            printf("%i", distance);
            if(col != (maxCol-1)) {
               printf(" ");
            }
         }
         printf("\n");
      }
   }
    /* clock_t endAllTestCases = clock(); */
    /* double endAllTime = (double)(endAllTestCases - allTestCases) / CLOCKS_PER_SEC; */
    /* printf(" Duration : %lf",endAllTime); */
   return 0;
}
