#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <cstdlib>

class node {
    public:
        int data; //data stored in current node
        node* next;

        // Default Constructor
        node();
        // Constructor with parameter list
        node(int data);
};

#endif // NODE_H_