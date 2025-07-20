/*

	NOM : HOUNGBO Calixte Raoul T.
	MATRICULE : 11674220

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
typedef enum
{
 false,true
}Bool;
/*********************************************    Prototypes     ************************************************************/
void exercice1();
void exercice2();
void exercice3q1();
void exercice3q2();
void exercice3q3();
int menu();/*Exercice 3   Pour afficher le menu au choix*/
void exercice4();
void exercice5();
void exercice6();
float S(int n);/*   Exercice 7    */
void exercice7();
void exercice8();
void exercice9();
Bool is_natural_integer(float f);/*Exercice 9    Pour verifier si un nombre est entier naturel */
float Un(float x,int n);
void exercice10();
void exercice11();
void exercice12();
void exercice13();
void exercice14();
void exercice15();
void exercice16();
void exercice17();
void exercice18();
void exercice19();
void exercice20();
int factoriel(int n);/*Exercice 21 Pour calculer la factorielle */
void exercice21();
void exercice22();
int min(int h,int g);/*Exercice 23 Pour calculer le minimum entre deux nombres  */
void exercice23();
int fibonacci(int m);/*Exercice 24 Pour calculer fibonacci de m  */
void exercice24();
void exercice25();
void exercice26();
void exercice27();
int comb(int p,int n);/* Exercice 28 pour calculer combinaison de p dans n     */
void exercice28();
void exercice29();
void exercice30();
void tri_rapide(int tab[],int deb,int fin);
void exercice31();
void dicho(int Tab[],int a,int b,int n);/* Recherche dichotomique   */
void exercice32();
void exercice33();
void additionMatrice(double **mat,double **matt,int t,int o);
void TransposeeMatrice(double **mat, int t,int o);
Bool is_same_element(int *tab,int len);
float** matriceReduite(float **mat,int taille,int b,int c);
float determinant(float **mat,int taille);
void exercice34();
void exercice35();
void exercice36();
void supprime_valeur(int *tab,int pos,int *taille);
void ordonnerTableau(int tableau[], int tailleTableau);
float sum(float **tab,int fix,char dir,int fin);/* Pour calculer la somme selon une direction donnee dans le tableau a double entree     */
void exercice37();
float Sn(int n);
void exercice38();
void exercice39();
int nombrelapin(int n);
void exercice40();
void exercice41();
void exercice42();
void exercice43();
/***************************************************   Main        *********************************************/
int main()
{
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercices d’algorithmique et de programmation en langage C ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~ La compilation est sequentielle i.e le programme compile un exercice a la fois jusqu'au dernier\n");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 1  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  exercice1();
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 2  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice2();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 3  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice3q1();
	exercice3q2();
	exercice3q3();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 4  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice4();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 5  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice5();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 6  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice6();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 7  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice7();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 8  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice8();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 9  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice9();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 10  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice10();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 11  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice11();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 12  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice12();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 13  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice13();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 14  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice14();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 15  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice15();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 16  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice16();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 17  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice17();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 18  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice18();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 19  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice19();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 20  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice20();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 21  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice21();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 22  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice22();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 23  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice23();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 24  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice24();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 25  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice25();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 26  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice26();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 27  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice27();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 28  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice28();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 29  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice29();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 30  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice30();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 31  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice31();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 32  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice32();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 33  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice33();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 34  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice34();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 35  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice35();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 36  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice36();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 37  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice37();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 38  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice38();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 39  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice39();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 40  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice40();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 41  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice41();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 42  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice42();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~Exercice 43  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	exercice43();
	return 0;
}
/***********************************************   Fonctions ***********************************************/


/******************************************* Exercice1   ****************************************************************************/
void exercice1()
{
 int annee;
 char nom[50];
 	printf("Tres cher couple marié , quel est votre nom ? \n");
 	scanf("%s",nom);
 	printf("Quel est l'année de votre mariage\n");
 	scanf("%d",&annee);
 	annee=2023-annee;
	if (annee ==1)
		printf("Mr. et Mme. %s, vous fêtez vos noces de coton !",nom);
	if (annee ==2)
		printf("Mr. et Mme.   %s, vous fêtez vos noces de cuir !",nom);
	if (annee ==3)
		printf("Mr. et Mme.   %s, vous fêtez vos noces de froment !",nom);
	if (annee ==4)
		printf("Mr. et Mme.   %s, vous fêtez vos noces de cire !",nom);
	if (annee ==5)
		printf("Mr. et Mme.   %s, vous fêtez vos noces de bois !",nom);
	if(annee%5 !=0)
		printf("Mr. et Mme.   %s, l'age de votre mariage n'ateint pas encore un seuil requis pour avoir une fete. ",nom);
	if (annee ==10)
		printf("Mr. et Mme.   %s, vous fêtez vos d’étain !",nom);
	if (annee ==15)
		printf("Mr. et Mme.   %s, vous fêtez vos de cristal !",nom);
  if (annee == 20)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de porcelaine !",nom);
  if (annee == 25)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces d’argent !",nom);
  if (annee == 30)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de perle !",nom);
  if (annee == 35)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de palissandre !",nom);
  if (annee == 40)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces d’émeraude !",nom);
  if (annee == 45)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de vermeil !",nom);
  if (annee == 50)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces d’or !",nom);
  if (annee == 55)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces d’orchidée !",nom);
  if (annee == 60)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de diamant !",nom);
  if (annee == 65)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de palissandre !",nom);
  if (annee == 70)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de platine !",nom);
  if (annee == 75)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces d’albâtre !",nom);
  if (annee == 80)
  	printf("Mr. et Mme.   %s, vous fêtez vos noces de chêne !",nom);
  if (annee > 80)
  	printf("Mr. et Mme.   %s, vous fêtez un anniversaire de mariage sans précédent ! Chaque jour doit être célébré avec faste !!!",nom);
}
/******************************************* Exercice2   ****************************************************************************/
void exercice2()
{
 float  age,volume;
 printf("Quel est l'age du crane d'hominidé recherché (en Millions d'annees ) \n");
 scanf("%f",&age);
 printf("Quel est le volume du crane d'hominidé recherché (en cm3)\n");
 scanf("%f",&volume);
	if((age<=-2.5 && age>=-4.2) && (volume<=530 && volume>=300) )
		printf("Espèce d’hominidé : Australopithèque \n");
	else if((age<=-2.4 && age>=-1.6) && (volume<=750 && volume>=550) )
		printf("Espèce d’hominidé : Homo habilis \n");
	else if((age<=-0.3 && age>=-1.9) && (volume<=1300 && volume>=700) )
		printf("Espèce d’hominidé : Homo erectus \n");
  else if((age<=-0.035 && age>=-0.35) && (volume<=1750 && volume>=1200) )
		printf("Espèce d’hominidé : Homme de Néandertal \n");
  else if(age>=-0.035 && volume==1350)
		printf("Espèce d’hominidé : Homo sapiens \n");
	else
		printf("Espèce d’hominidé non encore répertoriée dans la base \n");

}
/******************************************* Exercice3   ****************************************************************************/
int menu()
{
 int choix=0;
 printf("\n1. Effectuer une multiplication ? \n");
 printf("2. Effectuer une addition ?\n");
 printf("3. Effectuer une soustraction ?\n");
 printf("4. Effectuer une division ?\n");
 printf("Quel est votre choix? \n");
 scanf("%d",&choix);
 return choix;
}
/*************************************************************************************************************/
void exercice3q1()/* Questions 1 */    /*si ... alors*/
{
 int choix=menu();

 if(choix==1)
 	printf("Vous avez choisi une multiplication ");
 if(choix==2)
 	printf("Vous avez choisi une addition ");
 if(choix==3)
 	printf("Vous avez choisi une soustraction ");
 if(choix==4)
	 printf("Vous avez choisi une division ");
 if((choix!=1)&&(choix!=2)&&(choix!=3)&&(choix!=4))
  printf("Aucune opération ne correspondent à ce chiffre !.");
}
/*************************************************************************************************************/
void exercice3q2()/* Questions 2 */    /*si ... alors ...sinon*/
{
 int choix=menu();

 if(choix==1)
 	printf("Vous avez choisi une multiplication ");
 else if(choix==2)
 	printf("Vous avez choisi une addition ");
 else if(choix==3)
 	printf("Vous avez choisi une soustraction ");
 else if(choix==4)
	 printf("Vous avez choisi une division ");
 else
  printf("Aucune opération ne correspondent à ce chiffre !.");
}
/*************************************************************************************************************/
void exercice3q3()/* Questions 3 */    /*switch .. case*/
{
 int choix=menu();
 switch (choix)
 {
 	case 1:
 		printf("Vous avez choisi une multiplication ");
 		break;
 	case 2:
 		printf("Vous avez choisi une addition ");
 		break;
 	case 3:
 		printf("Vous avez choisi une soustraction ");
 		break;
 	case 4:
		 printf("Vous avez choisi une division ");
		 break;
 	default:
 	 printf("Aucune opération ne correspondent à ce chiffre !.");
 	break;
 }
}
/******************************************* Exercice4   ****************************************************************************/
void exercice4()
{
 float n;
 printf("Entrez un entier n\n");
 scanf("%f",&n);
 if(n>100)
  fprintf(stderr,"Erreur depassement de capacité\n");
 else
 	{
   if((int)n%2==0)
   	{
   	 n+=20;
   	 n/=2;
   	 printf("%d\n",(int)n);
    }
   else
		{
		 if(n>31)
		 	{
			 n-=15;
			 printf("%f",n);
		  }
		 else
		  printf("%f",n);
		}
	 }
}
/******************************************* Exercice5   ****************************************************************************/
void exercice5()
{
 char nom[50],prenom[50];
 int i;
 printf("Entrez le nom \n");
 scanf("%s",nom);
 printf("Entrez le prenom \n");
 scanf("%s",prenom);
 i=0;
 nom[0]=toupper(nom[0]);
 prenom[0]=toupper(prenom[0]);
 for(i=1;i<strlen(nom);i++)
  {
   nom[i]=tolower(nom[i]);
  }
 for(i=1;i<strlen(prenom);i++)
  {
   prenom[i]=toupper(prenom[i]);
  }
 printf("Bonjour Monsieur %s %s  \n",nom,prenom);
}
/******************************************* Exercice6   ****************************************************************************/
void exercice6()
{
 int a,b,c,max;
 printf("Entrez le premier entier \n");
 scanf("%d",&a);
 printf("Entrez le deuxieme entier \n");
 scanf("%d",&b);
 printf("Entrez le troisieme entier \n");
 scanf("%d",&c);
 max=a;
 if(b>=max)
 	max=b;
 if(c>=max)
 	max=c;
  printf("Le maximum entre %d,%d et %d est :  %d\n",a,b,c,max);
}
/******************************************* Exercice7   ****************************************************************************/
float S(int n)
{
 int k=0;
 float s,sn;
 if(n<1)
  return 0;
 for(k=1;k<=n;k++)
	 {
	  s=s+pow(k,-1);
	  sn=s-log(n);
	 }
 return sn;
}
void exercice7()
{
 float sn=0,s=0,epsilon;
 int k;
 long int n=100;
  printf("Pour le 100e terme , l'algorithme calcule les 100 premiers termes de la suite sn");
	for(k=1;k<=n;k++)
	 {
	  s=s+pow(k,-1);
	  sn=s-log(n);
	  printf("%8.7f\n",sn);
	}
 printf("\nAppuyez sur la touche entree pour continuer ...\n ");
 getchar();
 printf("\n5000000 premiers termes de la suite sn : ");
 n=5000000;
 sn=0,s=0;
 for(k=1;k<=n;k++)
	 {
	  s=s+pow(k,-1);
	  sn=s-log(n);
	  printf("%8.7f\n",sn);
	 }
 epsilon=pow(10,-6);
 for(n=1;(fabs(S(n)-0.7752176)>=epsilon);n++);
   printf("l’entier n pour lequel |Sn-γ|<epsilon est :(infini je pense !) %ld\n",n-1);


}
/******************************************* Exercice8   ****************************************************************************/
void exercice8()
{

 printf("Les identificateurs valides pour l’algorithmique sont : \n");
 printf(" CotonouCaBouge \n cotonou_ca_bouge \n MandelaCestUnGrandHomme \n phone \n");
 printf(" matrices\n Exercice3 \n");
 printf("\n JUSTIFICATION :   \n\n Les identificateurs cites ci-dessus sont valides en algorithmique car \nils respectent les ");
 printf("regles de nommage predefinies en algorithmique a savoir : \nLe nom d'un identificateur ou variable \n");
 printf("\t Ne peut contenir que des lettres miniscules , majuscules et des chiffres\n");
 printf("\t Doit commencer par une lettre \n");
 printf("\t Les espaces sont interdits ,mais on peut utiliser le caractere underscore _  pour separer des mots.");
 printf("\n\t\t C'est le seul caractere different des lettres et chiffres autorise.\n");
 printf("\t Les accents et autres caracteres speciaux sont interdits .\n");
 
}
/******************************************* Exercice9   ****************************************************************************/
Bool is_natural_integer(float f)
{
  int i=(int)f;
  if(f==i)
      return true;
  return false;
}

void exercice9()
{
float a,b,c,A,a1,a2,x,y;
 printf("Entrez les coefficients de votre equation (aX²+bX+c = 0 ) a,b et c successivement !\n");
 scanf("%f%f%f",&a,&b,&c);
 if(a!=0)
 {
 	A=pow(b,2)-(4*a*c);
 	if(A>0)
 		{
 			x=((-b)-sqrt(A))/(2*a);
 			y=((-b)+sqrt(A))/(2*a);
 			printf("Votre equation admet deux solutions reelles distinctes qui sont :\n");
 			if(is_natural_integer(x))
		 		printf("\tr1 = %d\n",(int)x);
		 	else
		 		printf("\tr1 = %f\n",x);
 			if(is_natural_integer(y))
				printf("\tr2 = %d\n",(int)y);
			else
		 		printf("\tr2 = %f\n",y);
 		}
 	else if(A<0)
 		{
			a1=(-b)/(2*a);
	 		a2=(sqrt(-A))/(2*a);
	 		printf("Votre equation admet deux solutions complexes conjuguees qui sont : (remarquez le signe ± )\n");
	 		if(is_natural_integer(a1))
		 		printf("\ta = %d",(int)a1);
		 	else
		 		printf("\ta = %f",a1);
	 		if(is_natural_integer(a2))
				printf("±(%d)i\n",(int)a2);
			else
				printf("±(%f)i\n",a2);
 		}
 	else
 		{
 		 y=(-b)/(2*a);
 		 if(is_natural_integer(y))
     	printf("Votre equation admet une double solution reelle qui est : r0 = %d\n",(int)y);
     else
     	printf("Votre equation admet une double solution reelle qui est : r0 = %f\n",y);
     
    }
 }
 else
 	{
 		if(b!=0)
 			{
 			 x=(-c/b);
 			 if(is_natural_integer(x))
 				 printf("Votre equation admet une unique solution qui est r= %d",(int)x);
 			 else
 			 	 printf("Votre equation admet une unique solution qui est r= %f",x);	
 			}
 		else
 			{
 				if(c!=0)
 					printf("Impossible de resourdre une telle equation.Votre equation est invalide.Veuillez reverifier les coefficients.");
 				else
 					printf("Tout reel de |R est solution de votre equation .");
 			}
 	}
}
/******************************************* Exercice10   ****************************************************************************/
float Un(float x,int n)
{
 if(n==0)
	return 2;
 return (Un(x,n-1)+(x/Un(x,n-1)))/2;
}
void exercice10()
{
 int n=0;
 float x;
 do
 {
 	printf("Entrez une valeur positive x \n");
	scanf("%f",&x);
 }while(x<=0);
 printf("\n\nn   Un\n");
 while(fabs(Un(x,n)-sqrt(x))>=0.0001)
  {
   printf("\n\n%d   %.4f\n",n,Un(x,n));
   n++;
  }

}
/******************************************* Exercice11   ****************************************************************************/
void exercice11()
{
 int Nmax=10,i=0,j=0,n;
 do
 {
 	printf("Entrez l'entier n avec 1<=n<=10 \n");
	scanf("%d",&n);
 }while((n<1)||(n>Nmax));
 for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=i;j++)
 			{
 				printf("%d ",j);
 			}
 		printf("\n");
 	}
}
/******************************************* Exercice12   ****************************************************************************/
void exercice12()
{
 int i=0,j=0,n,k,b=1;
 do
 {
 	printf("Entrez l'entier positif \n");
	scanf("%d",&n);
 }while(n<0);
 if(n%10==n)/*Pour savoir si le nombre n est un nombre a un seul chiffre*/
  {
	 k=n;
	 do
	 {
		 for(i=1;i<=k;i++)
		 	{
		 		printf("%d ",i);
		 	}
		 	printf("\n");
		 	k--;
		 	j++;
		 	for(i=1;i<=j;i++)
		 	{
		 		printf("* ");
		 	}
		 	b++;
	 }while(b!=n);
	 printf("1\n");
  }
  
 
 else/*Pour savoir si le nombre n est un nombre a au moins deux  chiffre*/
  {
	 k=n;
	 do
	 {
		 for(i=1;i<=k;i++)
		 	{
		 		printf("%2d ",i);
		 	}
		 	printf("\n");
		 	k--;
		 	j++;
		 	for(i=1;i<=j;i++)
		 	{
		 		printf(" * ");
		 	}
		 	b++;
	 }while(b!=n);
	 printf(" 1\n");
  }
 
}
/******************************************* Exercice13   ****************************************************************************/
void exercice13()
{
  int x,i,j,k,l,n=0;
   do
    {
     printf("Entrez un entier impair x \n");
     scanf("%d",&x);
    }while(x%2==0);
   k=2*x-1;
   for(i=0;i<x;i++)
    {
     for(l=0;l<n;l++)
      {
       printf(" ");
      }
     n++;
     if(k!=1)
      {
		   for(j=0;j<k;j++)
		    {
		      printf("*");
		    }
		   }
     k-=2;
     if(k!=1)
      printf("\n");
   }
  k=1;
  n--;
  for(i=0;i<x;i++)
    {
		   for(l=0;l<n;l++)
		    {
		     printf(" ");
		    }
     n--;
     for(j=0;j<k;j++)
      {
       printf("*");
      }
     k+=2;
     printf("\n");
   }
   
}
/******************************************* Exercice14   ****************************************************************************/
void exercice14()
{
 int i=0,n=0,a,b,c=1,j=0,e;
 do
 {
 	printf("Entrez l'entier impair n \n");
	scanf("%d",&n);
 }while((n%2)==0);
 a=n;
 b=n-1;
 e=1;
 while(i!=(2*n)-1)
 	{
 		if(i<n)
 			{
		 		for(j=0;j<b;j++)
		 			{
		 				printf("   ");
		 			}
		 		b--;
		 		for(j=0;j<c;j++)
		 			{
						printf(" * ");
		 			}
		 		printf("\n");
		 		c+=2;
		 	}
		else
 			{
 				for(j=0;j<e;j++)
		 			{
		 				printf("   ");
		 			}
		 		e++;
 				for(j=0;j<c-4;j++)
		 			{
						printf(" * ");
		 			}
		 		printf("\n");
		 		c-=2;
 			}
 		i++;
 	}
}
/******************************************* Exercice15   ****************************************************************************/
void exercice15()
{
	int n,i,j;
	printf("Entrez l'entier n \n");
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
		{
			for(i=0;i<n;i++)
				{
					printf("*");
					printf("  ");
				}
			printf("\n");
			
			for(i=0;i<n;i++)
				{
					printf("  ");
					printf("*");
				}
			printf("\n");
		}
}
/******************************************* Exercice16   ****************************************************************************/
void exercice16()
{
 int a,b;
 printf("Entrez les entiers a et b \n");
 scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
  printf("a= %d et  b=%d \n",a,b);
}
/******************************************* Exercice17   ****************************************************************************/
void exercice17()
{
 int n,i,s=0;
 printf("Entrez l'entier naturel n \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 	{
 	 s=s+i;
 	}
 printf("La somme des %d premiers entiers naturels est : %d",n,s);
}
/******************************************* Exercice18   ****************************************************************************/
void exercice18()
{
 int n,i,s=0;
 printf("Entrez l'entier naturel n \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 	{
 	 if((i%2)!=0)
 	 	s=s+i;
 	}
 printf("La somme des %d premiers entiers naturels impairs est : %d",n,s);
}
/******************************************* Exercice19   ****************************************************************************/
void exercice19()
{
 int n,i,s=0;
 printf("Entrez l'entier naturel n \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 	{
 	 if((i%2)==0)
 	 	s=s+i;
 	}
 printf("La somme des %d premiers entiers naturels pairs est : %d",n,s);
}
/******************************************* Exercice20   ****************************************************************************/
void exercice20()
{
 int n,i,s1=0,s2=0;
 printf("Entrez l'entier naturel n \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 	{
 	 s1+=pow(i,2);
 	}
 for(i=1;i<=n;i++)
 	{
 	 s2+=pow(i,3);
 	}
 printf("La somme S1=%d et S2=%d\n",s1,s2);
}
/******************************************* Exercice21   ****************************************************************************/
int factoriel(int n)
{
	if(n==0)
		return 1;
	return n*factoriel(n-1);
}
void exercice21()
{
	int n;
	printf("Entrez l'entier n ");
  scanf("%d",&n);
  printf("%d!=%d",n,factoriel(n));
}
/******************************************* Exercice22   ****************************************************************************/
void exercice22()
{
 int i,a,b;
 do
 {
	 printf("Entrez les entiers naturels a et b avec a<b\n");
	 scanf("%d%d",&a,&b);
 }while(a>=b);
 for(i=a;i<=b;i++)
 	{
 	 if((i%2)==0)
		 printf("%d\n",i);
 	}
}
/******************************************* Exercice23   ****************************************************************************/
int min(int h,int g)
{
  if(h<g)
     return h;
  return g; 
}

void exercice23()
{
	int a,b,c,n=0,mini=0,*tab,max,*tab1;
	printf("\n~~~~~~~~~~~~~~~~~~   Minimum   ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Entrez les deux entiers naturels a et b \n");
	scanf("%d%d",&a,&b);
  printf("Le minimum entre %d et %d est : %d\n",a,b,min(a,b));
  printf("\nEntrez les trois entiers naturels a , b et c\n");
	scanf("%d%d%d",&a,&b,&c);
	mini=a;
 	if(b<mini)
 		mini=b;
 	if(c<mini)
 		mini=c;
	printf("Le minimum entre %d , %d et %d est : %d",a,b,c,mini);
	
	printf("\nVous voulez connaitre le minimum parmi n entiers naturels \n Entrez donc n : \n");
	scanf("%d",&n);
	tab=malloc(n*sizeof(int));
	if(tab==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
	printf("Entrez les %d entiers naturels \n",n);
	for(a=0;a<n;a++)
		{
			scanf("%d",&tab[a]);
		}
	mini=tab[0];
	for(a=0;a<n;a++)
		{
			if(tab[a]<mini)
 				mini=tab[a];
		}
	printf("Le minimum parmi les %d entiers naturels donnes est : %d \n",n,mini);
	/*                    Versions modifiées de ces programmes pour calculer des maximum de nombres                              */
	printf("\n\nVersions modifiées de ces programmes pour calculer des maximum de nombres\n\n");
	printf("\n~~~~~~~~~~~~~~~~~~   Maximum   ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	n=a=b=c=0;
	
	printf("Entrez les deux entiers naturels a et b \n");
	scanf("%d%d",&a,&b);
  printf("Le maximum entre %d et %d est : %d\n",a,b,-min(-a,-b));
  printf("\nEntrez les trois entiers naturels a , b et c\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
 	if(b>max)
 		max=b;
 	if(c>max)
 		max=c;
	printf("Le maximum entre %d , %d et %d est : %d",a,b,c,max);
	printf("\nVous voulez connaitre le maximum parmi n entiers naturels \n Entrez donc n : \n");
	scanf("%d",&n);
	tab1=malloc(n*sizeof(int));
	if(tab1==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
	printf("Entrez les %d entiers naturels \n",n);
	for(a=0;a<n;a++)
		{
			scanf("%d",&tab1[a]);
		}
	max=tab1[0];
	for(a=0;a<n;a++)
		{
			if(tab1[a]>max)
 				max=tab1[a];
		}
	printf("Le maximum parmi les %d entiers naturels donnes est : %d \n",n,max);
	
	free(tab);
	free(tab1);
}
/******************************************* Exercice24   ****************************************************************************/
int fibonacci(int m)
{
 if(m==0)
 	return 1;
 else if(m==1)
 	return 1;
 return fibonacci(m-1)+fibonacci(m-2);
}
void exercice24()
{
	int m,i;
	printf("Entrez l'entier m\n");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
		{
		 printf("%d eme terme :  %d\n",i,fibonacci(i));
		}
}
/******************************************* Exercice25   ****************************************************************************/
void exercice25()
{
 int i,n,*tab,s=0;
 printf("Entrez la taille de votre tableau d'entier A  \n");
 scanf("%d",&n);
 tab=malloc(n*sizeof(int));
 if(tab==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
 printf("Entrez les %d elements  de votre tableau A\n",n);
 for(i=0;i<n;i++)
 	{
 	 	scanf("%d",&tab[i]);
 	}
 for(i=0;i<n;i++)
 	{
 	 	s+=tab[i];
 	}
 printf("La somme des elements de votre tableau A est : %d\n",s);
}
/******************************************* Exercice26   ****************************************************************************/
void exercice26()
{
	int i,j,n,m;
	float **tab=NULL;
	printf(" Entrez les dimensions m,n du tableau d’entiers de dimension 2.");
	scanf("%d%d",&m,&n);
	tab=malloc(m*sizeof(float *));
	if(tab==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
	for(i=0;i<n;i++)
		{
			tab[i]=malloc(n*sizeof(float));
		}
	printf(" Prise des elements  du tableau d’entiers de dimension 2.\n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Donner s.v.p., l’entier de la ligne %d et de la colonne %d :  ",i,j);
				scanf("%f",&tab[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(!is_natural_integer(tab[i][j]))
					{
					 do
					 {
						printf("La donnee de la ligne %d et de la colonne %d est erronee .\nVeuillez rentrer une donnee entiere !\n",i,j);
						scanf("%f",&tab[i][j]);
					 }while(!is_natural_integer(tab[i][j]));
					}
			}
		}
   free(tab);

}
/******************************************* Exercice27   ****************************************************************************/
void exercice27()
{
 int n=0,i,tab[10][10];
 printf("\nTABLE DE MULTIPLICATION avec tableau\n\n");
 for(n=0;n<10;n++)
 	for(i=0;i<10;i++)
 		tab[n][i]=i+1;
 printf("x");
 for(i=0;i<10;i++)
 	printf("%5d",i+1);
 printf("\n\n");
 for(n=0;n<10;n++)
  {
    printf("%d",n+1);
	 	for(i=0;i<10;i++)
	 		printf("%5d",tab[n][i]*tab[i][n]);
	 	printf("\n\n");
	}
	printf("\nTABLE DE MULTIPLICATION sans tableau\n\n");
	printf("x");
	for(i=0;i<10;i++)
 		printf("%5d",i+1);
 	printf("\n\n");
	for(n=0;n<10;n++)
  {
    printf("%d",n+1);
	 	for(i=0;i<10;i++)
	 		printf("%5d",(n+1)*(i+1));
	 	printf("\n\n");
	}

}
/******************************************* Exercice28   ****************************************************************************/
int comb(int p,int n)
{
 if(p==0)
 	return 1;
 else if(p==n)
 	return 1;
 else if(p==1)
 	return n;
 return comb(p-1,n-1)+comb(p,n-1);
}
void exercice28()
{
 int i,j;
 for(i=0;i<=20;i++)
  {
   for(j=0;j<=i;j++)
    {
     printf("%7d",comb(j,i));
    }
   printf("\n");
  }
}
/******************************************* Exercice29   ****************************************************************************/
void exercice29()
{
 int i=0,j=0,min=0,n,*A,tmp;
 printf("Entrez la taille du tableau d'entiers A ");
 scanf("%d",&n);
 A=malloc(n*sizeof(int));
 printf("Prise des elements du tableau A \n");
 for(j=0;j<n;j++)
	{
		scanf("%d",&A[j]);
	}
 for(i=0;i<n;i++)
  {
   min=i;
   for(j=i;j<n;j++)
    {
      if(A[j]<A[min])
        min=j;
    }
    tmp=A[min];
    A[min]=A[i];
    A[i]=tmp;
  }
 
  printf("Affichage du tableau trié par selection \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
}
/******************************************* Exercice30  ****************************************************************************/
void exercice30()
{
 int i=0,j=0,n,*A,tmp,k=0;
 printf("Entrez la taille du tableau d'entiers A ");
 scanf("%d",&n);
 A=malloc(n*sizeof(int));
 printf("Prise des elements du tableau A \n");
 for(j=0;j<n;j++)
	{
		scanf("%d",&A[j]);
	}
 do
 {
   k=0;
	 for(i=0;i<=n-2;i++)
		{
		    if(A[i]>A[i+1])
		     {
		      tmp=A[i];
		      A[i]=A[i+1];
		      A[i+1]=tmp;
		      k++;
		     }
		}
	}while(k!=0);
 
  printf("Affichage du tableau trié par bulle \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
  printf("\n\nModification du programme pour affichage du tableau trié par bulle par pas decroissant \n");
  do
	 {
		 k=0;
		 for(i=0;i<=n-2;i++)
			{
				  if(A[i]<A[i+1])
				   {
				    tmp=A[i];
				    A[i]=A[i+1];
				    A[i+1]=tmp;
				    k++;
				   }
			}
		}while(k!=0);
 
  printf("\nAffichage du tableau trié par bulle \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
  
  
}
/******************************************* Exercice31   ****************************************************************************/
void triFusion(int i, int j, int tab[], int tmp[])
{

  int m=(i+j)/2;
  int pg=i;
  int pd=m+1;
  int c;
    if(j<=i)
     return;
    triFusion(i,m,tab,tmp);
    triFusion(m+1,j,tab,tmp);
    
    for(c=i;c<=j;c++)
    {
        if(pg==m+1)
        {
         tmp[c]=tab[pd];
         pd++;
        }
        else if(pd==j+1)
        {
         tmp[c]=tab[pg];
         pg++;
        }
        else if(tab[pg]<tab[pd])
        {
         tmp[c]=tab[pg];
         pg++;
        }
        else
        {
         tmp[c]=tab[pd];
         pd++;
        }
    }
    for(c=i;c<=j;c++)
    {
     tab[c]=tmp[c];
    }
}
void tri_rapide(int tab[],int deb,int fin)
{
	const int pivot = tab[deb];
	int pos=deb;
	int i;
	if (deb>=fin)
	 return;
	for (i=deb; i<fin ; i++)
	 {
	  if (tab[i]<pivot)
	   {
	    tab[pos]=tab[i];
	    pos++;
	    tab[i]=tab[pos];
	    tab[pos]=pivot;
	   }
	  }
	tri_rapide(tab,deb,pos);
	tri_rapide(tab,pos+1,fin);
}

void exercice31()
{
int i=0,j=0,n,*A,tmp,k=0,x,*B;
void *h;
printf("\t Tri par insertion  \n");
 printf("Entrez la taille du tableau d'entiers A ");
 scanf("%d",&n);
 A=malloc(n*sizeof(int));
 printf("Prise des elements du tableau A \n");
 for(j=0;j<n;j++)
	{
		scanf("%d",&A[j]);
	}
  for(i=1;i<=n-1;i++)
	 {
		 x=A[i];
		 k=i;
		 while((k>0)&&(A[k-1]>x))
			{
				    A[k]=A[k-1];
				    k-=1;
			}
		A[k]=x;
		}
  printf("\nAffichage du tableau trié par insertion \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
  free(A);
  printf("\n\t Tri par fusion  \n");
  printf("Entrez la taille du tableau d'entiers A ");
	 scanf("%d",&n);
	 A=malloc(n*sizeof(int));
	 B=malloc(n*sizeof(int));
	 printf("Prise des elements du tableau A \n");
	 for(j=0;j<n;j++)
		{
			scanf("%d",&A[j]);
		}
  triFusion(0, n-1,A,B);
  printf("\nAffichage du tableau trié par fusion \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
  printf("\n\t Tri rapide  \n");
  n=0;
  printf("Entrez la taille du tableau d'entiers A ");
	scanf("%d",&n);
	h=realloc(A,n*sizeof(int));
	printf("Prise des elements du tableau A \n");
	 for(j=0;j<n;j++)
			scanf("%d",&A[j]);
	tri_rapide(A,0,n);
	printf("\nAffichage du tableau trié par tri rapide \n");
  for(j=0;j<n;j++)
    {
     printf("%d ",A[j]);
    }
  free(A);
  free(B);
}
/******************************************* Exercice32   ****************************************************************************/
void dicho(int Tab[],int a,int b,int n)
{
	int iMilieu=0,iTrouve=0;
	iTrouve=0;
	while((a<=b)&&(iTrouve==0))
		{
		 iMilieu=(a+b)/2;
		 if(Tab[iMilieu]==n) 
				iTrouve=1;
		 else
				{
					if(Tab[iMilieu]>n) 
					 b=iMilieu-1;
					else 
					 a=iMilieu+1;
				}
		}
	if(!iTrouve)
	 printf("La valeur recherchée n'est pas dans le tableau !!!\n");
	else 
		 printf("La valeur recherchée a été trouvée dans le tableau . \n");
	}
void exercice32()
{
 int i=0,n,x,*A,k=0;
 void *h;
                                 /*********************  Recherche sequentielle  ************************/
 printf("\n Recherche sequentielle \n\n ");
 printf("Entrez la taille du tableau d'entiers ");
 scanf("%d",&n);
 A=malloc(n*sizeof(int));
 printf("Prise des elements du tableau \n");
 for(i=0;i<n;i++)
	scanf("%d",&A[i]);
 printf("Entrez l'entier que vous recherchez : ");
 scanf("%d",&x);
 for(i=0;i<n;i++)
  {
   if(A[i]==x)
     k=i+1;
  }
 if(k==0)
  printf("L'entier %d n'est pas dans le tableau \n",x);
 else
  printf("L'entier %d a été trouvée dans le tableau a la position %d (derniere position d'apparition) \n",x,k);


                                /*********************  Recherche dichotomique  ************************/
 n=0;
 printf("\n\n Recherche dichotomique \n\n ");
 printf("Entrez la taille du tableau d'entier trié ");
 scanf("%d",&n);
 h=realloc(A,n*sizeof(int));
 printf("Prise des elements du tableau d'entier \n");
 for(i=0;i<n;i++)
	scanf("%d",&A[i]);
 ordonnerTableau(A,n);
 printf("Entrez l'entier que vous recherchez : ");
 scanf("%d",&x);
 dicho(A,0,n,x);
 
 free(A);
 
}
/******************************************* Exercice33   ****************************************************************************/
void exercice33()
{
 int n,m,i,j,c,k,*tab1,*tab2,*tab,taille;

   printf("Programme pour intersection ");
   printf("de deux tableaux triés\n");
   printf("Entrez la taille du premier tableau\n");
   scanf("%d",&n);
   tab1=malloc(n*sizeof(int));
   if(tab1==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
   printf("\nEntrez les données du premier tableau\n");
   for(j=0;j<n;j++)
      scanf("%d",&tab1[j]);
   printf("Entrez la taille du second tableau\n");
   scanf("%d",&m);
   tab2=malloc(m*sizeof(int));
   if(tab2==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
   printf("\nEntrez les données du second tableau\n");
   for(j=0;j<m;j++)
      scanf("%d",&tab2[j]);
   tab=malloc((m+n)*sizeof(int));
   if(tab==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
    c=0;
   for(i=0;i<n;i++)
   	{
   		for(j=0;j<m;j++)
    		if(tab1[i]==tab2[j])
    			{
    			 tab[c]=tab2[j];
    			 c++;
    			}
    }
    taille=c;
   for(i=0;i<c;i++)
     {
		   for(j=i+1;j<c;j++)
		   	{
		     if(tab[i]==tab[j])
		     	 supprime_valeur(tab,j,&taille);/*Pour supprimer les repetitions de valeurs*/
		    }
		 }
		 
	 ordonnerTableau(tab,taille);
   if(c==0)
   	printf(" L'intersection des deux tableaux est vide \n");
   else
		{
		  printf(" L'intersection des deux tableaux est :  [");
		   for(j=0;j<taille;j++)
				{
					printf("%d ",tab[j]);
				}
		   printf("]\n");
		}
   exercice36();

}
/******************************************* Exercice34   ****************************************************************************/
void additionMatrice(double **mat,double **matt,int t,int o)
{
  int i,j,i1,j1;
  for(i=0,i1=0;i<t,i1<t;i++,i1++)
  {
    for(j=0,j1=0;j<o,j1<o;j++,j1++)
    {
      printf("%f ",mat[i][j]-matt[i1][j1]);
    }
   printf("\n");
  }
}
void TransposeeMatrice(double **mat, int t,int o)
{
  int i,j;
 for(i=0;i<t;i++)
  {
    for(j=0;j<o;j++)
    {
      printf("%4f ",mat[j][i]);
    }
    printf("\n");
	}
}
Bool is_same_element(int *tab,int len)
{
 int i=0,k=0,j=0;
 for(i=0;i<len;i++)
  {
	 for(j=i+1;j<len;j++)
	 	 {
		  if(tab[i]!=tab[j])
		     k++;
		 }
  }
 if(k==0)
  return true;
 return false;
}
void exercice34()
{
 int i,j,n,m,*indicen=NULL,*indicem=NULL,k;
 double ***tab=NULL,**sum=NULL,**prod=NULL;
 float **mat=NULL,a=0;
 printf("Entrez un nombre de matrices \n");
 scanf("%d",&n);
 indicen=malloc(n*sizeof(int));
 if(indicen==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
 indicem=malloc(n*sizeof(int));
 if(indicem==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
 tab=malloc(n*sizeof(double **));
 if(tab==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
  printf("  Entrez les dimensions de ces matrices \n");
  for(i=0;i<n;i++)
   {
    printf("\tNombre de lignes la matrice : %d\n",i+1);
    scanf("%d",&indicen[i]);
    printf("\tNombre de colonnes la matrice : %d\n",i+1);
    scanf("%d",&indicem[i]);
   }
  for(i=0;i<n;i++)
   {
    tab[i]=malloc(indicen[i]*sizeof(double *));
   }
  if(tab==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
  for(i=0;i<n;i++)
   {
    for(j=0;j<indicen[i];j++)
      tab[i][j]=malloc(indicem[i]*sizeof(double));
   }
  if(tab==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
  printf("Prise des elements des matrices\n");
  i=j=k=0;
  for(i=0;i<n;i++)
   {
    for(j=0;j<indicen[i];j++)
     {
      for(k=0;k<indicem[i];k++)
       {
        printf("Donner S.V.P. le réel ou entier de la ligne %d et de la colonne %d de la matrice %d \n",j,k,i);
        scanf("%lf",&tab[i][j][k]);
       }
     }
    printf("\n\n");
   }
/*Affichage */

for(i=0;i<n;i++)
   {
    printf("Matrice %d \n",i);
    for(j=0;j<indicen[i];j++)
     {
      for(k=0;k<indicem[i];k++)
       {
        printf("%f ",tab[i][j][k]);
       }
      printf("\n");
     }
    printf("\n\n");
   }

/* Verification de possibilite de somme ou produit                    */
/* Somme     */
 if(is_same_element(indicen,n) && is_same_element(indicem,n))
  {
   sum=malloc(indicen[n-1]*sizeof(double *));
   for(i=0;i<indicen[n-1];i++)
    sum[i]=malloc(indicem[n-1]*sizeof(double));
   if(sum==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
   
   for(i=0;i<indicen[n-1];i++)
    for(k=0;k<indicem[n-1];k++)
     sum[i][k]=0;
   
   for(k=0;k<indicem[n-1];k++)
		 {
		  for(j=0;j<indicen[n-1];j++)
		   {
		    for(i=0;i<n;i++)
		     {
		      sum[j][k]+=tab[i][j][k];
		     }
		   }
		 }
   printf("\nLa matrice somme de ces matrices est : \n");
   
   for(i=0;i<indicen[n-1];i++)
		{
		 for(j=0;j<indicem[n-1];j++)
		  {
		   printf("%f ",sum[i][j]);
		  }
		 printf("\n");
		}
   
  }
 else
  printf("\nLa somme de ces matrices est impossible ! Veuillez revoir les dimensions\n");
/*   Produit      */
k=1;
 for(i=0;i<n;i++)
	{
	 if(indicem[i]==indicen[i+1])
	    k++;
	}
 if(k==n)
   {
    prod=malloc(indicen[0]*sizeof(double *));
    for(i=0;i<indicen[0];i++)
    prod[i]=malloc(indicem[n-1]*sizeof(double));
		 if(sum==NULL)
		 {
		    fprintf(stderr,"Dynamic allocation error !");
		    exit(EXIT_FAILURE);
		 }
		 
		 for(i=0;i<indicen[0];i++)
		  for(k=0;k<indicem[n-1];k++)
		   prod[i][k]=1;
     for(i=0;i<indicen[0];i++)
			{
			 for(j=0;j<indicem[n-1];j++)
				{
				 printf("%f ",prod[i][j]);
				}
			 printf("\n");
			}
   
   }
 else
   printf("\nLe produit de ces matrices est impossible ! Veuillez revoir les dimensions\n");
 
 printf("Difference de deux matrices ");
 printf("Dimension des deux matrices (lignes,colonnes) ");
 scanf("%d%d",&n,&m);
 sum=malloc(n*sizeof(double *));
  for(i=0;i<n;i++)
    sum[i]=malloc(m*sizeof(double));
   if(sum==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
   
   for(i=0;i<n;i++)
    for(k=0;k<m;k++)
     sum[i][k]=0;
     
  prod=malloc(n*sizeof(double *));
  for(i=0;i<n;i++)
    prod[i]=malloc(m*sizeof(double));
   if(prod==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
   
   for(i=0;i<n;i++)
    for(k=0;k<m;k++)
     prod[i][k]=0;
 printf("Prise des elements des matrices\n");
  i=j=k=0;
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     {
        printf("Donner S.V.P. le réel ou entier de la ligne %d et de la colonne %d de la matrice \n",i,j);
        scanf("%lf",&sum[i][j]);
      }
    printf("\n\n");
   }
  i=j=k=0;
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     {
        printf("Donner S.V.P. le réel ou entier de la ligne %d et de la colonne %d de la matrice \n",i,j);
        scanf("%lf",&prod[i][j]);
      }
    printf("\n\n");
   }
  additionMatrice(sum,prod,n,m);
   
  printf("Transposee d'une matrice\n ");
	 printf("Dimension de la matrice (lignes,colonnes) ");
	 scanf("%d%d",&n,&m);
	 sum=malloc(n*sizeof(double *));
  for(i=0;i<n;i++)
    sum[i]=malloc(m*sizeof(double));
   if(sum==NULL)
   {
      fprintf(stderr,"Dynamic allocation error !");
      exit(EXIT_FAILURE);
   }
   for(i=0;i<n;i++)
    for(k=0;k<m;k++)
     sum[i][k]=0;
   printf("Prise des elements de la matrice\n");
  i=j=k=0;
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
     {
        printf("Donner S.V.P. le réel ou entier de la ligne %d et de la colonne %d de la matrice  \n",i,j);
        scanf("%lf",&sum[i][j]);
      }
    printf("\n\n");
   }
  TransposeeMatrice(sum,n,m);
   
  
  n=j=i=k=0;
  printf("== PROGRAMME DE CALCUL DU DETERMINANT D'UNE MATRICE CARREE DE TAILLE N ==\n");
  printf("==             Entrez la taille de votre matrice !                     ==\n");
  scanf("%d",&n);
  mat=malloc(n*sizeof(float *));
  for(i=0;i<n;i++)
   {
    mat[i]=malloc(n*sizeof(float));
   }
  printf("**Entrez les elements de votre matrice suivant la ligne ! **\n");
  for(i=0;i<n;i++)
   {
    for(k=0;k<n;k++)
     {
      scanf("%f",&mat[i][k]);
      }
    printf("\n");
   }
  a=determinant(mat,n);
  for(i=0;i<n;i++)
  {
   free((float *)mat[i]);
  }
  printf("==   Le determinant de votre matrice est : %f                         ==\n",a);
   free(tab);
  free(prod);
   free(sum);
}
float** matriceReduite(float **mat,int taille,int b,int c)
{
 float **Mat=NULL;
 int i=0,j=0,k=0,l=0,m=0,h=0;
 Mat=malloc((taille-1)*sizeof(float *));
 for(i=0;i<(taille-1);i++)
  {
    Mat[i]=malloc((taille-1)*sizeof(float));
  }
 for(i=0;i<taille;i++)
  {
   if(m!=h)
      l++;
   for(j=0;j<taille;j++)
    {
     h=m;
     if((i!=b)&&(j!=c))
      {
       Mat[l][m]=mat[i][j];
       m++;
      }
    }
   m=0;
  }
 for(i=0;i<(taille-1);i++)
  {
   for(j=0;j<(taille-1);j++)
    {
     printf("%.2f ",Mat[i][j]);
    }
   printf("\n");
  }
 printf("\n\n\n");
 return Mat;
}
float determinant(float **mat,int taille)
{
 int i=0;
 float Determinant=0;
 if(taille==1)
  {
    Determinant=mat[0][0];
  }
 else if(taille==2)
  {
   Determinant=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
  }
 else
 {
    for(i=0;i<taille;i++)
     {
       Determinant=Determinant+((pow(-1,i))*(mat[0][i])*(determinant(matriceReduite(mat,taille,0,i),taille-1)));
     }
 }
 return  Determinant;
 }
/******************************************* Exercice35   ****************************************************************************/

void exercice35()
{

int n;
int af;
int g,i,p,x;
int y=0;
int f,ligne,sol;
double temp;
int a,t;
long double e[11][10];
long double s[10];
printf("programme du pivot de gauss\nCombien d'equations a resourdre ?\nN= ");
scanf("%d",&n);
for ( i=0;i<n;i++)
{
	printf("equation %hd  ",i);
	for (p=0;p<n;p++)
	{
	 printf("v %hd = ",p);
	 scanf("%Lf",&e[p][i]);
	}
	printf("\n");
	printf("equation %hd = ",i);
	scanf("%Lf",&e[n][i]);
	printf("\n");
}	// on a saisi les facteurs des equations ds e[][]
for(x=0;x<n-1;x++)
{
 for(a=1+x;a<n;a++)
 {
	temp=e[x][a];

	for (t=x;t<n+1;t++)
	{
		e[t][a]=e[t][a]*e[x][x]-e[t][x]*temp;  /// triangulation du systeme.
	}
 }
}
// affichage test du tableau e
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
s[n-1]=e[n][n-1]/e[n-1][n-1];
e[n][n-1]=0;
e[n-1][n-1]=0;
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
for (ligne=1;ligne<=n;ligne++)
{
for (sol=2;sol<=n;sol++){
e[n-ligne][n-sol]*=s[n-ligne];
e[n][n-sol]-=e[n-ligne][n-sol];
e[n-ligne][n-sol]=0;
}
s[n-(ligne+1)]=e[n][n-(ligne+1)]/e[n-(ligne+1)][n-(ligne+1)];
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
}
printf("\n\nSolutions : \n");
for (af=0;af<n;af++){printf(" var %hd = %Lf",af,s[af]);}
}

/******************************************* Exercice36   ****************************************************************************/
void supprime_valeur(int *tab,int pos,int *taille)
{
 int i,tmp;
 for(i=0;i<*taille;i++)
  {
   if(i==pos)
    {
     tmp=tab[pos];
  	 tab[pos]=tab[*taille-1];
  	 tab[*taille-1]=tmp;
  	 pos=-1;
  	 	*taille=*taille-1;
  	}
  }
}

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


void exercice36()
{
int n,m,i,j,k,*tab1,*tab2,*tab,taille;
   printf("Programme pour Réunion ");
   printf("de deux tableaux triés\n");
   printf("Entrez la taille du premier tableau\n");
   scanf("%d",&n);
   tab1=malloc(n*sizeof(int));
   if(tab1==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
   printf("\nEntrez les données du premier tableau\n");
   for(j=0;j<n;j++)
      scanf("%d",&tab1[j]);
   printf("Entrez la taille du second tableau\n");
   scanf("%d",&m);
   tab2=malloc(m*sizeof(int));
   if(tab2==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
   printf("\nEntrez les données du second tableau\n");
   for(j=0;j<m;j++)
      scanf("%d",&tab2[j]);
   tab=malloc((n+m)*sizeof(int));
   taille=m+n;
   if(tab==NULL)
     {
        fprintf(stderr,"Dynamic allocation error !");
        exit(EXIT_FAILURE);
     }
   if(n<m)
    {
     for(j=0;j<n;j++)
       tab[j]=tab1[j];
     i=0;
     for(j=n;j<(n+m);j++,i++)
       tab[j]=tab2[i];
    }
   else
    {
     for(j=0;j<m;j++)
       tab[j]=tab2[j];
     i=0;
     for(j=m;j<(n+m);j++,i++)
       tab[j]=tab1[i];
    }
    
    for(i=0;i<(m+n);i++)
     {
		   for(j=i+1;j<(n+m);j++)
		   	{
		     if(tab[i]==tab[j])
		     	 supprime_valeur(tab,j,&taille);
		    }
		 }
		 ordonnerTableau(tab,taille);
		 printf("    La reunion des deux tableaux est :   [");
     for(j=0;j<taille;j++)
			{
				printf("%d ,",tab[j]);
			}
     printf(",]\n");
     free(tab);
     free(tab1);
     free(tab2);
}
/************************************************* Exercice37  ***************************************************************************/
float sum(float **tab,int fix,char dir,int fin)/*  Pour calculer la somme selon une direction donnee dans le tableau a double entree     */
{
 int i=0;
 float s=0;
 if(dir=='l')
  {
	 for(i=0;i<fin;i++)
		 s+=tab[i][fix];
	 s/=(fin);
  }
 else
  {
	 for(i=0;i<fin;i++)
		s+=tab[fix][i];
	 s/=(fin);
  }
  return s; 
}
void exercice37()
{
 int i,j,n,m;
 float s=0,**tab=NULL;
	printf("\nEntrez le nombre de lignes du tableau d'entiers : ");
	scanf("%d",&n);
	printf("Entrez le nombre de colonnes du tableau d'entiers : ");
	scanf("%d",&m);
	tab=malloc((n+1)*sizeof(float *));
	if(tab==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
	for(i=0;i<(n+1);i++)
		{
			tab[i]=malloc((m+1)*sizeof(float));
		}
	printf("\n\t Prise des elements  du tableau d’entiers \n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Donner s.v.p., l’entier de la ligne %d et de la colonne %d :  ",i+1,j+1);
				scanf("%f",&tab[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<m;i++)
		{
		 	tab[n][i]=sum(tab,i,'l',n); 
		}
	for(i=0;i<n;i++)
		{
		 	tab[i][n]=sum(tab,i,'c',m); 
		}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			 s+=tab[i][j];
	tab[n][m]=s/(n*m);
	for(i=0;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			{
			 if(!is_natural_integer(tab[i][j]))
			 	printf("%f  ",tab[i][j]);
			 else
			  printf("%d ",(int)tab[i][j]);
		  }
		  printf("\n");
	  }
	
  free(tab);
 
}
/************************************************* Exercice38  ********************************************************************/      
float Sn(int n)
{
 int i=0;
 float s=0;
 for(i=0;i<=n;i++)
  {
   s+=4*(pow(-1,i)/((2*i)+1));
  }
 return s;
}


void exercice38()
{      
  float pi0=0,epsilon=0;
  int m=0;
  printf(" Programme permettant de calculer l’entier m pour lequel |Sm-pi0| < epsilon \n");
  printf("Entrez pi0\n");    
  scanf("%f",&pi0);
  printf("Entrez epsilon\n");    
  scanf("%f",&epsilon);
  for(m=0;(fabs(Sn(m)-pi0)>=epsilon);m++);
  printf("l’entier m pour lequel |Sm-pi0|<epsilon est %d\n",m-1);
  printf("Pour pi0 = 3.14 et epsilon = 0.001 ,la valeur m pour laquelle |Sm-pi0|<epsilon est : m=384 \n");
  printf("Pour pi0 = 3.14159 et epsilon = 0.000001 ,la valeur m pour laquelle |Sm-pi0|<epsilon est : m=infini \n");
  
}     
/************************************************* Exercice39  **************************************************************************/
void exercice39()
{
 printf("Lorsqu’on exécute le programme avec a=11 et b=7,");
 printf("l'affichage produit est  : \n\n");
 printf("\tLa valeur actuelle de l’entier a est : 11 \n");
 printf("\tLa valeur actuelle de l’entier b est : 7 \n");
 printf("\tLa valeur actuelle de l’entier a est : 7 \n");
 printf("\tLa valeur actuelle de l’entier b est : 11 \n");
 printf("\n\nEn somme,le programme permute les valeurs de a et b sans utiliser de variable d'aide\n\n");
}
/******************************************* Exercice40  **************************************************************************/
int nombrelapin(int n)
{
 if(n==0)
   return 2;
 else if(n==1)
   return 2;
 else if(n==2)
   return 4;
 return nombrelapin(n-1)+nombrelapin(n-2);
}
void exercice40()
{
    int n=12,i=0,j=0;
    printf("Nombre de lapins au bout d'un an\n");
    for(i=0;i<=n;i++)
       printf("F%d = %d\n",i,nombrelapin(i));
    i=0;
    while(nombrelapin(i)<=1000000000)
      i++;
    printf(" C'est au bout de %d mois que le nombre de lapins dépasse le milliard\n",i);
}
/******************************************* Exercice41  **************************************************************************/
void exercice41()
{
 int A;
 printf("Entrez une annee \n");
 scanf("%d",&A);
 if((A%4)!=0)
  printf("L’année %d n’est pas bissextile\n",A);
 else
  {
   if(((A%100)==0)&&((A%400)!=0))
     printf("L’année %d n’est pas bissextile\n",A);
   else
   	 printf("L’année %d est bissextile\n",A);
  }
  
}
/******************************************* Exercice42  **************************************************************************/
void exercice42()
{
 int n,*tab,i,choix,s=0;
 printf("Donnez un nombre entier n désignant la taille d’un tableau d’entiers ");
 scanf("%d",&n);
 tab=malloc(n*sizeof(int));
	if(tab==NULL)
  {
   fprintf(stderr,"Erreur allocation dynamique !\n");
   exit(EXIT_FAILURE);
  }
 printf("Donner maintenant les éléments du tableau :\n");
 for(i=0;i<n;i++)
  {
   printf("\ttab[%d] = ",i);
   scanf("%d",&tab[i]);
  }
 printf("\ntab = [");
 for(i=0;i<n;i++)
  {
   printf("%d",tab[i]);
   if(i!=n-1)
    printf(",");
  }
 printf("]\n");
 printf("Choisissez maintenant l’opération que vous voulez faire : \n");
 printf("\t(0) Multiplication des éléments du tableau\n");
 printf("\t(1) Somme des éléments du tableau\n");
 printf("\t(Autre chiffre) opération indéterminée\n");
 scanf("%d",&choix);
 if(choix==0)
	{
	 s=1;
	 for(i=0;i<n;i++)
	 	{
	 	 	s*=tab[i];
	 	}
	 printf("La multiplication des elements de votre tableau est : %d\n",s);
	}
 else if(choix==1)
	{
	 for(i=0;i<n;i++)
	 	{
	 	 	s+=tab[i];
	 	}
	 printf("La somme des elements de votre tableau est : %d\n",s);
	}
 else
  printf("L’opération n’est pas prise en compte\n");
}
/******************************************* Exercice43  ***************************************************************************/
void exercice43()
{
 int n,Nmax=100,i=0,N=Nmax-1,tab[N],nombresPremiers[N],j,k=0;
 for(i=0;i<=N;i++)
 	tab[i]=i+1;
 for(i=0;i<=N;i++)
 	 nombresPremiers[i]=0;
 i=1;
   while(i<=N)
   {
		for(j=1;j<i;j++)
		 {
		  if((tab[i]%tab[j])==0)
		    {
		     k++;
		    }
		 }
		 if(k==0)
		 	 nombresPremiers[i]=1;
		 i++;
		 k=0;
		}
 for(j=0;j<=N;j++)
	{
	 if(nombresPremiers[j]==1)
	     printf("%d \n",tab[j]);
  }
 printf("\nAutre variante du programme qui demande un nombre entier n et qui affiche les nombres premiers avant ce nombre \n");
 printf("Entrez un entier \n");
 scanf("%d",&n);
 i=1;
   while(i<=n)
   {
		for(j=1;j<i;j++)
		 {
		  if((tab[i]%tab[j])==0)
		    {
		     k++;
		    }
		 }
		 if(k==0)
		 	 nombresPremiers[i]=1;
		 i++;
		 k=0;
		}
 for(j=0;j<n;j++)
	{
	 if(nombresPremiers[j]==1)
	     printf("%d \n",tab[j]);
  }
 if(nombresPremiers[n]==1)
	     printf("%d \n",tab[n]); 
 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  FIN DU PROGRAMME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
/************************************************  FIN ***********************************************************************************/
