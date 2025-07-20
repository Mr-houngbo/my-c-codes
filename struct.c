#include "struct.h"
int main ()
{
  int i=0;
  Personne joueur[2];
  Coordonnees individu[2];
  bonjour()
  for(i=0;i<2;i++)
  {
    printf("\n%d\n",i);
    printf("Entrez votre nom!\n");
    scanf("%s",joueur[i].nom);
    printf("Entrez votre prenom !\n");
    scanf("%s",joueur[i].prenom);
    printf("Entrez votre sexe !\n");
    scanf("%s",joueur[i].sexe);
    printf("Entrez votre adresse !\n");
    scanf("%s",joueur[i].adresse);
    printf("Entrez votre profession !\n");
    scanf("%s",joueur[i].profession);
    printf("Entrez votre age !\n");
    scanf("%d",&joueur[i].age);
    printf("\n");
   }  
  for(i=0;i<2;i++)
  {
    printf("%d\n",i);
    printf(" Tres cher Joueur %d ! \nVoici vos informations : \n",i);
    printf("Nom : %s\nPrenom : %s\nSexe : %s\nAdresse :%s\n",joueur[i].nom,joueur[i].prenom,joueur[i].sexe,joueur[i].adresse);
    printf("Profession :%s\nAge :%dans\n",joueur[i].profession,joueur[i].age);
    printf("\n");
  }
  printf("Place aux coordonnes cher individu ! \n");
  for(i=0;i<2;i++)
   {
    printf("%d\n",i);
    printf("Entrez x !\n");
    scanf("%d",&individu[i].x);
    printf("Entrez y !\n");
    scanf("%d",&individu[i].y);
    printf("Entrez z !\n");
    scanf("%d",&individu[i].z);
    printf("\n");
   }
   for(i=0;i<2;i++)
   {
    printf("%d\n",i);
    printf("Tres cher Individu %d !\n Voici vos coordonnees !\nx= %d\ny= %d\nz= %d\n ",i,individu[i].x,individu[i].y,individu[i].z);
    printf("\n");
   }
     return 0;
}

