#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <map>
#include <set>
#include <climits>
#include <queue>

#define MAXNODES 10000
using namespace std;


typedef std::map<std::string, int> CityList;
typedef vector<vector <pair<int, int> > > NEIGHBOURS;



int dijkstra(int& startCity, int& endCity, CityList& nodes,NEIGHBOURS& neighbours ) {
   int prio[MAXNODES];

   typedef std::pair<int, int> DistToCity;
   for(int i = 0; i < nodes.size(); i++)
      prio[i] = INT_MAX;

   std::priority_queue<DistToCity, std::vector<DistToCity>, std::greater<DistToCity> > q;
   prio[startCity] = 0;
   q.push(std::make_pair(0, startCity));
   while(!q.empty()) {
      int dist = q.top().first;
      int city = q.top().second;
      // cerr << "current : " << city << endl;
      q.pop();
      if(dist > prio[city]) continue;
      if(city == endCity) return prio[city];
      vector<pair<int,int> >& neigh = neighbours[city];
      for(vector<pair<int,int> >::iterator iter = neigh.begin();
          iter != neigh.end();
          ++iter) {
         int n = (*iter).first;
         int dist = (*iter).second;
         // cerr << "Neighbour: " << n << " : " << dist << endl;
         int nprio = prio[city] + dist;
         // cerr << "NPrio: " << nprio << " = " << prio[city] << endl;
         if(prio[n] > nprio) {
            prio[n] = nprio;
            q.push(std::make_pair(nprio, n));
         }
      }

   }

}

int main(int argc, char** argv)
{
   int testCases;

   scanf("%i", &testCases);
   for(int i = 0; i < testCases; i++) {
      CityList nodes;
      NEIGHBOURS neighbours;

      int cities;
      scanf("%i", &cities);
      for(int j = 0; j < cities; j++) {
         char name[11];
         scanf("%s", name);
         int countNeighbours;
         scanf("%i", &countNeighbours);
         vector<pair<int,int> > neigh;
         for(int k = 0; k < countNeighbours; k++) {
            int neighbourIdx, neighbourCosts;
            scanf("%i %i", &neighbourIdx, &neighbourCosts);
            neigh.push_back(make_pair(neighbourIdx - 1, neighbourCosts));
         }
         neighbours.push_back(neigh);
         nodes.insert(std::make_pair(name, j));
      }

      int numberPaths;
      scanf("%i", &numberPaths);
      for(int j = 0; j < numberPaths; j++) {
         char startCity[11];
         char endCity[11];
         scanf("%s %s", startCity, endCity);

         int stCity = nodes[startCity];
         int enCity = nodes[endCity];
         // printf("%s -> %s\n", startCity, endCity);
         printf("%d\n", dijkstra(stCity, enCity, nodes, neighbours));
      }
   }

   return 0;
}
