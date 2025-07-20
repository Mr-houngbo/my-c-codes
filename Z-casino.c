#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int parite(int h);
int ChoixHazard(int s,int t);
int main()
{
    int i=0,j=0,k=0,rep=0,l=0;
    do
    {
     printf("*==  Bienvenue au jeu Z-casino    ==*\n");
     printf("*==  Les numéros sont : 0 à 49    ==*\n*==  Faites votre choix           ==*\n");
     scanf("%d",&i);
     l=ChoixHazard(0,49);
     printf("*==La bille s'est immobilisee sur le numero: %d*==\n",l);
     if(l==i)
       {
        printf("*==     Vous avez gagne !        ==*\n*== TOUTES MES FELICITATIONS     !==*\n");
       }
    
    
     printf("*==  Voulez-vous continuer ?      ==*\n*==  1  pour Oui et O pour Non    ==*\n");
     scanf("%d",&rep);
    }while(rep!=0);
    return 0;
}
int parite(int h)
{
 if(h%2==0)
    return 1;
 else
    return 0;
}
int ChoixHazard(int s,int t)
{
 srand(time(NULL));
 int n;
 do
  {
   n=(rand()%(t-s+1)+s);
   n=(n+1)/2;
   n++;
  }while((n<s)&&(n>t));
  return n;
}
