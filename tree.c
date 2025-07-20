#include "tree.h"
tree *new_tree(int x)
{
 tree *arbre;
 arbre=malloc(sizeof(*arbre));
 if(arbre==NULL)
  {
   fprintf(stderr,"Erreur creation nouvelle arbre !\n");
   exit(EXIT_FAILURE);
  }
 arbre->value=x;
 arbre->tleft=NULL;
 arbre->tright=NULL;
 arbre->parent=NULL;
 printf("Creation de %d\n",x);
 return arbre;
}
void clear_tree(tree *tr)
{
 if(tr==NULL)
  {
   free(tr);
   return;
  }
 printf("Suppression de %d \n",tr->value);
 clear_tree(tr->tleft);
 clear_tree(tr->tright);
 
 free(tr);
}
tree *join_tree(tree *left,tree *right,int node)
{
 tree *arbre=new_tree(node);
 arbre->tleft=left;
 arbre->tright=right;
 arbre->parent=NULL;
 if(left!=NULL)
   left->parent=arbre;
 if(right!=NULL)
   right->parent=arbre;

 return arbre;
}
void print_tree(tree *tr)//affichage de l'arbre binaire
{
 
 if(tr==NULL)
  {
   printf("Rien a afficher ! L'arbre est vide \n");
   return;
  }
 if(tr->parent!=NULL)
   printf("[%d]->[%d]\n",tr->parent->value,tr->value);
 else
   printf("[%d]\n",tr->value);
 if(tr->tleft!=NULL)
  print_tree(tr->tleft);
 if(tr->tright!=NULL)
  print_tree(tr->tright);
}
int count_tree_node(tree *tr)//nbre de noeuds de l'arbre
{
 if(tr==NULL)
  return 0;
 return(count_tree_node(tr->tleft)+count_tree_node(tr->tright)+1);
}
int height_tree(tree *tr)//hauteur de l'arbre
{
 return count_tree_node(tr)/2;
}
tree *tri_tree(tree *tr)
{
 tree *arbre=malloc(sizeof(*arbre));
 if(arbre==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
 
 if(tr->tleft!=NULL)
  {
   if(tr->tleft->value > tr->value)
    {
     arbre->value=tr->value;
     tr->value=tr->tleft->value;
     tr->tleft->value=arbre->value;
    }
  }
 if(tr->tright!=NULL)
  {
   if(tr->tright->value < tr->value)
    {
     arbre->value=tr->value;
     tr->value=tr->tright->value;
     tr->tright->value=arbre->value;
    }
  }
 if(tr->parent!=NULL)
  {
   if(tr->parent->tleft == tr)
     {
      if(tr->value > tr->parent->value)
        {
         arbre->value=tr->parent->value;
         tr->parent->value=tr->value;
         tr->value=arbre->value;
        }
     }
   else if(tr->parent->tright == tr)
     {
      if(tr->value < tr->parent->value)
        {
         arbre->value=tr->parent->value;
         tr->parent->value=tr->value;
         tr->value=arbre->value;
        }
     }
  }
 if(tr->tleft!=NULL)
   tr->tleft=tri_tree(tr->tleft);
 if(tr->tright!=NULL)
   tr->tright=tri_tree(tr->tright);
 free(arbre);
 return tr;
}
Bool complet_tree(tree *tr)
{
 if(tr==NULL)
   {
    fprintf(stderr,"Erreur !!! Vous essayez de verifier si un arbre vide est complet . \n ARRET DU PROGRAMME \n");
    exit(EXIT_FAILURE);
   }
 if(tr->parent!=NULL)
  {
   if(tr->parent->tleft == tr)
     {
      if(tr->parent->tright == NULL)
        return false;
     }
   else if(tr->parent->tright == tr)
     {
      if(tr->parent->tleft == NULL)
        return false;
     }
  }
 else
  {
    if((tr->tleft == NULL)||(tr->tright == NULL))
       return false;
  }
 if(!complet_tree(tr->tleft))
   return false;
  if(!complet_tree(tr->tright))
   return false;
 return true;
}
tree *push_head_tree_left(tree *tr1,int x)//fonction d'ajout de l'arbre x au sommet de tr1 où tr1 devient la gauche
{
 if(tr1==NULL)
   {
    return new_tree(x);
   }
 else
   {
     return join_tree(tr1,NULL,x);
   }
}
tree *push_head_tree_right(tree *tr1,int x)//fonction d'ajout de l'arbre x au sommet de tr1 où tr1 devient la droite
{
 if(tr1==NULL)
   {
    return new_tree(x);
   }
 else
   {
     return join_tree(NULL,tr1,x);
   }
}
/*C'est une fonction qui genere un arbre complet de hauteur passe en parametre et dont les elements sont des multiples de ref_val  .Aussi ref_val constitue le sommet de l'arbre obtenu */
tree *generate_complete_tree(int height,int ref_val)
{
 tree *arb;
 int i=1;
 arb=new_tree(ref_val*3);
 while(height_tree(arb)<height)
  {
   arb=join_tree(arb,new_tree(ref_val*(i+1)),ref_val*i);
   i++;
  }
 return arb;
}
tree *best_tri_tree(tree *tr)
{









}
