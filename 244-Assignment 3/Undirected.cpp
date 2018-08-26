//
//  Undirected.cpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-17.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#include "Undirected.hpp"

using std::cout;

//The default constructor
Undirected::Undirected() = default {};

//Member function which adds a new vertex to the graph
bool Undirected::addVertex(Vertex *v) {
    Vertexes.push_back(v);
    return true;
}

//Adds new edge to the graph
bool Undirected::addEdge(Edge *e) {
    Edges.push_back(e);
    return true;
}

//function which deletes a vertex
bool Undirected::removeVertex(Vertex *v) {
    int index;
    //gets the index of where that vertex is in the vector
    index = returnVertexIndex(v->getId());

    //Checking if that vertex indeed exists
    if (index == - 1)
        return false;

        //Deleting the vertex
    else {
        Vertexes.erase(Vertexes.begin() + index);
        return true;
    }
}


//Function which removes an object of edge from the vector
bool Undirected::remove(Edge *e) {
    //To find the index of the Edge in the vector
    int theIndex;
    //Gets the index of where the edge is in the vector
    theIndex = returnEdgeIndex(e->getStartingVertex(), e->getEndingVertex(), e->getWeight());
    //Checks if the edge exists in the vector
    if (theIndex != - 1) {
        Edges.erase(Edges.begin() + theIndex);
        return true;
    }
        //if the edge does not exist, returns false
    else
        return false;

}

//Function which searches if a vertex exists in a graph
//Assuming that each vertex will have a unique ID
bool Undirected::searchVertex(Vertex *v) {

    //Goes through a for loop and checks if that edge exists
    for (int i = 0; i < Vertexes.size(); i ++) {
        if (v->getId() == Vertexes[i]->getId()) {
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
bool Undirected::searchEdge(Edge *e) {
    //Goes through a for loop to search the vector
    for (int i = 0; i < Edges.size(); i ++) {
        //Checks if the stuffs are the same
        if ((e->getStartingVertex() == Edges[i]->getStartingVertex()) && (e->getWeight() == Edges[i]->getWeight()) &&
            ((e->getEndingVertex() != Edges[i]->getEndingVertex()))) {
            return true;
        }
            //to continue to look for the other objects in the vector
        else continue;
    }
    //No matching Edge was found
    return false;
}


void Undirected::display(Vertex *v) {
    int indexFirstPath;
    //The vertex does not exist
    if (! searchVertex(v)) {
        cout << "\nThe Vertex does not exist" << std::endl;
    }
        //If the vertex exist
    else {
        //Looks for the first path
        for (int i = 0; i < Edges.size(); ++ i) {
            if (Edges[i]->getStartingVertex() == v->getValue())
                indexFirstPath = i;
            break;
        }
        //Calls function which looks for the rest of the path
        findPath1(indexFirstPath);
        //Outputs path
        cout << "The path is " << toString();
    }
}

//By display Edge, it displays a path from that Edge
void Undirected::display(Edge *e) {
    int indexFirstPath;
    //Looks if that particular edge exist
    if (! searchEdge(e)) {
        cout << "\nThe Edge does not exist" << std::endl;
    } else {

        //Looks for the first
        for (int i = 0; i < Edges.size(); ++ i) {
            //looks for the first path available
            if (Edges[i]->getStartingVertex() == e->getEndingVertex())
                indexFirstPath = i;
            break;
        }
        //Calls function which will find a path
        findPath1(indexFirstPath);
        cout << "The path is " << toString();
    }
}

//Displays the graph
void Undirected::display() {

    std::cout << "\nThe Nodes" << std::endl;
    //Displays the nodes
    for (int i = 0; i < Vertexes.size(); i ++) {
        std::cout <<"\n"<< Vertexes[i]->getValue();
    }

    std::cout << "\nThe Edges" << std::endl;
    //Displays the edges
    for (int x = 0; x < Edges.size(); x++){
        std::cout << "\n" << Edges[x]->getStartingVertex()<< "--" <<Edges[x]->getEndingVertex();
    }
}


//Function which takes a path andt turns it into a string
string Undirected::toString() {
    string thePath;
    //Uses a for loop to go through the path
    for (int t = 0; t < pathEdge.size(); t ++) {
        //The path is added to the string
        thePath += std::to_string(pathEdge[t]->getStartingVertex());
        //'-' is added between the paths
        if (t < pathEdge.size())
            thePath += "-";
            //At the end a ; is added
        else
            thePath += ";";
    }
    return thePath;
}


//Removes the edges and nodes
bool Undirected::clean() {
    Vertexes.clear();
    Edges.clear();
    return true;
}

/*Function which finds a path from a first edge*/
void Undirected::findPath1(int path) {
    int newPath;
    int i = 0;
    //This will put the first path in a separate vector
    pathEdge.push_back(Edges[path]);
    //Goes in for loop to check for the next path connected
    for (i; i < Edges.size(); i ++) {
        if (Edges[i]->getStartingVertex() == Edges[path]->getEndingVertex()) {
            newPath = i;
            break;
        }
    }
    //The Edge connected to the ending vertex of the previous edge is added to the path
    pathEdge.push_back(Edges[newPath]);

    //Assume that the path will not be containing more edges than the number of edges
    if (pathEdge.size() < Edges.size()) {
        findParth2(newPath);
    }
}

//Second function call to find the path
void Undirected::findParth2(int path) {
    int newPath;
    //This will put the first path in a separate vector
    pathEdge.push_back(Edges[path]);
    //Goes in for loop to check for the next path connected
    for (path; path < Edges.size(); path ++) {
        if (Edges[path]->getStartingVertex() == Edges[path]->getEndingVertex()) {
            newPath = path;
            break;
        }
    }
    pathEdge.push_back(Edges[newPath]);
    if (pathEdge.size() < Edges.size()) {
        findParth2(newPath);
    }
}

//Returns an object of Edge
Edge Undirected::returnEdge(int id) {
    return *Edges[id];
}

//Returns an object of Vertex
Vertex *Undirected::returnVertex(int id) {
    //gets index of such a vertex from the vector
    int index = returnVertexIndex(id);
    //checks if there is really such a vertex
    if (index == - 1)
        cout << "Vertex not found";
    else
        return Vertexes[index];
}

//function which returns the id of a vector by looking for the matching ID
int Undirected::returnVertexIndex(int id) {
    //Goes through the vector and looks for the index of the vertex having the id and returns the index
    for (int i = 0; i < Vertexes.size(); i ++) {
        if (Vertexes[i]->getId() == id) {
            return i;
        }
    }
    //If no vertex is found to match the id then the function returns -1
    return - 1;
}

//Function which returns the index of a vertex by taking 3 arguments
int Undirected::returnEdgeIndex(int starting, int ending, int weight) {
    //For loop to go through the whole vector of edges
    for (int i = 0; i < Edges.size(); i ++) {

        //Checks whether there's a matching edge
        if ((ending == Edges[i]->getEndingVertex()) && (ending == Edges[i]->getStartingVertex()) &&
            (weight == Edges[i]->getWeight()))
            //if that edge exists, it returns its index
            return i;
    }
    //if it does not find any matching edge, -1 is returned
    return - 1;
}

//Destructor, clears all the nodes, edges and paths
Undirected::~Undirected() {
    Edges.clear();
    Vertexes.clear();
    pathEdge.clear();
}

//Get number of Vertexes in a Graph
int Undirected::getNumVertexes() const {
    return Vertexes.size();
}

//Get number of Edges in a graph
int Undirected::getNumEdges() const {
    return Edges.size();
}

//which checks if two graph are similar
bool Undirected::operator==(const Undirected *g1, const Undirected *g2) const {
    int numNodesG1 = g1->getNumVertexes();
    int numNodesG2 = g2->getNumVertexes();

    bool equal = false;

    //if two graphs do not have the same number of nodes, they're the same
    if (numNodesG1 != numNodesG2) { return false; }

//Goes through all the nodes of G1
    for (int i = 0; i < numNodesG1; i ++) {

        //Goest through all the nodes of G2
        for (int x = 0; x < numNodesG2; x ++) {
            //The equal was found, moves on to next one
            if (g1->Vertexes[i] == g2->Vertexes[x]) {
                equal = true;
                break;
            } else
                equal = false;
        }
    }
    //At the end of the loop, if there's no matching
    if (equal == false)
        return false;

    else {
        int numEdgeG1 = g1->getNumEdges();
        int numEdgeG2 = g2->getNumEdges();

        //If two graphs do not have the same number of edges, they are not the same
        if (numEdgeG2 != numEdgeG1) {
            return false;
        }

        //Goes through all the Edges of G1
        for (int i = 0; i < numEdgeG1; i ++) {

            //Goest through all the edges of G2
            for (int x = 0; x < numEdgeG2; x ++) {

                if (g1->Edges[i] == g2->Edges[x]) {
                    equal = true;
                    break;
                } else
                    equal = false;
            }

        }
        //At the end, return the result
        return equal;
    }

}

//Operator which assigns a new graph to a current one
const Undirected *Undirected::operator=(const Undirected *right) {
    if (&right != reinterpret_cast<const Undirected **>(this))
        //Assigning the graph to an existing one
        this->Vertexes = Vertexes;
    this->Edges = Edges;
    return this;
}

//Operator which adds one to weight of every edge
void Undirected::operator++(const Undirected *G) const {
    int numEdges = G->getNumEdges();
    int weight;

    //for loop to go through all the egdes of Graph G
    for (int i = 0; i < numEdges; i ++) {
        //Gets the weight
        weight = Edges[i]->getWeight();
        //changes the weight to weight + 1
        Edges[i]->setWeight(weight + 1);
    }

}

//Operator which checks which graphs has the edges with the more weights
bool Undirected::operator>(const Undirected *G1, const Undirected *G2) const {
    int weightG1, weightG2, numEdgesG1, numEdgesG2 = 0;
    //Gets the number of edges from each graph
    numEdgesG1 = G1->getNumEdges();
    numEdgesG2 = G2->getNumEdges();

    //For loop to go through all the sum of weight of all edges of Graph 1
    for (int i = 0; i < numEdgesG1; i ++) {
        weightG1 += G1->Edges[i]->getWeight();
    }

    //For loop to go through all the sum of weight of all edges of Graph 1
    for (int i = 0; i < numEdgesG2; i ++) {
        weightG2 += G2->Edges[i]->getWeight();
    }

    //To know what to return
    if (weightG1 > weightG2)
        return true;
    else
        return false;
}

//Operator which displays the graph
void Undirected::operator<<(const Undirected *G) {

    std::cout << "\nThe Nodes" << std::endl;
    //Displays the nodes
    for (int i = 0; i < G->getNumVertexes(); i ++) {
    std::cout <<"\n"<< Vertexes[i]->getValue();
    }

    std::cout << "\nThe Edges" << std::endl;
    //Displays the edges
    for (int x = 0; x < G->getNumEdges(); x++){

        std::cout << "\n" << Edges[x]->getStartingVertex()<< "--" << Edges[x]->getEndingVertex();
    }
}

void Undirected::operator=(const Undirected *, const Undirected *) const {

}

