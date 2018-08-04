#include <iostream>
#include <cstdlib>

#include "graph.h"

int main (int argc, const char* argv[]) {
    std::cout << "Hello World!\n";
    graph* G = new graph(5);
    std::cout << G->get_order() << std::endl;
    std::cout << G->get_size() << std::endl;

    G->add_edge(0, 1);
    G->add_edge(2, 4);
    G->print_graph();

    if(G->is_empty()) {
        std::cout << "Graph is empty\n";
    } else {
        std::cout << "Graph has " << G->get_order() << " edges\n";
    }

   return 0;
}