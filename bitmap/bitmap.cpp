#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cstdlib>
#include <sstream>
#include <ctime>

using namespace std;

#define INVALID 1000000
#define MAX_TRIES 2
#define MAXVALUE 182

typedef pair<int, int> Position;
int rows, columns;

int result[MAXVALUE][MAXVALUE];

int calcDistance(const Position& startPos, const Position& currentPos) {
   return (abs(startPos.first - currentPos.first) + abs(startPos.second - currentPos.second));
}

//typedef set<Position> bitmap;
// typedef vector<Position> bitmap;
// bitmap values;

Position values[MAXVALUE*MAXVALUE];
int valueCounter;

void calcDistance() {
   for(int r = 0; r <rows; r++) {
      for(int c = 0; c < columns; c++) {
         // for(bitmap::iterator iter = values.begin();
         //     iter != values.end();
         //     ++iter) {
         //    result[r][c] = min(result[r][c], calcDistance(make_pair(r,c), (*iter)));
         // }
         for(int i = 0; i < valueCounter; i++) {
            result[r][c] = min(result[r][c], calcDistance(make_pair(r,c), values[i]));
         }
      }
   }
}

int main(int argc, char** argv) {
    int testCases;

    cin >> testCases;
    clock_t allTestCases = clock();
    for(int i = 0; i < testCases; i++) {
        cin >> rows;
        cin >> columns;
        valueCounter = 0;
        for(int r = 0; r < rows; r++) {
           char bitmap[columns+1];
           cin >> bitmap;
           bitmap[columns+1] = '\0';

           for(int c = 0; c < columns; c++) {
              char current = bitmap[c];
              int value = atoi(&current);
              result[r][c] = INVALID;
              if(value) {
//                 values.insert(make_pair(r,c));
//                 values.push_back(make_pair(r,c));
                 values[valueCounter++] = make_pair(r,c);
              }
           }
        }
        // for(int r = 0; r < rows; r++) {
        //    for(int c = 0; c < columns; c++) {
        //       result[r][c] = INVALID;
        //    }
        // }
//         for(int r = 0; r < rows; r++) {
//            for(int c = 0; c < columns; c++) {
// //              Position firstPos = make_pair(r,c);
//               // std::cout << getDistance( firstPos, firstPos);
//               std::cout << getDistance( make_pair(r,c), make_pair(r,c));
//               if(c != (columns-1)) {
//                 std::cout << " ";
//               }

//            }
//           std::cout << std::endl;
//         }
//        std::cout << std::endl;
//        values.clear();
        calcDistance();
        for(int r = 0; r < rows; r++) {
           for(int c = 0; c < columns; c++) {
              std::cout << result[r][c];
              if(c != (columns-1)) {
                std::cout << " ";
              }

           }
          std::cout << std::endl;
        }
       std::cout << std::endl;
//       values.clear();

    }
    // clock_t endAllTestCases = clock();
    // double endAllTime = static_cast<double>(endAllTestCases - allTestCases) / CLOCKS_PER_SEC;
    // std::cout << " Duration : " << endAllTime << std::endl;
    return 0;
}



// int getDistance(const Position& currentPos, const Position& startPos) {
//    if(values.count(currentPos)) {
//       return calcDistance(startPos, currentPos);
//    }
//    int distance = INVALID;
//    int r = startPos.first;
//    int c = startPos.second;
//    int nearNeighbour = 1;
//    int minTimes = 0;
//    int oldDistanceValue;

//    while(distance == INVALID || minTimes < MAX_TRIES ) {
//       Position up = make_pair(r-nearNeighbour, c);
//       Position upRight = make_pair(r-nearNeighbour,c+nearNeighbour);
//       Position right = make_pair(r, c+nearNeighbour);
//       Position downRight = make_pair(r+nearNeighbour,c+nearNeighbour);
//       Position down = make_pair(r+nearNeighbour,c);
//       Position downLeft = make_pair(r+nearNeighbour,c-nearNeighbour);
//       Position left = make_pair(r, c-nearNeighbour);
//       Position upLeft = make_pair(r-nearNeighbour,c-nearNeighbour);

//       nearNeighbour++;
//       vector<Position> currentPositions(8);

//       currentPositions.push_back(up);
//       currentPositions.push_back(upRight);
//       currentPositions.push_back(right);
//       currentPositions.push_back(downRight);
//       currentPositions.push_back(down);
//       currentPositions.push_back(downLeft);
//       currentPositions.push_back(left);
//       currentPositions.push_back(upLeft);

//       for(vector<Position>::const_iterator iter = currentPositions.begin();
//           iter != currentPositions.end();
//           ++iter) {
//          if(values.count(*iter)) {
//             distance = min(distance, calcDistance(startPos, (*iter)));
//             oldDistanceValue = distance;
//          }
//       }
//       if(oldDistanceValue == distance) {
//          minTimes++;
//       }


//    }

//    return distance;
// }
