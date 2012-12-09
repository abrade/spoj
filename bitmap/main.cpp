#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cstdlib>
#include <sstream>

using namespace std;


//typedef pair<int, int> Position;

class Position {
public:
	Position() : row_(-1), column_(-1) {}
	Position(int row, int column): row_(row), column_(column) { }
	int row_;
	int column_;
	string toString() const {
		std::stringstream ss;
		ss << row_ << "," << column_;
		return ss.str();
	}

	friend bool operator==(const Position& lhs, const Position& rhs);
	friend bool operator<(const Position& lhs, const Position& rhs);

};

inline bool operator==(const Position& lhs, const Position& rhs) {
	return !(lhs< rhs) && !(rhs < lhs);
}

inline bool operator<(const Position& lhs, const Position& rhs) {
	if(lhs.row_ == rhs.row_) {
		return lhs.column_ < rhs.column_;
	}
	return lhs.row_ < rhs.row_;
}



class Node {

public:
	Node(Position pos, int value): pos_(pos), value_(value) {}
	Position getPos() const {
		//std::cerr << __FUNCTION__ << " - " << pos_.first << "," << pos_.second << std::endl;
		return pos_;
	}
	int getValue() const { return value_; }
	friend bool operator==(const Node& lhs, const Node& rhs);
	friend bool operator<(const Node& lhs, const Node& rhs);

private:
	Position pos_;
	int value_;
};

inline bool operator==(const Node& lhs, const Node& rhs) {
	return !(lhs< rhs) && !(rhs < lhs);
}

inline bool operator<(const Node& lhs, const Node& rhs) {
   if(lhs.getPos() == rhs.getPos()) {
      return lhs.getValue() < rhs.getValue();
	}
   return lhs.getValue() < rhs.getValue();
}


class World {
public:
	World(int rows, int columns) : rows_(rows), columns_(columns) {
	}

	void addNode(int value, int row, int column) {
		Position pos(row, column);
//		std::cerr << " ADD -> " << row << "," << column << " .... " << &pos << std::endl;
		Node node(pos, value);
		pair<map<Position, Node>::iterator, bool> returnVal =  nodes_.insert(make_pair(pos, node));
//		if(returnVal.second) { std::cerr << " inserted!" << std::endl; }
//		std::cerr << " -------------------> " << nodes_.size() << std::endl;
	}

	int getValueForPos(Position pos) {
		if(nodes_.count(pos) != 0)
		{
			return nodes_.at(pos).getValue();
		}
		return -1;
	}

	Node getNodeForPosition(Position pos) {
		// std::cerr << " wanna get for: " << pos.row_ << "," << pos.column_ << std::endl;
		// std::cerr << " ----> " << nodes_.size() << " -> " << nodes_.count(pos) << std::endl;
		if(nodes_.count(pos) > 0) {
			return nodes_.at(pos);
		}
		// std::cerr << "Invalid Node!" << std::endl;
		return Node(Position(-1,-1), -1);
	}

	vector<Node> getNeighboursForPosition(Position pos) {
		int r = pos.row_;
		int c = pos.column_;

		vector<Position> currentPositions(8);

		Position up(r-1, c);
		Position upRight(r-1,c+1);
		Position right(r, c+1);
		Position downRight(r+1,c+1);
		Position down(r+1,c);
		Position downLeft(r+1,c-1);
		Position left(r, c-1);
		Position upLeft(r-1,c-1);

		currentPositions.push_back(up);
//		currentPositions.push_back(upRight);
		currentPositions.push_back(right);
//		currentPositions.push_back(downRight);
		currentPositions.push_back(down);
//		currentPositions.push_back(downLeft);
		currentPositions.push_back(left);
//		currentPositions.push_back(upLeft);

		vector<Node> neighbours;

		for(vector<Position>::const_iterator iter = currentPositions.begin();
			iter != currentPositions.end();
			++iter) {
			if(nodes_.count(*iter) != 0) {
//				std::cerr << "->" << (*iter).toString() << std::endl;
				neighbours.push_back(nodes_.at(*iter));
			}
		}
		return neighbours;
	}

private:
	map<Position, Node > nodes_;
	int rows_;
	int columns_;
};

typedef set<Node> ChildSet;
typedef map<Node, ChildSet> ChildTree;
ChildTree tree_map;

ChildSet toVisit;

int calcDistance(const Position startPos, const Position currentPos) {
   return (abs(startPos.row_ - currentPos.row_) + abs(startPos.column_ - currentPos.column_));
}

int generateTree(set<Position>& alreadyVisited, World& currentWorld, const Node currentNode, int distance, const Node startNode) {
//	std::cerr << "1 " << alreadyVisited.size() << std::endl;
	Position current = currentNode.getPos();
//	std::cerr << "pos : " << current.toString() << std::endl;
    if(currentNode.getValue()) {
       return calcDistance(startNode.getPos(), current);
    }
//	std::cerr << "2 " << alreadyVisited.size() << std::endl;

	if(alreadyVisited.count(current) == 0) {
		alreadyVisited.insert(current);
	}

	vector<Node> neighbours = currentWorld.getNeighboursForPosition(current);
    for(vector<Node>::const_iterator iter = neighbours.begin();
		iter != neighbours.end();
		++iter) {
       if((*iter).getValue()) {
          return calcDistance(startNode.getPos(), (*iter).getPos());
       }
//		std::cerr << "4 " << alreadyVisited.size() << " | " << tree.size() << std::endl;
	}
//	std::cerr << "3 " << alreadyVisited.size() << std::endl;

//	std::cerr << " Neighbours: " << neighbours.size() << std::endl;
	for(vector<Node>::const_iterator iter = neighbours.begin();
		iter != neighbours.end();
		++iter) {
		Position nodePos = (*iter).getPos();
		if(alreadyVisited.count(nodePos) == 0) {
			alreadyVisited.insert(nodePos);
            toVisit.insert(*iter);
		}
//		std::cerr << "4 " << alreadyVisited.size() << " | " << tree.size() << std::endl;
	}
    int distanceChild[toVisit.size()];
    int count = 0;
    for(ChildSet::const_iterator iter = toVisit.begin();
        iter != toVisit.end();
        ++iter) {
       distanceChild[count++] = generateTree(alreadyVisited, currentWorld, *iter, distance + 1, startNode);
    }
    if(distance == 0) {
       distance = 10000000;
    }

    for(count = 0; count < toVisit.size(); count++) {
       distance = min(distance, distanceChild[count]);
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
		World myWorld(rows,columns);
		set<Position > allReadyVisited;
		for(int r = 0; r < rows; r++) {
			for(int c = 0; c < columns; c++) {
				char current = bitmap[r][c];
				int value = atoi(&current);
				Position pos(r,c);
				myWorld.addNode(value, r,c);
			}
		}

        for(int r = 0; r < rows; r++) {
           for(int c = 0; c < columns; c++) {
              Position firstPos(r,c);
              Node currentNode = myWorld.getNodeForPosition(firstPos);
              int distance = generateTree( allReadyVisited, myWorld, currentNode,0, currentNode);
              std::cout << distance << " ";

           }
           std::cout << std::endl;
        }
        

	}

	return 0;
}
