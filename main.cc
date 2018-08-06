#include <iostream>
#include <cstdlib>

#include "graph.h"

int main (int argc, const char* argv[]) {
    std::cout << "Hello World!\n";
    graph* G = new graph(5);
    std::cout << G->get_order() << std::endl;
    std::cout << G->get_size() << std::endl;

    std::cout << "Adding edges: \n";
    G->add_edge(0, 1);
    G->add_edge(2, 4);
    G->print_graph();
    std::cout << "Removing edges: \n";
    G->remove_edge(0, 1);
    G->print_graph();
    G->remove_edge(2,4);
    G->print_graph();

   return 0;
}