#include "tree.c"
int main(int argc,char **argv)
{
 tree *arbre=join_tree(join_tree(join_tree(new_tree(7),NULL,72),new_tree(44),6),join_tree(new_tree(62),new_tree(15),54),42),*arb;
 print_tree(arbre);
 arbre=tri_tree(arbre);
 if(complet_tree(arbre))
  printf("L'arbre est complet ! \n");
 else
  printf("L'arbre n'est pas complet !\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 arbre=generate_complete_tree(5,4);
 print_tree(arbre);
 printf("Le nombre d'elements de l'arbre est %d \n La hauteur de l'arbre est %d\n",count_tree_node(arbre),height_tree(arbre));
 arb=arbre;
 if(arb=NULL)
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 if(complet_tree(arb))
  printf("L'arbre est complet ! \n");
 else
  printf("L'arbre n'est pas complet !\n");
 clear_tree(arbre);










 return 0;
}
