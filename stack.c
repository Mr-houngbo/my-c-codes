//fonctions de la pile
#include "stack.h"
stack new_stack()
{
 return NULL;
}
bool is_empty_stack(stack pil)
{
 if(pil==NULL)
    return true;
 else
    return false;
}
stack insert_stack(stack pil,int x)
{
 stackElement *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur de creation de la nouvelle pile __ Allocation dynamique__\n");
   exit(EXIT_FAILURE);
  }
 element->value=x;
 element->next=pil;
 return element;
}
stack clear_stack(stack pil)
{
  stackElement *element;
  if(is_empty_stack(pil))
     return new_stack();
  element=pil->next;
  free(pil);
  return clear_stack(element);
}
void print_stack(stack pil)
{
 if(is_empty_stack(pil))
   printf("Rien a afficher .La pile est vide !\n");
 else
  {
   printf("~~~Affichage de la pile ~~~\n");
   while(!is_empty_stack(pil))
    {
     printf("[%d]\n",pil->value);
     pil=pil->next;
    }
  }
}
stack remove_stack(stack pil)
{
 stackElement *element;
 if(is_empty_stack(pil))
    return new_stack();
 element=pil->next;
 free(pil);
 return element;
}
int top_stack(stack pil)
{
 if(is_empty_stack(pil))
  {
   printf("Aucun sommet , la pile est vide \n");
   return -1;
  }
  return pil->value;
}
int length_stack(stack pil)
{
int i=0;
 if(is_empty_stack(pil))
  {
   printf("Aucune longueur ,la pile est vide \n");
   return 0;  
  }
 while(!is_empty_stack(pil))
  {
   pil=pil->next;
   i++;
  }
 return i;
}
