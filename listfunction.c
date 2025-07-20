#include "listheader.h"
Dlist new_Dlist()//nouvelle liste doublement chainee
{
 return NULL;
}
bool is_empty_Dlist(Dlist li)//Fonction de verification de la contenance de liste doublement chainee
{
 if(li==NULL)
     return true;
 return false;
}
int Dlist_length(Dlist li)//taille de la liste 
{
 if(is_empty_Dlist(li))
   return 0;
 return li->length;
}
int Dlist_first(Dlist li)//premier element de la liste 
{
 if(is_empty_Dlist(li))
  exit(0);
 return li->begin->value;
}
int Dlist_last(Dlist li)//dernier element de la liste
{
  if(is_empty_Dlist(li))
  exit(0);
 return li->end->value;
}
void print_Dlist(Dlist li)//fonction d'affichage de la liste doublement chainee
{
  DlistNode *temp;
  if(is_empty_Dlist(li))
  {
   printf("Rien a afficher ! La liste est vide ! \n");   
   return;
  }
 temp=malloc(sizeof(*temp));
 if(temp==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique\n");
   exit(0);
  }
 temp=li->begin;
 while(temp!=NULL)
  {
   printf("[%d]\n",temp->value);
   temp=temp->next;
  }
}
Dlist push_back_Dlist(Dlist li,int x)//fonction d'ajout d'un element par l'arriere de la liste doublement chainee
{
 DlistNode *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
  element->value=x;
  element->back=NULL;
  element->next=NULL;
  if(is_empty_Dlist(li))
   {
    li=malloc(sizeof(*li));
    if(li==NULL)
    {
     fprintf(stderr,"Erreur allocation dynamique \n");
     exit(0);
    }
    li->length=0; 
    li->begin=element;
    li->end=element;  
   
   }
   else
    {
      element->back=li->end;
      li->end->next=element;
      li->end=element;   
    }
  element=NULL;
  li->length++;
  return li;
}
Dlist push_front_Dlist(Dlist li,int x)//fonction d'ajout d'un element par devant la liste doublement chainee 
{
 DlistNode *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique\n");
   exit(0);
  }
 element->value=x;
 element->back=NULL;
 element->next=NULL;
 if(is_empty_Dlist(li))
  {
   li=malloc(sizeof(*li));
   if(li==NULL)
    {
     fprintf(stderr,"Erreur allocation dynamique\n");
     exit(0);
    }
    li->length=0;
    li->begin=element;
    li->end=element;
  }
  else
   {
    li->begin->back=element;
    element->next=li->begin;
    li->begin=element;
   }
   li->length++;
   return li;
}
Dlist pop_back_Dlist(Dlist li)//fonction de suppression depuis l'arriere de la liste doublement chainee
{
 DlistNode *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
  if(is_empty_Dlist(li))
   {
    printf("Rien a supprime ,La liste est vide \n");
    return new_Dlist();
   }
  if(li->begin == li->end)
   {
    free(li);
    li=NULL;
    return new_Dlist();
   }
  element=li->end;
  li->end=li->end->back;
  li->end->next=NULL;
  element->back=NULL;
  element->next=NULL;
  free(element);
  element=NULL;
  li->length--;
 return li;
}
Dlist pop_front_Dlist(Dlist li)//fonction qui supprime un element du devant de la liste doublement chainee
{
 DlistNode *element;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
  if(is_empty_Dlist(li))
   {
    printf("Rien a supprime ,La liste est vide \n");
    return new_Dlist();
   }
  if(li->begin == li->end)
   {
    free(li);
    li=NULL;
    return new_Dlist();
   }
  element=li->begin;
  li->begin = li->begin->next;
  li->begin->back = NULL;
  element->back=NULL;
  element->next=NULL;
  free(element);
  element=NULL;
  li->length--;
 return li;
}
Dlist clear_Dlist(Dlist li)//Fonction qui supprime toute la liste doublement chainee 
{
 if(is_empty_Dlist(li))
  {
   printf("Rien a supprime , la liste est vide !\n");
   return new_Dlist();
  }
  while(!is_empty_Dlist(li))
   {
    li=pop_back_Dlist(li);
   }
 return li;
}
Dlist insert_at_position(Dlist li,int x,int position)//insertion d'un element a une position donnee dans la liste
{
 int i=0;
 DlistNode *temp1,*element;
 element=malloc(sizeof(*element));
 temp1=malloc(sizeof(*temp1));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 if(temp1==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 if(position==1)
   {
    return push_front_Dlist(li,x);
   }
 if(position==(li->length))
   {
    return push_back_Dlist(li,x);
   }
 else{
 element->value=x;
 element->back=NULL;
 element->next=NULL;
 if(is_empty_Dlist(li))
  {
   li=malloc(sizeof(*li));
   if(li==NULL)
    {
     fprintf(stderr,"Erreur allocation dynamique \n");
     exit(0);
    }
   li->length=0;
   li->begin=element;
   li->end=element;
  }
 else
 {
  temp1=li->begin;
  do
   {
    i++;
    temp1=temp1->next;
   }while(i!=position);
   temp1=temp1->back;
   element->next=temp1;
   element->back=temp1->back;
   li->end=element->back;
   li->end->next=element;
   element=NULL;
   temp1=NULL;
  }
 }
 printf("");
 li->length++;
 return li;
}
Dlist remove_at_position(Dlist li,int position)
{
 int i=0;
 DlistNode *element,*temp1;
 element=malloc(sizeof(*element));
 temp1=malloc(sizeof(*temp1));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 if(temp1==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 if(is_empty_Dlist(li))
  {
   printf("Rien a supprimer . La liste doublement chainee est vide \n");
   return new_Dlist(li);
  }
 else if(position==1)
  {
   return pop_front_Dlist(li);
  }
 else if(position==(li->length))
  {
   return pop_back_Dlist(li);
  }
 else{
 temp1=li->begin;
  do
   {
    i++;
    temp1=temp1->next;
   }while(i!=position);
   element=temp1;
   temp1=temp1->back;
   li->end=temp1->back;
   li->end->next=element;
   element=NULL;
   temp1=NULL;
  }
 li->length--;
 return li;
}
