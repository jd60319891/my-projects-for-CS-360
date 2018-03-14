/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LabeledGraph.cxx
 * Author: DANIELDA
 *
 * Created on December 5, 2017, 11:01 AM
 */

#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <algorithm>
#include "LabeledGraph.h"

using namespace std;

LabeledGraph::LabeledGraph(std::string movieFile){
   string line;
    //Open movies_txt file to read line
    ifstream file;
    file.open(movieFile.c_str());
   if(file.is_open())
   {
       while(getline(file, line))
       {
         std::vector<std::string> v;
         std::istringstream is1( line );
         std::string t;
           //Split the line to separate movie names and actors
           //To create my Edges and Vertex
           //Since the "/" is the delimitor, that will be the end point
           while ( std::getline( is1, t, '/' ) )
            {
                if ( t.empty() ) v.push_back( "/" );
                else v.push_back( t );
            }
            for ( int i = 0; i < v.size(); i++)
             {
                 //Create my Vertexes using the parced information
                LabeledGraph::add_vertex(v[i]);
                if (i!=0){
                     //Create my Edges using the parced information
                    LabeledGraph::add_edge(v[0], v[i]);
                }
            }
       }
       file.close();
   }
   else cout <<"unable to open file!";
}

//Task# 7, Breadth First Search Implementation of Graph
std::map<int, int> LabeledGraph::breadh_first_search(int v)
{
    map<int, int> meta;
    meta[v]=-1;
    // Mark all the vertices as not visited
    bool *visited = new bool[V()];
    for(int i = 0; i < V(); i++)
    {
        visited[i] = false;
    }
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[v] = true;
    queue.push_back(v);
 
    // 'i' will be used to get all adjacent vertices of a vertex
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        v = queue.front();
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex v. If a adjacent has not been visited, 
        // then mark it visited and enqueue it
        set<int>var = neighbors(v);
        std::set<int>::const_iterator it;
        for (it = var.begin(); it != var.end(); ++it)
         {
            if (!visited[*it])
            {
                visited[*it] = true;
                queue.push_back(*it);
                meta[*it]=v;
            }
         }
    }
    return meta;
}

//Task# 8, Return the path
std::vector<int> LabeledGraph::pathTo(std::map<int,int> &parent_map, int target)
{
    vector<int> v;
    int i = target;
    while(parent_map[i] != -1)
    {
       //add the existing target to the end
        v.push_back(i);
        i=parent_map[i];
    }
    v.push_back(i);
    return v;
        
}


void LabeledGraph::printPath(std::vector<int> path)
{
    for(int i=0; i<path.size(); i++)
    {
    cout<<label(path[i])<<endl;
    }
        
}
 

void LabeledGraph::add_vertex(string vlabel){
  labels.push_back(vlabel);
  indexedLabels.insert(pair<string, int>(vlabel, V()));
  indexedLabels2.insert(pair<int, string>(V(), vlabel));
  set<int> s;
  edges.push_back(s);
}


void LabeledGraph::add_edge(string source, string target){
    if (!contains(source))
      add_vertex(source);
    if (!contains(target))
      add_vertex(target);
    edges[indexedLabels[source]].insert(indexedLabels[target]);
    edges[indexedLabels[target]].insert(indexedLabels[source]);
    nedges++;
}

bool LabeledGraph::contains(string vlabel) const {
  return indexedLabels.find(vlabel) != indexedLabels.end();
}

set<int> LabeledGraph::neighbors(int v) const{
    return edges[v];
}

string LabeledGraph::label(int v) const {
    return labels[v];
}

int LabeledGraph::index(string vlabel) {
    return indexedLabels[vlabel];
}

ostream& operator<< (ostream &out, const LabeledGraph &g)
{
   out<<"===================================\n";
    out <<"Graph Summary: "<<g.V()<<" vertices, "<<g.E() <<" edges "<<endl;
    out<<"===================================\n";
    for(int i = 0; i <g.edges.size(); i++ ){
        out  << "\n" << g.label(i) <<"\n";
        std::set<int> neighbor = g.edges.at(i);
        for(std::set<int>::iterator it  = neighbor.begin(); it != neighbor.end(); ++it){
            std::cout<< '\t' << g.label(*it);
            std::cout<<"\n";
        }
          
    }
  return out;
}