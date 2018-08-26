//
//  main.cpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//
#include "Undirected.hpp"
#include "Vertex.hpp"
#include "Edge.hpp"
#include <iostream>



int main() {
    
    std::cout << "Undirect Graph!\n";
    //New Graph
    Undirected* UndirectGraph = new Undirected;

    //Adding a few nodes
    UndirectGraph->addVertex(new Vertex(1, 1));
    UndirectGraph->addVertex(new Vertex(2, 2));
    UndirectGraph->addVertex(new Vertex(3, 3));
    UndirectGraph->addVertex(new Vertex(4, 4));

    //Adding few edges
    UndirectGraph->addEdge(new Edge(1, 1, 2));
    UndirectGraph->addEdge(new Edge(3, 2, 3));
    UndirectGraph->addEdge(new Edge(5, 3, 4));
    UndirectGraph->addEdge(new Edge(1, 4, 1));
    UndirectGraph->addEdge(new Edge(1, 4, 3));

    //Displays the graph
    UndirectGraph->display();

    Edge* testingEdge = nullptr;
    //Gets an Edge object from the Graph
    *testingEdge = UndirectGraph->returnEdge(1);
    //Displays the path from that edge object
    UndirectGraph->display(testingEdge);

    //Gets a vertex object from the graph
    Vertex* testingVertex = UndirectGraph->returnVertex(3);
    //displays a part form the vertex
    UndirectGraph->display(testingVertex);


    //New Graph for testing
Undirected * testingGraph2 = new Undirected;

    //Adding same vertex as original graph
    testingGraph2->addVertex(new Vertex(1, 1));
    testingGraph2->addVertex(new Vertex(2, 2));
    testingGraph2->addVertex(new Vertex(3, 3));
    testingGraph2->addVertex(new Vertex(4, 4));

    //Adding same edges as original graoh
    testingGraph2->addEdge(new Edge(1, 1, 2));
    testingGraph2->addEdge(new Edge(3, 2, 3));
    testingGraph2->addEdge(new Edge(5, 3, 4));
    testingGraph2->addEdge(new Edge(1, 4, 1));
    testingGraph2->addEdge(new Edge(1, 4, 3));

    //Testing the overloaded operator ==
    if (testingGraph2 == UndirectGraph)
        std::cout << "\nThey are similar";
    else
        std::cout << "They are not similar";

    //Overloaded operator which adds 1 to the weight
    ++UndirectGraph;

    //Testing the overloaded operator == again
    if (testingGraph2 == UndirectGraph)
        std::cout << "\nThey are similar";
    else
        std::cout << "They are not similar";

    //Member function which cleans the graph
    UndirectGraph->clean();

    //OVerloaded operator which prints the graph
    std::cout<<testingGraph2;


    return 0;
}

