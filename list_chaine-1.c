#include<stdio.h>
#include<stdlib.h>
/************************************************/
typedef enum
{
	false,
	true
}bool;
/************************************************/
typedef struct ListElement
{
	int value;
	struct ListElement *next;
}ListElement, *List;
/************************************************/
List new_list()
{
	return NULL;
}
/************************************************/
bool is_empty_list(List li)
{
	if(li==NULL)
		return true;
    return false;
}
/************************************************/
int length_list(List li)
{
	/*int i=0;
	if(!is_empty_list(li))
	while(li!=NULL)
	{
		i++;
		li=li->next;
	}
	return i;*/
	if(is_empty_list(li))
		return 0;
	return length_list(li->next)+1;
}
/************************************************/
List ajout_derriere(List li,int valeur)
{
	ListElement *tmp,*element;
	tmp=malloc(sizeof(tmp));
	if(tmp==NULL)
		{
			fprintf(stderr,"Erreur d'allocation .....\n");
			exit(EXIT_FAILURE);
		}
	element=malloc(sizeof(element));
	if(element==NULL)
		{
			fprintf(stderr,"Erreur d'allocation .....\n");
			exit(EXIT_FAILURE);
		}
	if(is_empty_list(li))
		{
			element->value=valeur;
			element->next=NULL;
			return element;
		}
	element->value=valeur;
	element->next=NULL;
	tmp=li;
	while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
	tmp->next=element;
	return li;
}
List create_new_list(List li,int n)
{
	int i,element;
	for(i=1;i<=n;i++)
	{
		printf("Entrez l'element %d :\t ",i);
		scanf("%d",&element);
		li=ajout_derriere(li,element);
	}
	return li;
}
/************************************************/
void print_list(List li)
{
	int i;
	ListElement *tmp;
	tmp=malloc(sizeof(ListElement));
	if(tmp==NULL)
	{
		fprintf(stderr,"Erreur d'allocation .....\n");
		exit(EXIT_FAILURE);
	}
	if(is_empty_list(li))
	{
		printf("Rien a afficher ...!!!\n\n");
		return;
	}
	printf("\n~~~~~~~~~AFFICHAGE DE LA LISTE~~~~~~~~~\n");
	printf("%d,\t",li->value);
	tmp=li->next;
	while(tmp!=NULL)
	{
		printf("%d,\t",tmp->value);
		tmp=tmp->next;
	}
	free(tmp);
}
/************************************************/
int main(void)
{
	List mylist=new_list();
	int n;
	printf("Entrez le nombre d'element a enregistrer :\t ");
	scanf("%d",&n);
	mylist=create_new_list(mylist,n);
	printf("\n\nLongueur : %d\n\n",length_list(mylist));
	print_list(mylist);
	free(mylist);
	return 0;
}
