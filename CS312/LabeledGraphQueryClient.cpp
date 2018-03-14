/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LabeledGraphQueryClient.cpp
 * Author: DANIELDA
 *
 * Created on December 5, 2017, 11:20 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "LabeledGraph.h"

using namespace std;

int main() {
    string input;
    //Creating an instance of the graph and passing the text file movie_short
    LabeledGraph g("/cslab/home/DANIELDA/CS312 starter codes/movies_short.txt");
    
    //Please make sure to follow the formating of the movies_short Text File
    cout<<"Enter actor name  ";
    getline(cin, input);
    
    map<int, int> m = g.breadh_first_search(g.index(input));
    if(g.contains(input)){
        int i = g.index(input);
        
        //With this address I can test my Task# 10
        cout<<"value of i is:" << i << "\n";
        set<int>var = g.neighbors(i);
        std::set<int>::const_iterator it;
        for (it = var.begin(); it != var.end(); ++it)
         {
                u_long f = *it;
                cout<<g.label(f)<<' ';
          }
    }
    else{
        cout<<"Name not found!. "<<endl;
    }
    //Task # 10
    cout<<"Enter actor name:";
    getline(cin, input);
    
    while(input!="-1")
    {
        vector<int> path = g.pathTo(m, g.index(input));
        for(int i=0; i<path.size(); i++)
        {
            cout<<path[i]<<endl;
        }
        g.printPath(path);
    }

    return 0;
}

