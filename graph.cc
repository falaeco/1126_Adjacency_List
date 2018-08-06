#include "graph.h"

// Constructor
// returns a graph object having n vertices and no edges
graph::graph(int n) {
    this->num_vertices = n;
    this->num_edges = 0;
    for (int i = 0; i < n; i++) {
        linked_list* list = new linked_list();
        this->vertices_list.push_back(list);
    }
}

// Destructor
// frees all dynamic memory associated with graph object
graph::~graph() {
    linked_list* deleted_list = nullptr;
    for (int i = 0; i < num_vertices; i++) {
        deleted_list = this->vertices_list[i];

        delete deleted_list;
    }
    this->num_vertices = 0;
    this->num_edges = 0;
    deleted_list = nullptr;
}

// size of a graph = number of edges
int graph::get_order() {
    return this->num_edges;
}

// order of a graph = number of vertices
int graph::get_size() {
    return this->num_vertices; 
}

bool graph::is_empty() {
    return (this->get_order() == 0 ? true : false);
}

// inserts a new edge joining u to v, 
// i.e. u is added to the adjacency List of v, 
// and v to the adjacency List of u
void graph::add_edge(int u, int v) {
    // adjacency list of u is empty
    this->vertices_list[u]->append(v);
    // adjacenecy list of v is empty
    this->vertices_list[v]->append(u);
    // increment order
    this->num_edges++;
    return;
}

// removes an edge
void graph::remove_edge(int u, int v) {
    // Return if graph is empty
    if (this->vertices_list.empty()) return;
    // Remove specified edge
    this->vertices_list[u]->remove(v);
    this->vertices_list[v]->remove(u);

    this->num_edges--;
    return;
}

void graph::print_graph() {
    // Case 1: Graph is empty
    if (this->is_empty()) {
        std::cout << "Graph is empty.\n";
        return;
    }

    // Case 2: Graph is not empty
    for (int i = 0; i < this->vertices_list.size(); i++) {
        if (!this->vertices_list[i]->is_empty()) {
            this->vertices_list[i]->print_list();
        }
    }
    return;
}