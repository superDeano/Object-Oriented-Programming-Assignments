//
//  Undirected.cpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-17.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#include "Undirected.hpp"
using std::cout;
Undirected::Undirected(){
    Edges.push_back(new Edge (1, 1, 1));
    Vertexes.push_back(new Vertex(1,1));
};

//Member function which adds a new vertex to the graph
bool Undirected::addVertex(Vertex * v){
    Vertexes.push_back(v);
    return true;
}

//Adds new edge to the graph
bool Undirected::addEdge(Edge * e){
    Edges.push_back(e);
    return true;
}

bool Undirected::removeVertex(Vertex *) {
    return true;
}


//TODO: Recheck this
bool Undirected::remove(Edge * e) {
    //To find the index of the Edge in the vector
    int theIndex;
    for (int i =0; i < Edges.size(); i++){
        if (e->getEndingVertex() != Edges[i]->getEndingVertex()){
            return false;
        }
        else if ((e->getStartingVertex()==Edges[i]->getStartingVertex())&&(e->getWeight() == Edges[i]->getWeight())){
            theIndex = i;
            break;
    }
    
}
    return true;}
    
//Function which searches if a vertex exists in a graph
//Assuming that each vertex will have a unique ID
bool Undirected::searchVertex(Vertex * v) {
    
    //Goes through a for loop and checks if that edge exists
    for (int i =0; i < Vertexes.size(); i++){
        if (v->getId() == Vertexes[i]->getId()){
            //If the vertex exists, then the function returns true
            return true;
            }
        }
    //If no matching edge were found, the function returns false
    return false;
}


/*Function which searches if an edge exists in a graph
Assuming that matching edges are ones that have the same weight, ending and starting vertexes
 */
bool Undirected::searchEdge( Edge * e) {
    //Goes through a for loop to search the vector
    for (int i =0; i < Edges.size(); i++){
        //Checks if the stuffs are the same
 if ((e->getStartingVertex()==Edges[i]->getStartingVertex())&&(e->getWeight() == Edges[i]->getWeight())&&((e->getEndingVertex() != Edges[i]->getEndingVertex()))){
     return true;
 }
    //to continue to look for the other objects in the vector
   else continue;
    }
    return false;
}

void Undirected::display(Vertex * v)  {
    int indexFirstPath;
    if (!searchVertex(v)){
        cout << "\nThe Vertex does not exist" << std::endl;
    }
    else{
        for (int i = 0; i < Edges.size(); ++i){
            if (Edges[i]->getStartingVertex()==v->getValue())
                indexFirstPath = i;
            break;
                }
        findPath1(indexFirstPath);
        cout << "The path is " << toString();
    }
}
void Undirected::display(Edge *) {
    
}

void Undirected::display() {
    
}

string Undirected::toString()  {
    string thePath;
    //Uses a for loop to go through the path
    for (int t = 0; t < parthEdge.size();t++){
        //The path is added to the string
        thePath+=std::to_string(parthEdge[t]->getStartingVertex());
        //'-' is added between the paths
        thePath+="-";
    }
    return thePath;
}

bool Undirected::clean() {
    return true;
}

/*Function which finds a path from a first edge*/
void Undirected::findPath1(int path){
    int newPath;
    //This will put the first path in a separate vector
   parthEdge.push_back(Edges[path]);
    //Goes in for loop to check for the next path connected
    for (int i=0; i < Edges.size(); i++) {
        if (Edges[i]->getStartingVertex() == Edges[path]->getEndingVertex()) {
            newPath = i;
            break;
        }
    }
    //The Edge connected to the ending vertex of the previous edge is added to the path
    parthEdge.push_back(Edges[newPath]);
    
    //Assume that the path will not be containing more edges than the number of edges
    if (parthEdge.size() < Edges.size()){
      findPath1(newPath);
    }
}

/*void Undirected::findParth2(int path){
    int newPath;
    //This will put the first path in a separate vector
    parthEdge.push_back(Edges[path]);
    //Goes in for loop to check for the next path connected
    for (int i=0; i < Edges.size(); i++) {
        if (Edges[i]->getStartingVertex() == Edges[path]->getEndingVertex()) {
            newPath = i;
            break;
        }
    }
    parthEdge.push_back(Edges[newPath]);
    if (parthEdge.size() < Edges.size()){
        findParth2(newPath);
    }
}*/

//Returns an object of Edge
Edge Undirected::returnEdge(int i){
    return *Edges[i];
}

//Returns an object of Vertex
Vertex *Undirected::returnVertex(int id){
    int index = returnVertexIndex(id);
    return Vertexes[index];
}

int Undirected::returnVertexIndex(int id){
    //Goes through the vector and looks for the index of the vertex having the id and returns the index
    for (int i =0; i < Vertexes.size();i++){
        if (Vertexes[i]->getId() == id){
            return i;
        }
    }
    //If no vertex is found to match the id then the function returns -1
            return -1;
}


Undirected::~Undirected(){
    //lol
}
