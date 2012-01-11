/* Vertex struct */
typedef struct cgl_vertex {
	char* label;
} vertex;

/* Edge struct */
typedef struct cgl_edge {
	vertex* u, v;
	signed int weight;
} edge;

/* Graph struct */
typedef struct cgl_graph {
	edge* min_heap;
	int size;
	int heap_size;
	int directed;
} graph;


/*  Heap declarations */
edge* heapify(edge* min_heap);
int regrow(edge* min_heap);
