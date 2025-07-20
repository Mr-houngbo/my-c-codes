//main
#include "stack.c"
int main()
{
 stack pile=new_stack();
 print_stack(pile);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 pile=insert_stack(pile,10);
 pile=insert_stack(pile,20);
 pile=insert_stack(pile,30);
 pile=insert_stack(pile,40);
 pile=insert_stack(pile,50);
 print_stack(pile);
 printf("Le sommet de la pile est : %d\n",top_stack(pile));
 printf("La hauteur de la pile est : %d\n",length_stack(pile));
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 pile=remove_stack(pile);
 print_stack(pile);
 printf("Le sommet de la pile est : %d\n",top_stack(pile));
 printf("La hauteur de la pile est : %d\n",length_stack(pile));
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 pile=clear_stack(pile);
 print_stack(pile);
 printf("Le sommet de la pile est : %d\n",top_stack(pile));
 printf("La hauteur de la pile est : %d\n",length_stack(pile));
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 pile=clear_stack(pile);
  return 0;
}
