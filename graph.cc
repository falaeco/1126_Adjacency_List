#include "graph.h"

graph::graph(int n) {
    num_vertices = n;
    for (int i = 0; i < n; i++) {
        linked_list* list = new linked_list();
        vertices_list.push_back(list);
    }
}

graph::~graph() {
    linked_list* deleted_list = nullptr;
    for (int i = 0; i < num_vertices; i++) {
        deleted_list = vertices_list[i];

        delete deleted_list;
    }
    num_vertices = 0;
    deleted_list = nullptr;
}