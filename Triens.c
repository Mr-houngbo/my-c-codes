#include<stdio.h>
int  RechercherValeur(int Tab[],int taille,int a);
int nombreElement(int Tab[],int taille,int h);
int main()
{
    int tab[10]={1,2,6,7,7,6,7,6,9,7,9},j=0,k=0;
    j=RechercherValeur(tab,10,6);
    if(j!=0)
      printf("La valeur a été trouvée !\n");
    else 
      printf("La valeur n'a pas été trouvée ! \n");
    k=nombreElement(tab,10,6);
    if(k!=0)
      printf("La valeur a été trouvée %d fois !\n",k);
    else 
      printf("La valeur n'a pas du tout été trouvée ! \n");
    
    return 0;
}
int  RechercherValeur(int Tab[],int taille,int a)
{
 int i;
for(i=0;i<taille;i++)
{
 if(Tab[i]==a)
     return i+1;
}
}
int nombreElement(int Tab[],int taille,int h)
{
 int n=0,i;
 for(i=0;i<taille;i++)
  {
    if(Tab[i]==h)
      n++;
  }
 return n;
}