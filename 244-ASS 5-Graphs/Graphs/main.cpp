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

void menu();
void addEdge();
void addVertex();
void displayPathforV();

Undirected* UndirectGraph = new Undirected;
int main() {
    
    std::cout << "Undirect Graph!\n";
    menu();
    return 0;
}

//Function which adds new vertex
void addVertex(){
    int id, value;
    //The title of the menu
    std::cout << "\nAdding new Vertex" << std::endl;
    //Gathering Data
    std::cout << "\nEnter the ID of the vertex" <<std::endl;
    std::cin >> id;
    std::cout << "Enter the value of the vertex" << std::endl;
    std::cin >> value;
    //Adding the new vertex
    UndirectGraph ->addVertex(new Vertex(id,value));
    std::cout << "\nNew Vertex added" << std::endl;
    menu();
};

//Function which adds new edge
void addEdge(){
    int weight, endingVertex, startingVertex;
    //The title of the menu
    std::cout << "\nAdding new Edge" << std::endl;
    //Gathering Data
    std::cout << "\nEnter the Weight of the edge" << std::endl;
    std::cin >> weight;
    std::cout << "\nEnter the Starting Vertex" << std::endl;
    std::cin >> startingVertex;
    std::cout << "\nEnter the Ending Vertex" << std::endl;
    std::cin >> endingVertex;
    std::cout << "Adding the new vertex" ;
    try {
        bool diditAdd;
        (diditAdd = UndirectGraph->addEdge(new Edge(weight, startingVertex, endingVertex)));
        
        if (!diditAdd)
            throw "it didnt add";
        
    } catch (string z) {
        std::cout << z;
    }

   // std::cout << "\nNew Edge added" << std::endl  std::cout << "Graph was not added"<< std::endl;
    menu();
};

void displayPathforV(){
    int id;
    std::cout << "Displaying path"<<std::endl;
    std::cout << "Enter the ID";
    std::cin >> id;
    
    UndirectGraph->display(UndirectGraph->returnVertex(id));
    
    menu();
};
//if (){
    
void menu(){
    int choice;
    std::cout << "\nMain Menu" <<std::endl;
    std::cout << "\n1 - Add new Vector\n2 - Add new Edge\n3 - Display" << std::endl;
    std::cin >> choice;
    while (choice <1 || choice>3){
        std::cin >> choice;
    }
    switch (choice) {
        case 1:
            addVertex();
            break;
        case 2:
            addEdge();
            break;
        default:
            displayPathforV();
            break;
    }
};
