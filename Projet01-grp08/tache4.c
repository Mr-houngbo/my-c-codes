#include "tache4.h"



int main(int argc, char const *argv[])
{
	int i,j,k,n,data,tmp;
	Dlist *list0=new_Dlist(),*list1=new_Dlist(),*list=new_Dlist();
	printf("\nProposition de solutions utilisant les listes doublement chainee \n\n");

	/***************************************************************************************************/
	printf("\n\tFonction get \n\n");
	printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list=create_tab(list,n);
	printf("Entrez la position de la donnee a supprimer dans votre Ensemble A\n");
	scanf("%d",&k);
	printf("\nSuppression en cours...\n");
  j=get(list,k);
  printf("\nL'ancien element qui etait a la position %d est : %d\n",k,j);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction add \n\n");
	printf("Entrez l'element a ajouter et sa position \n");
	scanf("%d%d",&j,&k);
	printf("Ajout en cours...\n");
  //list=add(list,j,k);
  list=dlist_insert(list,j,k);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction set \n\n");
	printf("Entrez l'element a remplacer et sa position \n");
	scanf("%d%d",&j,&k);
	printf("Remplacage en cours...\n");
  tmp=set(list,j,k);
  printf("L'ancien element qui etait a la position %d est : %d\n",k,tmp);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction Remove \n\n");
	printf("Entrez la position de la donnee a supprimer dans votre Ensemble \n");
	scanf("%d",&k);
	printf("\nRemoving proccess...\n");
  j=remmove(list,k);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction Union \n\n");
	list0=new_Dlist();
  list1=new_Dlist();
  list=new_Dlist();
	printf("Vous voulez faire la reunion de deux ensembles , entrez les donc !\n");
	printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list0=create_tab(list0,n);
	printf("Entrez la taille de votre Ensemble B \n");
	scanf("%d",&n);
	list1=create_tab(list1,n);
	printf("\n A U B en cours...\n");
  list=unionn(list0,list1,list);
  printf("\nResultat : \tA U B = ");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction Difference \n\n");
	list0=new_Dlist();
  list1=new_Dlist();
  list=new_Dlist();
	printf("Vous voulez faire la difference de deux ensembles , entrez les donc !\n");
	printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list0=create_tab(list0,n);
	printf("Entrez la taille de votre Ensemble B \n");
	scanf("%d",&n);
	list1=create_tab(list1,n);
	printf("\n A \\ B en cours...\n");
  list=diff(list0,list1,list);
  printf("\nResultat : \tA \\ B = ");
  print_Dlist(list);
 
/***************************************************************************************************/
	printf("\n\tFonction size \n\n");
	list=new_Dlist();
  printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list=create_tab(list,n);
	printf("\n\tLe nombre reel d'elements de votre ensemble  A est : %d ",size(list));
 	printf("\n\n");
 
/***************************************************************************************************/
	printf("\n\tFonction isEmpty \n\n");
	
	if (is_empty_Dlist(list))
	{
		printf("l'ensemble A est vide  ");
		printf("\n\n");
	}
	else
		{
			printf("l'ensemble A est non vide ");
			printf("\n\n");
		}
 
/***************************************************************************************************/
	printf("\n\tFonction getFirst \n\n");
	printf("\n\tLe premier element de votre ensemble A est : %d ",getFirst(list));
	printf("\n\n");
 
/***************************************************************************************************/
	printf("\n\tFonction getLast \n\n");
	printf("\n\tLe dernier element de votre ensemble A est : %d ",getLast(list));
	printf("\n\n");
 
/***************************************************************************************************/
	printf("\n\tFonctions Bonus \n\n");
	list=new_Dlist();
	printf("Entrez la taille de votre Ensemble A \n");
	scanf("%d",&n);
	list=create_tab(list,n);
 	printf("\n\n");
 
	/***************************************************************************************************/
	printf("\n\tFonction addLast \n\n");
	printf("Entrez l'element a ajouter a la derniere position \n");
	scanf("%d",&j);
	printf("Ajout en cours...\n");
  list=addLast_Dlist(list,j);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
 	printf("\n\n");
 	
	/***************************************************************************************************/
	printf("\n\tFonction addFirst \n\n");
	printf("Entrez l'element a ajouter a la premiere position \n");
	scanf("%d",&j);
	printf("Ajout en cours...\n");
  list=addFirst_Dlist(list,j);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
  printf("\n\n");
 
	/***************************************************************************************************/
	printf("\n\tFonction removeLast \n\n");
	printf("Suppression de l'element qui se trouve a la derniere position  en cours...\n");
  list=removeLast_Dlist(list);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
  printf("\n\n");
 
	/***************************************************************************************************/
	printf("\n\tFonction removeFirst \n\n");
	printf("Suppression de l'element qui se trouve a la premiere position  en cours...\n");
  list=removeFirst_Dlist(list);
  printf("\nAffichage des elements de votre Ensemble \n");
  print_Dlist(list);
  printf("\n\n");
 
/***************************************************************************************************/

	list0=clear_Dlist(list0);
	list1=clear_Dlist(list1);
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
		li=addLast_Dlist(li,tmp);
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
	  	 {
	  		pos_value=tmp->value;
	  	  break;
	  	 }

	  }while(tmp!=NULL);
	 li=remove_at_position(li,pos);
	 return pos_value;
}
/***************************************************************************************************/
/*
Dlist *add(Dlist *li,int x,int position)
{
 int i=0;
 Dlist *liste=new_Dlist();
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
    return addFirst_Dlist(li,x);
   }
 if(position==(li->length))
   {
    temp1=li->end;
    li->end=li->end->back;
    li=addLast_Dlist(li,x);
 		li=addLast_Dlist(li,temp1->value);
 		
    return li;
   }
 if(position==(li->length+1))
   {
    return addLast_Dlist(li,x);
   }
 else
 {
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
 
 
 
 		temp1=li->end;
    li->end=li->end->back;
    li=addLast_Dlist(li,x);
 		li=addLast_Dlist(li,temp1->value);
 
 
 
 
  liste=li;
  //temp1=liste->begin;
  i=1;
  while(i!=position)
   {
    liste->begin=liste->begin->next;
    i++;
   }
   liste->begin=liste->begin->back;
   //element->next=temp1->next;
   liste=addLast_Dlist(liste,x);
   
   //temp1->next=element;
  // element->back=temp1->back->back;
   li->end=element->back;
   li->end->next=element;
   
  }
 }
 printf(" ");
 li->length++;
 return li;
}

*/

/***************************************************************************************************/
Dlist *dlist_insert(Dlist *p_list, int data, int position)
{
	int i = 1;
    if (p_list != NULL)
    {
        DlistNode *p_temp = p_list->begin,*p_new = malloc(sizeof(*p_new)),*temp1=malloc(sizeof(*temp1));
				if(temp1==NULL)
					{
					 fprintf(stderr,"Erreur allocation dynamique \n");
					 exit(0);
					}
        
        if(position==1)
					 {
						return addFirst_Dlist(p_list,data);
					 }
				if(position==(p_list->length))
				 {
					temp1=p_list->end;
					p_list->end=p_list->end->back;
					p_list=addLast_Dlist(p_list,data);
			 		p_list=addLast_Dlist(p_list,temp1->value);
			 		
					return p_list;
				 }
			 if(position==(p_list->length+1))
				 {
					return addLast_Dlist(p_list,data);
				 }
        while (p_temp != NULL && i <= position)
        {
            if (position == i)
            {
                if (p_temp->next == NULL)
                {
                    p_list=addLast_Dlist(p_list, data);
                }
                else if (p_temp->back == NULL)
                {
                    p_list = addFirst_Dlist(p_list, data);
                }
                else
                {
                    if (p_new != NULL)
                    {
                        p_new->value = data;
                        p_temp->next->back = p_new;
                        p_temp->back->next = p_new;
                        p_new->back = p_temp->back;
                        p_new->next = p_temp;
                        p_list->length++;
                    }
                }
            }
            else
            {
                p_temp = p_temp->next;
            }
            i++;
        }
    }
    return p_list;
}
/***************************************************************************************************/
int set(Dlist *li,int elem,int pos)
{
	int res;
	res=get(li,pos);
	li=dlist_insert(li,elem,pos);
	//li=add(li,elem,pos);
	return res;
}
/***************************************************************************************************/
int remmove(Dlist *li,int pos)
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
   printf("Rien a afficher ! Laliste est vide ! \n");   
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
    printf("Rien a supprime ,Laliste est vide \n");
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
Dlist *unionn(Dlist *A,Dlist *B,Dlist *C)
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
  tmp=B->begin;
  while(tmp!=NULL)
  {
   C=addFirst_Dlist(C,tmp->value);
   tmp=tmp->next;
  }
  
  return C;
}
/***************************************************************************************************/
Dlist *diff(Dlist *A,Dlist *B,Dlist *C)
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
			 	if((element->value)==(tmp->value))
			 	{
			 		i++;
			 	}
			 	tmp=tmp->next;
			}
			if(i==0)
			 		C=addFirst_Dlist(C,element->value);
			i=0;
	   element=element->next;
   }
   return C;
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
    printf("Rien a supprime ,Laliste est vide \n");
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
   printf("Rien a supprime , laliste est vide !\n");
   return new_Dlist();
  }
  while(!is_empty_Dlist(li))
   {
    li=removeLast_Dlist(li);
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
   printf("Rien a supprimer . Laliste doublement chainee est vide \n");
   return new_Dlist(li);
  }
 if(position > (li->length))
  {
   printf("Position superieure a la taille \n");
   fprintf(stderr, "Arret du programme! \n");
   exit(0);
  }
 else if(position==1)
  {
   return removeFirst_Dlist(li);
  }
 else if(position==(li->length))
  {
   return removeLast_Dlist(li);
  }
 else
 {
 i=0;
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
  }
  element=NULL;
   temp1=NULL;
  
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
