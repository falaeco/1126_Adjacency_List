#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>
#include <cstdlib>
#include <vector>

#include "linked_list.h"

class graph {
    public:
        int num_vertices;
        // an array of linked_lists to hold vertices
        std::vector<linked_list*> vertices_list;
        graph(int n);
        ~graph();
};

#endif // GRAPH_H_