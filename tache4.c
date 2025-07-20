#include "tache4.h"



int main(int argc, char const *argv[])
{
	int i,j,k,n;
	Dlist *list=new_Dlist();
	printf("\nProposition de solutions utilisant les listes doublement chainee \n\n");
	printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list=create_tab(list,n);
	print_Dlist(list);
	printf("\n\t Fonction get \n\n");




	list=clear_Dlist(list);
	return 0;
}
/*                                           FONCTIONS                                         */
Dlist *new_Dlist()
{
 return NULL;
}
/***************************************************************************************************/
Dlist *create_tab(Dlist *li,int n)
{
	int i,tmp;
	printf("Entrez les donnees de votre Ensemble  \n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&tmp);
		li=push_back_Dlist(li,tmp);
	}
	return li;
}
/***************************************************************************************************/
int get(Dlist *li,int pos)
{
	DlistNode *tmp;
	int i=1,pos_value;
	tmp=malloc(sizeof(*tmp));
	if(tmp==NULL)
	  {
	   fprintf(stderr,"Erreur allocation dynamique \n");
	   exit(0);
	  }
	 tmp=li->begin;
	 do
	  {
	  	if(i!=pos)
	  	{
	  		tmp=tmp->next;
	  		i++;
	  	}
	  	else
	  		pos_value=tmp->value;

	  }while(tmp!=NULL);
	 li=remove_at_position(li,pos);
	 li->length--;
	 return pos_value;
}
/***************************************************************************************************/
Dlist *add(Dlist *li,int x,int position)
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
 printf(" ");
 li->length++;
 return li;
}
/***************************************************************************************************/
int set(Dlist *li,int elem,int pos)
{
	int res;
	res=get(li,pos);
	li=add(li,elem,pos);
	return res;
}
/***************************************************************************************************/
int remove(Dlist *li,int pos)
{
	int a=get(li,pos);
	li->length--;
	return 0;
}
/***************************************************************************************************/
int getFirst(Dlist *li)
{
 if(is_empty_Dlist(li))
  exit(0);
 return li->begin->value;
}
/***************************************************************************************************/
int getLast(Dlist *li)
{
  if(is_empty_Dlist(li))
   exit(0);
 return li->end->value;
}
/***************************************************************************************************/
void print_Dlist(Dlist *li)
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
   printf("[%d]->",temp->value);
   temp=temp->next;
  }
 printf("NULL\n");
}
/***************************************************************************************************/
Dlist *addLast_Dlist(Dlist *li,int x)
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
/***************************************************************************************************/
Dlist *addFirst_Dlist(Dlist *li,int x)
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
/***************************************************************************************************/
Dlist *removeLast_Dlist(Dlist *li)
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
/***************************************************************************************************/
void unionn(Dlist *A,Dlist *B,Dlist *C)
{
 DlistNode *element,*tmp;
 int i,j;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 tmp=malloc(sizeof(*tmp));
 if(tmp==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
  element=A->begin;
  while(element!=NULL)
  {
   C=addFirst_Dlist(C,element->value);
   element=element->next;
  }
  element=B->begin;
  while(element!=NULL)
  {
   C=addFirst_Dlist(C,element->value);
   element=element->next;
  }

  element=C->begin;
  i=j=0;
  while(element!=NULL)
   {
   	 tmp=C->begin->next;
	 while(tmp!=NULL)
	  {
	   	if ((element->value)==(tmp->value))
	   	{
	   		C=remove_at_position(C,j);
	   	}
	   	tmp=tmp->next;
	  	j++;
	  }
	  element=element->next;
	  i++;
	  j=i;
   }
  
}
/***************************************************************************************************/
void diff(Dlist *A,Dlist *B,Dlist *C)
{
 DlistNode *element,*tmp;
 int i,j;
 element=malloc(sizeof(*element));
 if(element==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
 tmp=malloc(sizeof(*tmp));
 if(tmp==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique \n");
   exit(0);
  }
  element=A->begin;
  i=j=0;
  while(element!=NULL)
   {
   	 tmp=B->begin;
	 while(tmp!=NULL)
	  {
	   	if ((element->value)!=(tmp->value))
	   	{
	   		C=remove_at_position(C,j);
	   	}
	   	tmp=tmp->next;
	  	j++;
	  }
	  element=element->next;
	  i++;
	  j=i;
   }
}
/***************************************************************************************************/
Dlist *removeFirst_Dlist(Dlist *li)
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
/***************************************************************************************************/
Dlist *clear_Dlist(Dlist *li)
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
/***************************************************************************************************/
Dlist *remove_at_position(Dlist *li,int position)
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
/***************************************************************************************************/
bool is_empty_Dlist(Dlist *li)
{
 if(li==NULL)
     return true;
 return false;
}
/***************************************************************************************************/
int size(Dlist *li) 
{
 if(is_empty_Dlist(li))
   return 0;
 return li->length;
}
/***************************************************************************************************/