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

#include <cstdlib>

#include <vector>
//using std::vector;

class Undirected : public Graph {

private:

    std::vector<Edge *> Edges;
    std::vector<Vertex *> Vertexes;
    std::vector<Edge *> pathEdge;

public:

    //Default Constructor
    Undirected();

    virtual bool addVertex(Vertex *);

    virtual bool removeVertex(Vertex *);

    virtual bool addEdge(Edge *);

    virtual bool remove(Edge *);

    virtual bool searchVertex(Vertex *);

    virtual bool searchEdge(Edge *);

    virtual void display(Vertex *);

    virtual void display(Edge *);

    virtual void display();

    virtual string toString();

    virtual bool clean();

    ~Undirected();

    void findPath1(int);

    void findParth2(int);

    Edge returnEdge(int);

    Vertex *returnVertex(int);

    int getNumVertexes() const;

    int getNumEdges() const;

    int returnEdgeIndex(int, int, int);

    int returnVertexIndex(int);

//The overloading Operators
    bool operator==(const Undirected *, const Undirected *) const;

    void operator=(const Undirected *, const Undirected *) const;

    void operator++(const Undirected *) const;

    bool operator>(const Undirected *, const Undirected *) const;

    void operator<<(const Undirected *);

    const Undirected *Undirected::operator=(const Undirected *);
};

#endif /* Undirected_hpp */


