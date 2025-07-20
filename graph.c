#include "grah.h"
Graph new_graph(int vertices,Bool is_oriented)
{
 int i;
 GraphElement *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique ! \n");
   exit(EXIT_FAILURE);
  }

 element->is_oriented=is_oriented;
 element->nb_vertices=vertices;
 element->tab_neighbours=malloc(vertices*sizeof(AdjencyListElement));
 if(element->tab_neighbours == NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique ! \n");
   exit(EXIT_FAILURE);
  }
 for(i=1;i<element->nb_vertices+1;i++)
   element->tab_neighbours[i-1].begin=NULL;
   
 return element;
}
Bool is_empty_graph(Graph gr)
{
 if(gr==NULL)
   return true;
 return false;
}
NodeList add_node(int x)
{
	NodeList n=malloc(sizeof(NodeList));
	if(n==NULL)
           {
            fprintf(stderr," ERREUR !!! Probleme creation de noeud ! \n");
            exit(EXIT_FAILURE);
           }
       n->value=x;    
       n->next=NULL;    
       
       return n;    
}
void clear_graph(Graph gr)
{
	if(is_empty_graph(gr))
	 {
	  printf("Rien a effacer ! Le graphe est vide .\n");
	  return;
	 }
	
}
void add_edge(Graph gr,int src,int dest)
{

 NodeList n=add_node(dest);
 n->next=gr->tab_neighbours[src-1].begin;
 gr->tab_neighbours[src-1].begin= n;
 if(!gr->is_oriented)
  {
   n=add_node(src);
   n->next=gr->tab_neighbours[dest-1].begin;
   gr->tab_neighbours[dest-1].begin= n;
  }


}
