#include "graph.h"

void add_edge(graph* curr_graph, edge* new_edge) {
	curr_graph->size++;
	if (curr_graph->size - curr_graph->heap_size) {
		regrow(curr_graph); // Add some error checking
	}
	curr_graph->min_heap[size-1] = new_edge;
	heapify(min_heap, size-1);
}

edge* heapify(edge* min_heap, int max_index) {
	while (heap_not_valid(min_heap, max_index)) {
	
	}
	return min_heap;
}

int heap_not_valid(edge* min_heap, int index) {
	int ret_val = 0;
	if (min_heap[(index-1)/2] > min_heap[index]) {
		edge_swap(min_heap[(index-1)/2], min_heap[index]);
		ret_val++;
	} return ret_val + heap_not_valid(min_heap, index-1);
}

void edge_swap(edge* a, edge* b) {
	edge c = *a;
	*a = *b;
	*b =c;
}

int regrow(graph* curr_graph) { // 
	curr_graph->heap_size = curr_graph->heap_size < 1;
	edge* temp = curr_graph->min_heap;
	curr_graph->min_heap = (edge*)malloc(sizeof(edge*)* curr_graph->heap_size);
	if (!&curr_graph->min_heap) return 0;
	memcpy(curr_graph->min_heap, temp, curr_graph->size);
	return 1;
}

int main() {


	return 0;
}
