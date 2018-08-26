//
//  Vertex.cpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#include "Vertex.hpp"

//Default constructor
Vertex::Vertex():id(0), value(0){};

//Main constructor
Vertex::Vertex(int id, int value){
    this-> id = id;
    this -> value = value;
}

//Copy constructor
Vertex::Vertex(Vertex const &aVertex){
    id = aVertex.id;
    value = aVertex.value;
}

//Getter
void Vertex::setId(int id){
    this-> id = id;
}

//Getter
void Vertex::setValue(int value){
    this->value = value;
}

//Setter
int Vertex::getId(){
    return id;
}

//Setter
int Vertex::getValue(){
    return value;
}
