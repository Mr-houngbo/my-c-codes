#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define R 100
//Definition de la structure Article 
typedef struct Article Article;
struct Article{
 int reference;
 char designation[R];
 int prixUnitaire;
};
//Fonction void lireArticle 
void lireArticle(Article articles[],int n)
{
 int a; 
 for(a=0;a<n;a++)
  { 
   printf("Entrez la reference de l'article N°%d!\n",a+1);
   scanf("%d",&articles[a].reference);
   printf("Entrez la designation de l'article N°%d!\n",a+1);
   scanf("%s",articles[a].designation);
   printf("Entrez le prix unitaire de l'article N°%d !\n",a+1);
   scanf("%d",&articles[a].prixUnitaire);
   printf("\n");
  }
}
//Fonction void afficherArticle
void afficherArticle(Article articles[],int n)
{
 int b;
 printf("\n    Affichage des articles   \n");
 for(b=0;b<n;b++)
  {
   printf("Reference de l'article N°%d : %d\n",b+1,articles[b].reference);
   printf("Designation de l'article N°%d : %s\n",b+1,articles[b].designation);
   printf("Prix unitaire de l'article N°%d : %d\n",b+1,articles[b].prixUnitaire);
   printf("\n");
  }
}
//Fonction void supprimerArticle
void supprimerArticle(Article articles[],int *n,int reference)
{
 int c,t;
 for(c=0;c<*n;c++)
  {
   if(articles[c].reference==reference)
      t=c;
  }
 articles[t].reference=0;
 strcpy(articles[t].designation,"SUPPRIME");
 articles[t].prixUnitaire=0;
}
//Fonction void ajouterArticle
void ajouterArticle(Article articles[],int *n)
{
 int d;
 d=*n;
 *n=d+1;
 printf("\nVeuillez entrez les informations du nouvel article a ajouter !\n");
 printf("Entrez la reference de l'article !\n");
 scanf("%d",&articles[d].reference);
 printf("Entrez la designation de l'article !\n");
 scanf("%s",articles[d].designation);
 printf("Entrez le prix unitaire de l'article  !\n");
 scanf("%d",&articles[d].prixUnitaire);
 printf("\n");
}
//Fonction pour mettre tous les caracteres en juscule 
void majuscule(char miniscule[])
{
int l,j,i,k=0;
 char alphabet[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
 l=strlen(miniscule);
 for(i=0;i<27;i++)
 {
  for(j=0;j<l;j++)
   {
     if(miniscule[j]==alphabet[i])
       {
        k=miniscule[j];
        miniscule[j]=k-32;
       }
   }
   
 }
}
//Fonction void triByDesignation
void triByDesignation(Article articles[],int n)
{
 int i=0,j=0,min=0;
 Article save;
 for(i=0;i<n;i++)
  {
   majuscule(articles[i].designation);
  } 
 for(i=0;i<n;i++)
  {
   min=i;
   for(j=i;j<n;j++)
    {
      if(strcmp(articles[j].designation,articles[min].designation)<0)
            min=j;
    }
    save=articles[min];
    articles[min]=articles[i];
    articles[i]=save;
  }
}
int main()
{
Article article[R];
int art=0,s=0,ref=0;
char choix[R],carac[R];
printf("============================================================================================\n");
printf("==                   PROGRAMME DE GESTION DE STOCK DU MAGASIN DE VENTE                    ==\n");
printf("==                                                                                        ==\n");
printf("============================================================================================\n");
printf("\n");
printf("==                                    Lire les articles                                   ==\n");
printf("Quel est le nombre d'article ? \n");
scanf("%d",&art);
lireArticle(article,art);
printf("\n");
do{
strcpy(choix," ");
printf("============================================================================================\n");
printf("==                                    MENU   DE TRAVAIL                                   ==\n");
printf("== a   : Afficher les articles stockes                                                    ==\n");
printf("== b   : Supprimer un article .                                                           ==\n");
printf("== c   : Ajouter  un nouvel article .                                                     ==\n");
printf("== d   : Afficher les articles classes par ordre alphabetique des designations            ==\n");
printf("== e   : Quitter le programme .                                                           ==\n");
printf("==       Tapez votre choix !                                                              ==\n");
printf("============================================================================================\n");
scanf("%s",choix);
switch (choix[0])
 {
  case 'a':
      afficherArticle(article,art);
      printf("\n");
      break;
  case 'b':
      printf("\n");
      printf("Quelle est la reference de l'article a supprimer ?\n");
      scanf("%d",&ref);
      supprimerArticle(article,&art,ref);
      printf("Affichage apres Suppression !\n");
      afficherArticle(article,art);
      break;
  case 'c':
      printf("\n");
      ajouterArticle(article,&art);
      printf("Affichage apres Ajout !\n");
      afficherArticle(article,art);
      break;

  case 'd':
      triByDesignation(article,art);
      afficherArticle(article,art);
      printf("\n");
      break;

  case 'e':
      printf("\n");
      exit(0);
      break;
  default :
      printf("Veuillez bien faire votre choix \n Recommencez !!\n");
      exit(0);
     break;
 }
  printf("VOULEZ-VOUS CONTINUER ? \n : TAPEZ 0 pour NON ou tout autre chiffre pour OUI \n");
  scanf("%d",&s); 
 }while(s!=0);
  
  return 0;
}
