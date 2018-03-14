#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Graph.h"
#include <cassert>

using namespace std;

void Graph::add_vertex(){
  set<int> s;
  edges.push_back(s);
}

void Graph::add_edge(int source, int target){
    assert (contains(source) && contains(target));
    edges[source].insert(target);
    edges[target].insert(source);
    nedges++;
}

set<int> Graph::neighbors(int v) const{
    assert (contains(v));
    return edges[v];
}

bool Graph::contains(int v) const{
  return v < V();
}

ostream& operator<< (ostream &out, const Graph &g) {
    out<<"===================================\n";
    out <<"Graph Summary: "<<g.V()<<" vertices, "<<g.E() <<" edges "<<endl;
    out<<"===================================\n";
    for(int i = 0; i <g.edges.size(); i++ ){
        out  <<i<<" ---->";
        std::set<int> neighbor = g.edges.at(i);
        for(std::set<int>::iterator it  = neighbor.begin(); it != neighbor.end(); ++it)
            std::cout<< ' ' << *it;
            std::cout<<"\n";
            
        
        
    }
    
  return out;
}
