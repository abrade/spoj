#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cstdlib>
#include <sstream>
#include <QTime>

using namespace std;

#define INVALID 1000000

typedef pair<int, int> Position;

int calcDistance(const Position startPos, const Position currentPos) {
   return (abs(startPos.first - currentPos.first) + abs(startPos.second - currentPos.second));
}

typedef set<Position> bitmap;
bitmap values;

int getDistance(const Position currentPos, const Position startPos) {
   if(values.count(currentPos)) {
      return calcDistance(startPos, currentPos);
   }
   int distance = INVALID;
   for(bitmap::const_iterator iter = values.begin();
       iter != values.end();
       ++iter) {
      distance = min(distance, calcDistance(startPos, (*iter)));
      // if(distance == 1) {
      //    return distance;
      // }
   }
   int r = startPos.first;
   int c = startPos.second;
   int nearNeighbour = 1;
   int minTimes = 0;
   int oldDistanceValue;
   while(distance == INVALID || minTimes < 3) {
      Position up = make_pair(r-nearNeighbour, c);
      Position upRight = make_pair(r-nearNeighbour,c+nearNeighbour);
      Position right = make_pair(r, c+nearNeighbour);
      Position downRight = make_pair(r+nearNeighbour,c+nearNeighbour);
      Position down = make_pair(r+nearNeighbour,c);
      Position downLeft = make_pair(r+nearNeighbour,c-nearNeighbour);
      Position left = make_pair(r, c-nearNeighbour);
      Position upLeft = make_pair(r-nearNeighbour,c-nearNeighbour);

      nearNeighbour++;
      QTime vectorTime;
      vectorTime.start();
      vector<Position> currentPositions(8);

      currentPositions.push_back(up);
      currentPositions.push_back(upRight);
      currentPositions.push_back(right);
      currentPositions.push_back(downRight);
      currentPositions.push_back(down);
      currentPositions.push_back(downLeft);
      currentPositions.push_back(left);
      currentPositions.push_back(upLeft);

      for(vector<Position>::const_iterator iter = currentPositions.begin();
          iter != currentPositions.end();
          ++iter) {
         if(values.count(*iter)) {
            distance = min(distance, calcDistance(startPos, (*iter)));
            oldDistanceValue = distance;
         }
      }
      std::cout << " --- " << vectorTime.elapsed() << " ---";
      if(oldDistanceValue == distance) {
         minTimes++;
      }


   }

   return distance;
}

int main(int argc, char** argv) {
	int testCases;

	cin >> testCases;
	for(int i = 0; i < testCases; i++) {
		int rows, columns;
		cin >> rows;
		cin >> columns;

		char bitmap[rows][columns+1];
		for(int j = 0; j < rows; j++) {
			cin >> bitmap[j];
			bitmap[j][columns+1] = '\0';
		}
		for(int r = 0; r < rows; r++) {
			for(int c = 0; c < columns; c++) {
				char current = bitmap[r][c];
				int value = atoi(&current);
				Position pos(r,c);
                if(value)
                   values.insert(pos);
			}
		}
        QTime timeToStop;
        timeToStop.start();
        for(int r = 0; r < rows; r++) {
           for(int c = 0; c < columns; c++) {
              Position firstPos = make_pair(r,c);
              QTime nextTime;
              nextTime.start();
              int distance = getDistance( firstPos, firstPos);
//              std::cout << " GetDistance time: " << nextTime.elapsed() << std::endl;
//              std::cout << distance;
              if(c != (columns-1)) {
//                 std::cout << " ";
              }

           }
//           std::cout << std::endl;
        }
//        std::cout << std::endl;
        values.clear();
        std::cout << " Time needed: " << timeToStop.elapsed() << std::endl;
	}

	return 0;
}
