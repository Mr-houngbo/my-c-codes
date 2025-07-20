#include "Tache2.h"

int main(int argc, char const *argv[])
{
        int i,entier,a,b,c,d,n;
	rationnel rat,rat0,rat1,r1,r2,A[2],r;	
	/*********************************************************************************************************/
	printf("\tREPRESENTATION DES NOMBRES RATIONNELS AVEC LES STRUCTURES\n");
	printf("Question numéro 1\n");
	printf("Entrez deux nombres rationnels pour la somme\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(&rat0);
	printf("Second nombre rationnel \n");
	prise_rationnel(&rat1);
	addition(&rat0,&rat1,&rat);
	printf("La somme des deux nombres rationnels est : ");
	affichage(&rat);
/*********************************************************************************************************/
        printf("\nQuestion numéro 2\n");
        Addition(r2,entier);
/*********************************************************************************************************/
        printf("\nQuestion numéro 3\n");
        AdditionNormalise(r1,r2);
/*********************************************************************************************************/
        printf("\nQuestion numéro 4\n");
        for(i=0;i<2;i++)
        {
         do
         {
          printf("Entrer en ordre le numerateur et le dénominateur du nombre rationnel numéro %d tel que le dénominateur soit différent de zéro\n",i+1);
         scanf("%d%d",&A[i].num,&A[i].den);
        }while(A[i].den==0);
       }
       multiplication_rationnel(A,2);
/*********************************************************************************************************/
       printf("\nQuestion numéro 5\n");
       multi_ratio_entierS();
/*********************************************************************************************************/
        printf("\nQuestion numéro 6\n");
        printf("Entrez deux nombres rationnels pour la multiplication qui donne un rationnel normalisé\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(&rat0);
	printf("Second nombre rationnel \n");
	prise_rationnel(&rat1);
        produit_norm(&rat0,&rat1);
/*********************************************************************************************************/
        printf("\nQuestion numéro 7\n");
	printf("Entrez deux nombres rationnels pour la division si elle est possible\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(&rat0);
	printf("Second nombre rationnel \n");
	prise_rationnel(&rat1);
	division(&rat0,&rat1,&rat);
	printf("La division des deux nombres rationnels est : ");
	affichage(&rat);
/*********************************************************************************************************/
        printf("\nQuestion numéro 8\n");
        DivisonE(r1,entier);
/*********************************************************************************************************/
        printf("\nQuestion numéro 9\n");
        DivisonN(r1,r2);
/*********************************************************************************************************/
         printf("\nQuestion numéro 10\n");
         for(i=0;i<2;i++)
         {
          do
          {
           printf("Entrer en ordre le numerateur et le dénominateur du nombre rationnel numéro %d tel que le dénominateur soit différent de zéro\n",i+1);
           scanf("%d%d",&A[i].num,&A[i].den);
          }while(A[i].den==0);
         }
         soustractionRationnel(A,2);
/*********************************************************************************************************/
         printf("\nQuestion numéro 11\n");
         soustraction_ratio_entierS();
/*********************************************************************************************************/
           printf("\nQuestion numéro 12\n");
           printf("Entrez deux nombres rationnels pour la soustraction qui donne un rationnel normalisé\n");
	   printf("Premier nombre rationnel \n");
	   prise_rationnel(&rat0);
	   printf("Second nombre rationnel \n");
	   prise_rationnel(&rat1);
           soustraction_norm(&rat0,&rat1);
/*********************************************************************************************************/
        printf("\nDeuxième partie du projet\n");
        printf("\nQuestion numéro 1\n");
	printf("Entrez le nombre rationnel pour lequel vous voulez l'inverse\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(&rat0);	
	inverse(&rat0,&rat);
	printf("L'inverse de ce nombre rationnel est  : ");
	affichage(&rat);
/*********************************************************************************************************/
        printf("\nQuestion numéro 2\n");
        Normalisation(r);
/*********************************************************************************************************/
        printf("\nQuestion numéro 3\n");
        SumProd_N(n);
/*********************************************************************************************************/
          printf("\nQuestion numéro 4\n");
          printf("Entrer le nombre rationnel \n");
	  prise_rationnel(&rat0);
          afficheRationnel(rat0);
/*********************************************************************************************************/
         printf("\nQuestion numéro 5\n");
         for(i=0;i<2;i++)
          {
           do
           {
            printf("Entrer en ordre le numerateur et le dénominateur du nombre rationnel numéro %d tel que le dénominateur soit différent de zéro\n",i+1);
            scanf("%d%d",&A[i].num,&A[i].den);
           }while(A[i].den==0);
         }
          if(comparaison_ratioS(A)==1)
               printf("Le premier nombre rationnel est plus petit que le second nombre rationnel\n");
          else
               printf("Le premier nombre rationnel est plus grand que le second nombre rationnel\n");
/*********************************************************************************************************/
            printf("\nQuestion numéro 6\n");
            representation_reel();
/*********************************************************************************************************/	
	return 0;
}
/*********************************  FONCTIONS  *************************************************************/
void prise_rationnel(rationnel *rat)
{
	printf("Num= ");
	scanf("%d",&rat->num);
	printf("Den= ");
	scanf("%d",&rat->den);
}
/*********************************************************************************************************/
void affichage(rationnel *rat)
{
	printf("[%d/",rat->num);
	printf("%d]\n",rat->den);
}
/*********************************************************************************************************/
void addition(rationnel *rat1,rationnel *rat2,rationnel *rat)
{
	rat->num=((rat1->num)*(rat2->den))+((rat2->num)*(rat1->den));
	rat->den=(rat1->den)*(rat2->den);
}
/********************************************************************************************************/
void affiche(rationnel p)
{
	printf("%d/%d",p.num,p.den);
}
/********************************************************************************************************/
void Addition(rationnel r2,int entier)
{
	rationnel r={0,0};
	printf("Entrez le rationnel( numérateur après dénominateur ): ");
	scanf("%d%d",&r2.num,&r2.den);
	printf("Entrez l'entier : ");
	scanf("%d",&entier);
	r.num=r2.den*entier+r2.num;
	r.den=r2.den;
	printf("\n %d + %d/%d = ",entier,r2.num,r2.den);
	affiche(r);
	printf("\n");
}

/*********************************************************************************************************/
int pgcd(int a, int b)
{
	int C=0,D=0,E=0,F=0;
	for(C=1;C<=abs((int)a);C++)
	{
		D=abs((int)a)%C;
		E=abs((int)b)%C;
		if(D==0 && E==0)
		F=C;
	}
	return F;
}
/*********************************************************************************************************/
void AdditionNormalise(rationnel r1, rationnel r2)
{
	int c=0;
	rationnel r;
	printf("Entrez le premier rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r1.num,&r1.den);
	printf("Entrez le deuxième rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r2.num,&r2.den);
	r.num=r1.num*r2.den+r1.den*r2.num;
	r.den=r1.den*r2.den;
	c=pgcd(r.num,r.den);
	r.num=r.num/c;
	r.den=r.den/c;
	printf("\n %d/%d + %d/%d = ",r1.num,r1.den,r2.num,r2.den);
	affiche(r);
	printf("\n");
}
/**********************************************************************************************************/
void multiplication_rationnel(rationnel Rationnel[],int n)
{
  int i,p=1,q=1;
  for(i=0;i<2;i++)
  {
     p=p*Rationnel[i].num;
     q=q*Rationnel[i].den;
  }
  printf("Le produit des deux nombres rationnels donne: %d/%d\n",p,q);
}
/**********************************************************************************************************/
void multi_ratio_entierS()
{
	int n;
	rationnel r1;
	printf("Veillez le numerateur et le denominateur different de zero du nombre rationnel\n");
	scanf("%d%d",&r1.num,&r1.den);
	if (r1.den==0)
		printf("Entrer invalide \n");
	else
	{
		printf("Veullez entrer l'entier\n");
		scanf("%d",&n);
	        if(r1.num==0 || n==0)	
			printf("Le rationnel est 0 \n");
	        else
	        {
	                r1.num=r1.num*n;
	                printf("Le rationnel est donc [%d/%d]\n",r1.num,r1.den);
	        }
	}
}

/**********************************************************************************************************/
void produit_norm(rationnel *q1, rationnel *q2)
    {
    int a,b,p;
      a=(q1->num)*(q2->num);
      b=(q1->den)*(q2->den);
      p=pgcd(a,b);
      printf("Le produit donne le rationnel normalisé : %d/%d\n",(a/p),(b/p));
    }
/**********************************************************************************************************/
void division(rationnel *rat1,rationnel *rat2,rationnel *rat)
{
	if (rat2->num==0)
	{
		printf("La division n'est pas possible !\n");
		exit(EXIT_FAILURE);
	}
	rat->num=(rat1->num)*(rat2->den);
	rat->den=(rat1->den)*(rat2->num);
}
/*********************************************************************************************************/
void DivisonE( rationnel r1, int entier)
{
	rationnel r;
	printf("Entrez le rationnel( numérateur après dénominateur: ");
	scanf("%d%d",&r1.num,&r1.den);
	printf("Entrer l'entier\n");
	scanf("%d",&entier);
	if (entier !=0)
	{
		r.num=r1.num;
		r.den=r1.den*entier;
		printf("\n (%d/%d) / %d = ",r1.num,r1.den,entier);
		affiche(r);
		printf("\n");
	}
	else
		printf("La division n'est pas possible 🙏🙏🙏\n");
}
/*********************************************************************************************************/
void DivisonN( rationnel r1, rationnel r2)
{
	rationnel r={0,0};
	int c=0;
	printf("Entrez le premier rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r1.num,&r1.den);
	printf("Entrez le deuxième rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r2.num,&r2.den);
	if (r2.num!=0)
	{
		r.num=r1.num*r2.den;
		r.den=r1.den*r2.num;
		c=pgcd(r.num,r.den);
		r.num=r.num/c;
		r.den=r.den/c;
		printf("\n (%d/%d) / (%d/%d) = ",r1.num,r1.den,r2.num,r2.den);
		affiche(r);
		printf("\n");
	}
	else
		printf("La division des deux rationnels n'est pas possible\n");
}
/*********************************************************************************************************/
void soustractionRationnel(rationnel Rationnel[],int n)
{
  int i,a,b;
  for(i=0;i<2;i++)
  {
     a=(Rationnel[0].num*Rationnel[1].den)-(Rationnel[0].den*Rationnel[1].num);
     b=Rationnel[0].den*Rationnel[1].den;
  }
  printf("La soustraction des deux nombres rationnels donne: %d/%d\n",a,b);
}
/*********************************************************************************************************/
void soustraction_norm(rationnel *q1, rationnel *q2)
    {
     int a,b,c,p;
     a=(q1->num)*(q2->den);
     b=(q1->den)*(q2->num);
     c=(q1->den)*(q2->den);
     p=pgcd(a-b,c);
     
      printf("Le soustraction donne le rationnel normalisé : %d/%d \n",((a-b)/p),(c/p));
    }
/*********************************************************************************************************/
void soustraction_ratio_entierS()
{
	int n;
	rationnel r1;
	printf("Entrer le numerateur et le denominateur (different de zero) du rationnel \n");	
	scanf("%d%d",&r1.num,&r1.den);
	if (r1.den==0)
		printf("Entrer invalide !!!\n");
	else
	{
		printf("Enter l'entier \n");
		scanf("%d",&n);
		r1.num=r1.num-r1.den*n;
		printf("Le rationnel est donc [%d/%d]\n",r1.num,r1.den);
	}

}
/********************************************************************************************************/
int comparaison_ratioS(rationnel r1[])
{
	float q1, q2;
	int i;
	   for(i=0;i<2;i++)
	   {
		q1=r1[0].num/r1[0].den;
		q2=r1[1].num/r1[1].den;
	   }
	if (q1<=q2)
		return 1;
	return 0;
}
/*******************************************************************************************************/
void inverse(rationnel *rat1,rationnel *rat)
{
	if (rat1->num==0)
	{
		printf("L'inverse n'est pas possible !\n");
		exit(EXIT_FAILURE);
	}
	rat->num=rat1->den;
	rat->den=rat1->num;
}
/*********************************************************************************************************/
void Normalisation( rationnel r)
{
	int c=0;
	printf("Entrez le rationnel à normaliser ( numérateur après dénominateur ): ");
	scanf("%d%d",&r.num,&r.den);
	c= pgcd(r.num,r.den);
	r.num=r.num/c;
	r.den=r.den/c;
	printf("La forme normalisée de votre rationnel est : ");
	affiche(r);
	printf("\n");
}
/*********************************************************************************************************/
void SumProd_N( int m)
{
	rationnel *R,r={1,1};
	int i=0,j=0,n=0,k;
	R=malloc(m *sizeof(rationnel));
	printf("Entrer le nombre de rationnels que vous voulez entrer\n");
	scanf("%d",&m);
	n=m;
	k=m;
	printf("Entrez vos rationnels en suivant le format ( numerateur,dénominateur ):\n");
	for( i=0; i<m; i++)
	{
		printf(" Le %d ième rationnel\n",i+1);
		scanf("%d%d",&R[i].num,&R[i].den);
	}
	for( i=0; i<m; i++)
	{
		r.num=r.num*R[i].num;
		r.den=r.den*R[i].den;
	}
	printf("Le produit des %d rationnels vaut : ",m);
	affiche(r);
	printf("\n");
	while(m>1)
	{
		R[0].num=R[0].num*R[m-1].den+R[0].den*R[m-1].num;
		R[0].den=R[0].den*R[m-1].den;
		m--;
	}
	printf("La somme des %d rationnels donne ",k);
	affiche(R[0]);
	printf("\n");
}

/********************************************************************************************************/
void afficheRationnel(rationnel Rationnel)
{
       printf("%d/%d\n",Rationnel.num,Rationnel.den);
}
/********************************************************************************************************/
void selection(double tab[], int n)
{
	int i=0,j=0,r=0;
	double tmp=0;
	for(i=0;i<n-1;i++){
	    r=i;
	   for(j=r;j<n;j++){
	     if(tab[j]<tab[r]){
	       r=j;
	      }
	    }
	      tmp=tab[i];
	      tab[i]=tab[r];
	      tab[r]=tmp;
	 }
	 
}
void representation_reel()
    {
    int n,i=0;
    rationnel q;
    double *tab=NULL;
    printf("Entrez le nombre d'éléments\n");
    scanf("%d",&n);
    tab=malloc(n*sizeof(double));
	   if(tab==NULL){
	     exit(0);
	   }  
    printf("Entrez le numérateur et le dénominateur de chacun des rationnels de l'ensemble\n");
    i=0;
    
     do
      {
       scanf("%d%d",&q.num,&q.den);
       tab[i]=(double)q.num/(double)q.den;
        i++;
      }while(i<n);
      selection(tab,n);
      i=0;
      printf("[");
      do
      {
       printf("%.2f; ",tab[i]);
        i++;
      }while(i<n);
        printf("]\n");
    free(tab);
}
/********************************************************************************************************/
