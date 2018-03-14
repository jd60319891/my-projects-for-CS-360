/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GraphClient.cpp
 * Author: DANIELDA
 *
 * Created on December 4, 2017, 1:06 PM
 */
#include <iostream>
#include "Graph.h"
using namespace std;
int main22()
{
    Graph DanielGraph;
    DanielGraph.add_vertex();
    DanielGraph.add_vertex();
    DanielGraph.add_vertex();
    DanielGraph.add_vertex();
    DanielGraph.add_vertex();
    
    DanielGraph.add_edge(0, 4);
    DanielGraph.add_edge(4, 2);
    DanielGraph.add_edge(2, 3);
    
    DanielGraph.add_edge(1,4);
    cout <<DanielGraph;
    return 0;
}