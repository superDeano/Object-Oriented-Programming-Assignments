//
//  Edge.cpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#include "Edge.hpp"

//The default constructor
Edge::Edge() = default;

//The main constructor
Edge::Edge(int weight, int startingVertex, int endingVertex){
    
    this->weight = weight;
    this->startingVertex = startingVertex;
    this->endingVertex = endingVertex;
};

//The copy constructor
Edge::Edge (const Edge & anEdge){
    
    weight = anEdge.weight;
    startingVertex = anEdge.startingVertex;
    endingVertex = anEdge.endingVertex;
};

//Setter
void Edge::setWeight(int weight){
    this->weight = weight;
}

//Setter
void Edge::setEndingVertex(int endingVertex){
    this->endingVertex = endingVertex;
}

//Setter
void Edge::setStartingVertex(int startingVertex){
    this->startingVertex = startingVertex;
}

//Getter
int Edge::getWeight(){
    return weight;
}

//Getter
int Edge::getEndingVertex(){
    return endingVertex;
}

//Getter
int Edge::getStartingVertex(){
    return startingVertex;
}
