#include <iostream>
#include <cstdlib>

#include "graph.h"

int main (int argc, const char* argv[]) {
    std::cout << "Hello World!\n";
    graph* G = new graph(5);
    for (int i = 0; i < 5; i++) {
        if (G->vertices_list[i]->is_empty()) {
            std::cout << "list is empty\n";
        }
    }

   delete G;
   G = nullptr;
   return 0;
}