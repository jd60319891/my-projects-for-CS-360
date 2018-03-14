#ifndef LABELED_GRAPH_H
#define LABELED_GRAPH_H

#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>

class LabeledGraph {
public:

    // CONSTRUCTOR
    LabeledGraph()  {nedges = 0; }
    LabeledGraph(std::string movieFile);

    // MODIFICATION MEMBER FUNCTIONS
    //adds a vertex with a specifc label
    void add_vertex(std::string vlabel);

    //adds an edge from vertex with source label to vertex with target label
    void add_edge(std::string source, std::string target);
    
    void printPath(std::vector<int> path);
    
    std::map<int, int> breadh_first_search(int v);
    std::vector<int> pathTo(std::map<int,int> &parent_map, int target);
    
    // CONSTANT MEMBER FUNCTIONS
    int V( ) const { return edges.size(); } //number of vertices
    int E( ) const { return nedges; }       //number of edges
    bool contains(std::string vlabel) const;     //does graph contain vertex with label vlabel?
    std::set<int> neighbors(int v) const;  //returns the vertices adjacent to vertex v
    std::string label(int v) const;     //returns the label of vertex v
    int index(std::string vlabel);           //returns the index of the vertex with label vlabel
    std::string getName(int i) const;     //returns the label of vertex v
   
    // OVERLOADED OUTPUT OPERATOR
    friend std::ostream& operator<< (std::ostream &out, const LabeledGraph &g);

private:
  int nedges;
  std::vector<std::set<int> > edges;
  std::vector<std::string> labels;
  std::map<std::string, int> indexedLabels;
  std::map<int,std::string> indexedLabels2;
  
    
};

#endif