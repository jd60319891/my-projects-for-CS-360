/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LabeledGraphClient.cpp
 * Author: DANIELDA
 *
 * Created on December 6, 2017, 10:13 AM
 */

#include <iostream>
#include "LabeledGraph.h"
using namespace std;

/*
 * 
 */
int main2() {
    LabeledGraph daniel_labeledgraph;
    daniel_labeledgraph.add_vertex("Chris Pratt");
    daniel_labeledgraph.add_vertex("Guardians of the Galaxy");
    daniel_labeledgraph.add_vertex("Zoe Saldana");
    daniel_labeledgraph.add_vertex("Van Diesel");
    daniel_labeledgraph.add_vertex("The Fate of the Furious");
    daniel_labeledgraph.add_vertex("Michel Rodriguez");
    daniel_labeledgraph.add_vertex("Avatar");
    daniel_labeledgraph.add_vertex("Sam Washington");
    
    daniel_labeledgraph.add_edge("Chris Pratt", "Guardians of the Galaxy");
    daniel_labeledgraph.add_edge("Van Diesel", "Guardians of the Galaxy");
    daniel_labeledgraph.add_edge("Zoe Saldana","Guardians of the Galaxy" );
    daniel_labeledgraph.add_edge("Van Diesel", "The Fate of the Furious");
    daniel_labeledgraph.add_edge("Michel Rodriguez", "The Fate of the Furious");
    daniel_labeledgraph.add_edge("Michel Rodriguez", "Avatar");
    daniel_labeledgraph.add_edge("Sam Washington", "Avatar");
    daniel_labeledgraph.add_edge("Zoe Saldana", "Avatar");

    
    cout <<daniel_labeledgraph<<" ";
    
    return 0;
}

