#include "tache1.h"
/**************************************** Fonction principale (main)          ****************************************/

int main(int argc, char const *argv[])
{
	MonEnsemble A,B,C;
	int j,k,i,tmp;
	printf("\nImplementation des fonctions en supposant que les tableaux sont et restent tries \n\n");
/***************************************************************************************************/
	init(&A);
/***************************************************************************************************/
	printf("\n\tFonction get \n\n");
	printf("Entrez la taille de MonEnsemble\n");
	scanf("%d",&A.taille);
	printf("Entrez les donnees de  MonEnsemble\n");
	for(i=0;i<A.taille; ++i)
		scanf("%d",&A.tab[i]);
	printf("Entrez la position de la donnee a supprimer dans MonEnsemble\n");
	scanf("%d",&k);
	printf("\nSuppression en cours...\n");
    j=get(&A,k);
    printf("\nAffichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction add \n\n");
	printf("Entrez l'element a ajouter et sa position \n");
	scanf("%d%d",&j,&k);
	printf("Ajout en cours...\n");
    add(&A,j,k);
    printf("Affichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction set \n\n");
	printf("Entrez l'element a remplacer et sa position \n");
	scanf("%d%d",&j,&k);
	printf("Remplacage en cours...\n");
    tmp=set(&A,j,k);
    printf("L'ancien element qui etait a la position %d est : %d\n",k,tmp);
    printf("\nAffichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction Remove \n\n");
	printf("Entrez la position de la donnee a supprimer dans MonEnsemble\n");
	scanf("%d",&k);
	printf("\nRemoving proccess...\n");
    j=Remove(&A,k);
    printf("\nAffichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction Union \n\n");
	init(&A);
	init(&B);
	init(&C);
	printf("Vous voulez faire la reunion de deux ensembles , entrez les donc !\n");
	printf("Entrez la taille de l'ensemble A\n");
	scanf("%d",&A.taille);
	printf("Entrez les donnees de l'ensemble A \n");
	for(i=0;i<A.taille; ++i)
		scanf("%d",&A.tab[i]);
	printf("Entrez la taille de l'ensemble B\n");
	scanf("%d",&B.taille);
	printf("Entrez les donnees de l'ensemble B\n");
	for(i=0;i<B.taille; ++i)
		scanf("%d",&B.tab[i]);
	printf("\n A U B en cours...\n");
    unionn(&A,&B,&C);
    suppression(&C);
    printf("\nResultat : \tA U B = ");
    printf("[ ");
    for(i=0;i<C.taille; ++i)
		printf("%d ",C.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction Difference \n\n");
	init(&A);
	init(&B);
	init(&C);
	printf("Vous voulez faire la difference de deux ensembles , entrez les donc !\n");
	printf("Entrez la taille de l'ensemble A\n");
	scanf("%d",&A.taille);
	printf("Entrez les donnees de l'ensemble A \n");
	for(i=0;i<A.taille; ++i)
		scanf("%d",&A.tab[i]);
	printf("Entrez la taille de l'ensemble B\n");
	scanf("%d",&B.taille);
	printf("Entrez les donnees de l'ensemble B\n");
	for(i=0;i<B.taille; ++i)
		scanf("%d",&B.tab[i]);
	printf("\n A \\ B en cours...\n");
    diff(&A,&B,&C);
    printf("\nResultat : \tA \\ B = ");
    printf("[ ");
    for(i=0;i<C.taille; ++i)
		printf("%d ",C.tab[i]);
	printf("]");

/***************************************************************************************************/
	printf("\n\tFonction size \n\n");
	printf("\n\tLe nombre reel d'elements de votre ensemble  A est : %d ",size(&A));

/***************************************************************************************************/
	printf("\n\tFonction isEmpty \n\n");
	
	if (isEmpty(&A))
		printf("l'ensemble A est vide  ");
	else
		printf("l'ensemble A est non vide ");

/***************************************************************************************************/
	printf("\n\tFonction getFirst \n\n");
	printf("\n\tLe premier element de votre ensemble A est : %d ",getFirst(&A));

/***************************************************************************************************/
	printf("\n\tFonction getLast \n\n");
	printf("\n\tLe dernier element de votre ensemble A est : %d ",getLast(&A));

/***************************************************************************************************/
	init(&A);
	printf("\n\tFonctions Bonus \n\n");
	printf("Entrez la taille de MonEnsemble\n");
	scanf("%d",&A.taille);
	printf("Entrez les donnees de  MonEnsemble\n");
	for(i=0;i<A.taille; ++i)
		scanf("%d",&A.tab[i]);

	/***************************************************************************************************/
	printf("\n\tFonction addLast \n\n");
	printf("Entrez l'element a ajouter a la derniere position \n");
	scanf("%d",&j);
	printf("Ajout en cours...\n");
    addLast(&A,j);
    printf("Affichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

	/***************************************************************************************************/
	printf("\n\tFonction addFirst \n\n");
	printf("Entrez l'element a ajouter a la premiere position \n");
	scanf("%d",&j);
	printf("Ajout en cours...\n");
    addFirst(&A,j);
    printf("Affichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

	/***************************************************************************************************/
	printf("\n\tFonction removeLast \n\n");
	printf("Suppression de l'element qui se trouve a la derniere position  en cours...\n");
    removeLast(&A);
    printf("Affichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

	/***************************************************************************************************/
	printf("\n\tFonction removeFirst \n\n");
	printf("Suppression de l'element qui se trouve a la premiere position  en cours...\n");
    removeFirst(&A);
    printf("Affichage des elements de MonEnsemble\n");
    printf("[ ");
    for(i=0;i<A.taille; ++i)
		printf("%d ",A.tab[i]);
	printf("]");

/***************************************************************************************************/
	return 0;
}




/*************                           FONCTIONS _TACHE_2                             *******************/



/***************************** Fonction pour remettre toutes les cases a zero dans le tableau ******/
void init(MonEnsemble *A)
	{
		int i;
		for (i = 0; i <A->taille; ++i)
		{
			A->tab[i]=0;
		}
	}
/***************************************************************************************************/
int get( MonEnsemble *A , int pos )
{
	int retour=0;

	int i=0;
	retour=A->tab[pos-1];
	for ( i = pos-1; i <(A->taille) ; i++)
	{
		A->tab[i]=A->tab[i+1];
	}
	A->taille--;
	ordonnerTableau(A->tab,A->taille);
	
	return retour;
}
/***************************************************************************************************/
void add(MonEnsemble *A,int elem,int pos)
{
	int i,tmp;
	
	if (pos>A->taille)
	{
		A->tab[A->taille]=elem;
		A->taille++;
		ordonnerTableau(A->tab,A->taille);
		return;
	}
	else if (pos<A->taille)
	{
		if (A->tab[pos]!=0)
		{
			A->taille++;
			for (i=A->taille;i>=pos;i--)
			{
				A->tab[i]=A->tab[i-1];
			}
			A->tab[pos-1]=elem;
			ordonnerTableau(A->tab,A->taille);
		}
		else
		{
			A->tab[pos]=elem;
			A->taille++;
			ordonnerTableau(A->tab,A->taille);
			return;
		}
	}
	else
	{
		tmp=A->tab[(A->taille)-1];
		A->taille++;
		A->tab[(A->taille)-1]=tmp;
		A->tab[pos-1]=elem;
		ordonnerTableau(A->tab,A->taille);
		return;
	}
}
/***************************************************************************************************/
int set(MonEnsemble *A,int elem,int pos)
{
  int i,tmp;
  tmp=A->tab[pos-1];
  A->tab[pos-1]=elem;
ordonnerTableau(A->tab,A->taille);
 return tmp;
}
/***************************************************************************************************/
int Remove(MonEnsemble *A, int pos)
{
	int i=0;
	i=pos-1;
	while(i<(A->taille))
		{
			A->tab[i]=A->tab[i+1];
			i++;
		}
	A->taille--;
	ordonnerTableau(A->tab,A->taille);
  return 0;
}
/***************************************************************************************************/
void suppression(MonEnsemble *t)
	{
		int i=0,j=0,tmp=0;
		for(i=0;i<t->taille;i++)
		{
		  for(j=i+1;j<t->taille;j++)
		  {
		     if(t->tab[i]==t->tab[j] )
		      {
                	tmp=t->tab[j];
			t->tab[j]=t->tab[t->taille-1];
			t->tab[t->taille-1]=tmp;
			t->taille=t->taille-1;
		     }
		   }
		}
		ordonnerTableau(t->tab,t->taille);
	}
void unionn(MonEnsemble *A, MonEnsemble *B, MonEnsemble *C)
{
	int i,j=0;
	C->taille=(A->taille)+(B->taille);
	if(A->taille<B->taille)
	{
	  for(i=0;i<A->taille;i++)
	  C->tab[i]=A->tab[i];
	  for(i=A->taille;j<C->taille;i++,j++)
	  C->tab[i]=B->tab[j];
	}
	else
	{
	  for(i=0;i<B->taille;i++)
	  C->tab[i]=B->tab[i];
	  j=0;
          for(i=B->taille;j<C->taille;i++,j++)
	  C->tab[i]=A->tab[j];
	}
	suppression(C);
	ordonnerTableau(C->tab,C->taille);
}
/***************************************************************************************************/
void diff( MonEnsemble *A , MonEnsemble *B , MonEnsemble *C )
{

	int i=0,j=0,k=0,h=0;
	for ( i = 0; i <(A->taille); i++)
	{
		for( j=0; j<(B->taille); j++)
		{
			if (B->tab[j]==A->tab[i])
			{
				h++;
			}
		}
		if (h==0)
		{
			C->tab[k]=A->tab[i];
			k++;
		}
		h=0;
	}
	C->taille=k;
	ordonnerTableau(C->tab,C->taille);
}
/***************************************************************************************************/
int size(MonEnsemble *A)
{
   return A->taille;

}
/***************************************************************************************************/
int isEmpty(MonEnsemble *A)
{
   if(A->tab==NULL)
   	return 1; 
   return 0;
}
/***************************************************************************************************/
int getFirst(MonEnsemble *A)
{
 return A->tab[0];
}
/***************************************************************************************************/
int getLast(MonEnsemble *A)
{
return A->tab[A->taille-1];
}
/***************************************************************************************************/
void addLast(MonEnsemble *A,int elem)
{
	A->taille++;
	A->tab[A->taille-1]=elem;
	ordonnerTableau(A->tab,A->taille);
}
/***************************************************************************************************/
void addFirst(MonEnsemble *A,int elem)
{
	int i;
	A->taille++;
	for (i=A->taille;i>0;i--)
		{
			A->tab[i]=A->tab[i-1];
		}
	A->tab[0]=elem;
	ordonnerTableau(A->tab,A->taille);
}
/***************************************************************************************************/
void removeFirst(MonEnsemble *A)
{
	int i;
	for (i=0;i<A->taille;i++)
		{
			A->tab[i]=A->tab[i+1];
		}
	A->taille--;
	ordonnerTableau(A->tab,A->taille);
}
/***************************************************************************************************/
void removeLast(MonEnsemble *A)
{
	Remove(A,A->taille-1);
	ordonnerTableau(A->tab,A->taille);
}
/***************************************************************************************************/














void ordonnerTableau(int tableau[], int tailleTableau)
{
   unsigned int c=0,d=0;
   int tri=0;
   for(c=0;c<tailleTableau;c++)
   {
       for(d=c;d<tailleTableau;d++)
       {
           if(tableau[c]>tableau[d])
           {
               tri=tableau[c];
               tableau[c]=tableau[d];
               tableau[d]=tri;
           }
       }
   }

}

