//
//  Undirected.hpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-17.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//
#include "Graph.hpp"
#ifndef Undirected_hpp
#define Undirected_hpp
#include <vector>
#include <stdio.h>
using std::vector;

class Undirected : public Graph {
    
private:
    vector<Edge*> Edges;
    vector<Vertex*> Vertexes;
    vector<Edge*> parthEdge;
    
public:
    
    //Default Constructor
    Undirected();
    //Undirected(int , int, int);
    virtual bool addVertex(Vertex*);
    virtual bool removeVertex (Vertex*);
    virtual bool addEdge (Edge*);
    virtual bool remove (Edge*);
    virtual bool searchVertex(Vertex *);
    virtual bool searchEdge (Edge *);
    virtual void display (Vertex*);
    virtual void display (Edge*) ;
    virtual void display();
    virtual string toString();
    virtual bool clean();
     ~Undirected();
    void findPath1(int);
    void findParth2(int);
    Edge returnEdge(int);
    Vertex *returnVertex (int);
    int returnEdgeIndex(int);
    int returnVertexIndex(int);
};

#endif /* Undirected_hpp */
