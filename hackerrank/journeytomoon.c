#include <stdio.h>
#include <stdlib.h>

struct edge{
	long src,dest;
};

typedef struct edge edge:

struct graph{
	long v,e;
	edge* edgelist;	
}

typedef struct graph graph;

graph* createGraph(long v,long e){
	graph* g=(graph*)malloc(sizeof(graph));
	g->v=v;
	g->e=e;
	g->edgelist=(edge*)malloc(sizeof(edge)*e);
	return g;	
}


