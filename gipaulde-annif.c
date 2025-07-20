#include "gipaulde.h"
int main ()
{
  int i,age;
  char Nom[50],Prenom[25],rep[1];
  printf("Entrez vos nom et prenom \n");
  scanf("%s%s",Nom,Prenom);
  printf("Veuillez entrer votre age !\n");
  scanf("%d",&age);
  while(age!=18)
  {
    printf("\nPrrrrrrrr tu ne connais plus ton age ?\n"); 
    scanf("%d",&age);
  }
  printf("  UN PETIT TEST \n (-1)^18=?\n");
  scanf("%d",&i);
  if(i==1)
  {
       ANNIF()
  }
  else
       { 
        printf("\nPrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr\nTu ne peux pas faire (-1)^18 ou bien ?\nEn tout cas \n"); 
        ANNIF()
       } 
  printf("Voudrais-tu savoir ce que je te souhaite ? REPONDS PAR O ou N \n");
  scanf("%s",rep);
  if((rep[0]=='N')||(rep[0]=='n'))
  {
    printf("\nPourquoi tu ne veux pas ? \n Ce qui est sur c'est que tu les verra !\n");
  }
  printf("Je te souhaite beaucoup de succes !\n");
  printf(" Mais tu sais que tout se passe dans la tete non ? !\n");
  printf("Je te souhaite beaucoup de travail et moins de pagaille !\n\nEncore une fois \n\n");
  ANNIF()
  printf("\nREALISE PAR H.C.RAOUL.T.\n");
 return 0;
}
