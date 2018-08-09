#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>

#include "linked_list.h"

class graph {
    private:
        int num_vertices; // order
        int num_edges; // size

        // an array of linked_lists to hold vertices
        std::vector<linked_list*> vertices_list;
    public:
        graph(int n);
        ~graph();
        
        /*** Access methods ***/
        int get_order();
        int get_size();

        bool is_empty();

        /*** Manipulation methods ***/
        void add_edge(int u, int v);
        void remove_edge(int u, int v);

        void bfs_print();
        void dfs_print();
        void print_graph();

};

#endif // GRAPH_H_