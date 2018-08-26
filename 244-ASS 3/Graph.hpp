//
//  Graph.hpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp
#include "Vertex.hpp"
#include "Edge.hpp"
#include <string>
#include <iostream>

using std::string;
class Graph{
public:
   Graph();
    virtual ~Graph();
    //adds one vertex; returns bool if added successfully.
    virtual bool addVertex(Vertex* v)=0;
    //Bonus question: adds in a set of vertices; returns bool if added
    //successfully
    //virtual bool addVertices(Vertex* vArray) = 0;
    //removes a vertex; the edges that have connection with this vertex need to
    //be removed;
    virtual bool removeVertex(Vertex* v) = 0;
    //adds an edge; returns true if the edge is added successfully.
    virtual bool addEdge(Edge* e) = 0;
    //Bonus question: removes a set of edges; as a result, some nodes may remain
    //as orphan.
    //virtual bool addEdges(Edge* eArray) = 0;
    // remove the edge
    virtual bool remove(Edge* e) = 0;
    // returns bool if a vertex exists in a graph.
    virtual bool searchVertex( Vertex* v) = 0;
    // returns bool if an Edge exists in a graph.
    virtual bool searchEdge(Edge* e) = 0;
    // displays the path that contains the vertex.
    virtual void display(Vertex* v) = 0;
    // displays the path that contains the edge.
    virtual void display(Edge* e) = 0;
    // displays the whole graph with your own defined format
    virtual void display()  = 0;
    // converts the whole graph to a string such as 1-2-4-5; 1-3-5; each path
    // is separated by ';'
    virtual string toString () = 0;
    //remove all the vertices and edges;
    virtual bool clean() = 0;
    
};
#endif /* Graph_hpp */
