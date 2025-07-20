#ifndef __GRAPH__
#define __GRAPH__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef enum
{
 false,true;
}Bool;
/*Definintion du sommet  */
typedef struct NodeListElement
{
 int value;
 struct NodeListElement *next;
}NodeListElement,*NodeList;
/*Definition d'une liste d'adjacence  */
typedef struct AdjencyListElement
{
 NodeListElement *begin;
}AdjencyListElement,*AdjencyList;

/*Defintion d'un Graphe */
typedef struct GraphElement
{
 Bool is_oriented;
 int nb_vertices;
 AdjencyList tab_neighbours;
}GraphElement,*Graph;
Graph new_graph(int vertices,Bool is_oriented);
Bool is_empty_graph(Graph gr);
NodeList add_node(int x);
void add_edge(Graph gr,int src,int dest);
void clear_graph(Graph gr);












#endif
