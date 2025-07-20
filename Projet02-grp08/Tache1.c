#include "Tache1.h"

int main(int argc, char const *argv[])
{
	int rat[2]={0},rat0[2]={0},rat1[2]={0},r[2]={4,8},i,entier,a,b,c,d,r1[2]={0},r2[2]={0},n;
	float x,y;
	
	printf("\tREPRESENTATION DES NOMBRES RATIONNELS AVEC LES TABLEAUX\n");
	printf("\nQuestion numéro 1\n");
	printf("Entrez deux nombres rationnels pour la somme\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(rat0);
	printf("Second nombre rationnel \n");
	prise_rationnel(rat1);
	addition(rat0,rat1,rat);
	printf("La somme des deux nombres rationnels est \n[");
	for(i=0;i<2;++i)
	{
		printf("%d",rat[i]);
		if (i==0)
		{
			printf("/");
		}
	}
	printf("]\n");
/*********************************************************************************************************/
       printf("\nQuestion numéro 2\n");
       Addition(r,entier);
/*********************************************************************************************************/
         printf("\nQuestion numéro 3\n");
         AdditionNormalise(r1,r2);
/*********************************************************************************************************/
       printf("\nQuestion numéro 4\n");
       do
       {
         printf("Entrer le numérateur et dénominateur en ordre du premier rationnel avec dénominateur différent de zéro.\n");
         scanf("%d%d",&a,&b);
       }while(b==0);
       do
       {
         printf("Entrer le numérateur et dénominateur en ordre du second rationnel avec dénominateur différent de zéro.\n");
         scanf("%d%d",&c,&d);
       }while(d==0);
       multiplication_rationnel(a,b,c,d);
       printf("\n");

/*********************************************************************************************************/
       printf("\nQuestion numéro 5\n");
       multi_ratio_entier();


/*********************************************************************************************************/
     printf("\nQuestion numéro 6\n");
     printf("Entrez le numérateur et le dénominateur du premier rationnel tel que pgcd(num,deno)=1\n");
     scanf("%d%d",&a,&b);
     while(pgcd(a,b)!=1)
     {
      printf("Erreur !!! Il faut que pgcd(num, déno) soit 1\nRéessayez\n");
      scanf("%d%d",&a,&b);
     }
     printf("Entrez le numérateur et le dénominateur du second rationnel tel que pgcd(num,déno)=1\n");
     scanf("%d%d",&c,&d);
     while(pgcd(c,d)!=1)
     {
      printf("Erreur !!! Il faut que pgcd(num, déno) soit 1\nRéessayez\n");
      scanf("%d%d",&c,&d);
     }
     produit_norm(a,b,c,d);

/*********************************************************************************************************/
       printf("\nQuestion numéro 7\n");
       printf("Entrez deux nombres rationnels pour la division si elle est possible\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(rat0);
	printf("Second nombre rationnel \n");
	prise_rationnel(rat1);
	division(rat0,rat1,rat);
	printf("La division des deux nombres rationnels est \n[");
	for(i=0;i<2;++i)
	{
		printf("%d",rat[i]);
		if (i==0)
		{
			printf("/");
		}
	}
	printf("]\n");

/*********************************************************************************************************/
          printf("\nQuestion numéro 8\n");
	  DivisonE(r,entier);
/*********************************************************************************************************/
         printf("\nQuestion numéro 9\n");
         DivisonN(r1,r2);
/*********************************************************************************************************/
       printf("\nQuestion numéro 10\n");
       printf("Entrer le numérateur et dénominateur en ordre du premier rationnel avec dénominateur différent de zéro.\n");
       scanf("%d%d",&a,&b);
       printf("Entrer le numérateur et dénominateur en ordre du second rationnel avec dénominateur différent de zéro.\n");
       scanf("%d%d",&c,&d);
       printf("\n");
       soustractionRationnel(a,b,c,d);
/*********************************************************************************************************/
        printf("\nQuestion numéro 11\n");
	soustraction_ratio_entier();
/********************************************************************************************************/
        printf("\nQuestion numéro 12\n");
	printf("Entrez le numérateur et le dénominateur du premier rationnel tel que pgcd(num,deno)=1\n");
        scanf("%d%d",&a,&b);
       while(pgcd(a,b)!=1)
       {
       printf("Erreur !!! Il faut que pgcd(num, déno) soit 1\nRéessayez\n");
       scanf("%d%d",&a,&b);
       }
       printf("Entrez le numérateur et le dénominateur du premier rationnel tel que pgcd(num,déno)=1\n");
       scanf("%d%d",&c,&d);
       while(pgcd(c,d)!=1)
       {
       printf("Erreur !!! Il faut que pgcd(num, déno) soit 1\nRéessayez\n");
       scanf("%d%d",&c,&d);
       }
       soustraction_norm(a,b,c,d);
/********************************************************************************************************/
        printf("\nDeuxième partie du projet\n");
        printf("\nQuestion numéro 1\n");
	printf("Entrez le nombre rationnel pour lequel vous voulez l'inverse\n");
	printf("Premier nombre rationnel \n");
	prise_rationnel(rat0);	
	inverse(rat0,rat);
	printf("L'inverse de ce nombre rationnel est \n[");
	for(i=0;i<2;++i)
	{
		printf("%d",rat[i]);
		if (i==0)
		{
			printf("/");
		}
	}
	
	printf("]\n");
/*************************************************************************************************************/
        printf("\nQuestion numéro 2\n");
	Normalisation(r);
/***************************************************************************************************************/
        printf("\nQuestion numéro 3\n");
	printf("Entrer le nombre de rationnel\n");
	scanf("%d",&n); 
	SumProd_N(n);
/***************************************************************************************************************/
        printf("\nQuestion numéro 4\n");
	printf("Entrer le numérateur et dénominateur en ordre du premier rationnel\n");
   	scanf("%d%d",&a,&b);
	afficheRationnel(a,b);
/**************************************************************************************************************/
       printf("\nQuestion numéro 5\n");
	printf("Enter le numerateur et le denominateur (different de zéro) du premier rationnel puis ceux du secon rationnel\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (b==0 || d==0)
		printf("Entrer invalide !!! \n");
	else
	{
		x=a/b;
		y=c/d;
	 printf("\n %d \n",comparaison_ratio(a,b,c,d));

       }
/***************************************************************************************************************/
    printf("\nQuestion numéro 6\n");
    representation_reel();
/***************************************************************************************************************/
	return 0;
}
/*********************************  FONCTIONS        *************************************************************/
void prise_rationnel(int rationnel[])
{
	printf("Num= ");
	scanf("%d",&rationnel[0]);
	printf("Den= ");
	scanf("%d",&rationnel[1]);
}
/*********************************************************************************************************/
void addition(int rationnel1[],int rationnel2[],int rationnel[])
{
	rationnel[0]=(rationnel1[0]*rationnel2[1])+(rationnel2[0]*rationnel1[1]);
	rationnel[1]=rationnel1[1]*rationnel2[1];
}
/*********************************************************************************************************/
void Addition(int r1[],int entier)
{
	int r[2]={0};
	printf("Entrez le rationnel( numérateur après dénominateur ): ");
	scanf("%d%d",&r1[0],&r1[1]);
	printf("Entrez l'entier : ");
	scanf("%d",&entier);
	r[0]=r1[1]*entier+r1[0];
	r[1]=r1[1];
	printf("\n %d + %d/%d = %d/%d \n",entier,r1[0],r1[1],r[0],r[1]);

}
/***********************************************************************************************************/
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
/********************************************************************************************************/
void AdditionNormalise(int r1[], int r2[])
{
	int c=0,r[2]={0};
	printf("Entrez le premier rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r1[0],&r1[1]);
	printf("Entrez le deuxième rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r2[0],&r2[1]);
	r[0]=r1[0]*r2[1]+r1[1]*r2[0];
	r[1]=r1[1]*r2[1];
	c=pgcd(r[0],r[1]);
	r[0]=r[0]/c;
	r[1]=r[1]/c;
	printf("\n %d/%d + %d/%d = %d/%d \n",r1[0],r1[1],r2[0],r2[1],r[0],r[1]);
}
/**********************************************************************************************************/
void multiplication_rationnel(int num1,int den1,int num2,int den2)
{
  printf("Le produit des deux nombres rationnels donne: %d/%d\n",num1*num2,den1*den2);
}
/***********************************************************************************************************/
void multi_ratio_entier()
{
	int num,deno,n;
	printf("Veuillez enter deux entiers dont le numerateur du rationnel en première position puis le denominateur different de zero\n");
	scanf("%d%d",&num,&deno);
	if (deno==0)
		printf("Entrer invalide \n");
	else 
	{
		printf("Veullez entrer l'entier\n");
		scanf("%d",&n);
		if (num==0 || n==0)
			printf("Le rationnel est 0 \n");
	num=num*n;
	printf("Le rationnel est donc [%d,%d]\n",num,deno);
	}
}

/***********************************************************************************************************/
void produit_norm(int a, int b, int c, int d)
    {
      printf("Le produit donne le rationnel normalisé : %d/%d\n",((a*c)/pgcd(a*c,b*d)),((b*d)/pgcd(a*c,b*d)));
    }
/************************************************************************************************************/
void division(int rationnel1[],int rationnel2[],int rationnel[])
{
	if (rationnel2[0]==0)
	{
		printf("La division n'est pas possible !\n");
		exit(EXIT_FAILURE);
	}
	rationnel[0]=rationnel1[0]*rationnel2[1];
	rationnel[1]=rationnel1[1]*rationnel2[0];
}
/*********************************************************************************************************/
void DivisonE( int r1[], int entier)
{
	int r[2]={0};
	printf("Entrez le rationnel( numérateur après dénominateur avec dénominateur différent de zéro): ");
	scanf("%d%d",&r1[0],&r1[1]);
	printf("Entrer l'entier\n");
	scanf("%d",&entier);
	if (entier !=0)
	{
		r[0]=r1[0]*entier;
		r[1]=r1[1];
		printf("\n (%d/%d) / %d = %d/%d \n",r1[0],r1[1],entier,r[0],r[1]);
	}
	else
		printf("La division n'est pas possible 🙏🙏🙏\n");
}
/**********************************************************************************************************/






/************************************************************************************************************/
void soustractionRationnel(int num1,int den1,int num2,int den2)
{
  printf("La soustraction des deux nombres rationnels donne: %d/%d\n",((num1*den2)-(den1*num2)),(den1*den2));
}
/*************************************************************************************************************/
void soustraction_ratio_entier()
{
	int num1,deno1,n;
	printf("Entrer le numerateur et le denominateur (different de zero) du rationnel \n");	
	scanf("%d%d",&num1,&deno1);
	if (deno1==0)
		printf("Entrer invalide !!!\n");
	else
	{
		printf("Enter l'entier \n");
		scanf("%d",&n);
		num1=num1-deno1*n;
		printf("Le rationnel est donc [%d,%d]\n",num1,deno1);
	}

}
/*************************************************************************************************************/
void soustraction_norm(int a, int b, int c, int d)
    {
      printf("Le soustraction donne le rationnel normalisé : %d/%d\n",((a*d-b*c)/pgcd(a*d-b*c,b*d)),(b*d/pgcd(a*d-b*c,b*d)));
    }
/*************************************************************************************************************/
void inverse(int rationnel1[],int rationnel[])
{
	if (rationnel1[0]==0)
	{
		printf("L'inverse n'est pas possible !\n");
		exit(EXIT_FAILURE);
	}
	rationnel[0]=rationnel1[1];
	rationnel[1]=rationnel1[0];
}
/*********************************************************************************************************/
void Normalisation( int r[])
{
	int c=0;
	printf("Entrez le rationnel à normaliser ( numérateur après dénominateur ): ");
	scanf("%d%d",&r[0],&r[1]);
	c= pgcd(r[0],r[1]);
	r[0]=r[0]/c;
	r[1]=r[1]/c;
	printf("La forme normalisée de votre rationnel est : %d/%d \n",r[0],r[1]);
}
/*********************************************************************************************************/
void SumProd_N( int m)
{
	int **t,i=0,j=0,prod1=1,prod2=1,n=0;
	n=m;
	t=malloc(2 *sizeof(int));
	for(i=0;i<m;i++)
		t[i]=malloc(m *sizeof(int));
	printf("Entrez vos rationnels en suivant le format ( numerateur,dénominateur ):\n");
	for( i=0; i<m; i++)
	{
		printf(" Le %d ième rationnel\n",i+1);
		scanf("%d%d",&t[0][i],&t[1][i]);
	}
	printf("Voici vos rationnels : \n");
	for( i=0;i<2;i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%3d ",t[i][j]);
		}
		printf("\n");
	}
	for( i=0; i<m; i++)
	{
		prod1=prod1*t[0][i];
		prod2=prod2*t[1][i];
	}
	printf("Le produit des %d rationnels donne %d/%d\n",n,prod1,prod2);
	while(m>1)
	{
		t[0][0]=t[0][0]*t[1][m-1]+t[1][0]*t[0][m-1];
		t[1][0]=t[1][0]*t[1][m-1];
		m--;
	}
	printf("La somme des %d rationnels donne %d/%d\n",n,t[0][0],t[1][0]);
}

/*********************************************************************************************************/
void DivisonN( int r1[], int r2[])
{
	int r[2]={0},c=0;
	printf("Entrez le premier rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r1[0],&r1[1]);
	printf("Entrez le deuxième rationnel normalisé( numérateur,dénominateur ): ");
	scanf("%d%d",&r2[0],&r2[1]);
	if (r2[1] !=0)
	{
		r[0]=r1[0]*r2[1];
		r[1]=r1[1]*r2[0];
		c=pgcd(r[0],r[1]);
		r[0]=r[0]/c;
		r[1]=r[1]/c;
		printf("\n (%d/%d) / (%d/%d) = %d/%d \n",r1[0],r1[1],r2[0],r2[1],r[0],r[1]);
	}
	else
		printf("La division des deux rationnels n'est pas possible\n");
}
/*********************************************************************************************************/
void afficheRationnel(int num,int den)
{
  printf("%d/%d\n",num,den);
}
/*********************************************************************************************************/
int comparaison_ratio(int num1,int deno1,int num2, int deno2)
{
	
	float r1, r2;
	
		r1=num1/deno1;
		r2=num2/deno2;
	
	if (r1<=r2)
		return 1;
	return 0;
	
}
/*********************************************************************************************************/
void selection(double tab[], int n){
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
/*********************************************************************************************************/
void representation_reel()
    {
    int n,i=0,a,b;
    double *tab=NULL;
    printf("Entrez le nombre d'éléments\n");
    scanf("%d",&n);
    tab=malloc(n*sizeof(double));
	   if(tab==NULL){
	     exit(0);
	   }  
    printf("entrez le numérateur et le dénominateur de chacun des rationnels de l'ensemble\n");
    i=0;
    
     do
      {
       scanf("%d%d",&a,&b);
       tab[i]=(double)a/(double)b;
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
/*********************************************************************************************************/
