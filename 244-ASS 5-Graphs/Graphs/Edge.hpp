//
//  Edge.hpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#ifndef Edge_hpp
#define Edge_hpp

#include <stdio.h>
class Edge {
public:
    
    //constructor
    Edge();
    Edge (int, int ,int);
    
    //Copy constructor
    Edge(const Edge &);
    
    //Setters
    void setWeight(int);
    void setStartingVertex(int);
    void setEndingVertex (int);
    
    //Getters
    int getWeight();
    int getStartingVertex();
    int getEndingVertex();
    
    //Destructor
    ~Edge();
    
    private :
    
    int weight;
    int startingVertex;
    int endingVertex;
    
    
    
    
    
};

#endif /* Edge_hpp */
