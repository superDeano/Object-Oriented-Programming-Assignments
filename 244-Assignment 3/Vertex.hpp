//
//  Vertex.hpp
//  Graphs
//
//  Created by Dean Chong San on 2018-03-16.
//  Copyright © 2018 Dean Chong San. All rights reserved.
//

#ifndef Vertex_hpp
#define Vertex_hpp


class Vertex {
    
public:
    
    //The constructor
    Vertex();
    Vertex (int, int);
    //Copy constructor
    Vertex(const Vertex &);
    
    //Setters
    void setId (int);
    void setValue(int);
    
    //Getters
    int getId();
    int getValue();
    //Destructor
    ~Vertex();
    
private:
    int id;
    int value;
    
};

#endif /* Vertex_hpp */
