#include<stdio.h>
int main()
{
 int monTab[]={12,21,28,20,11,6,21},n,i=0,k=0;
 printf("Entrez l'entier a rechercher  !\n");
 scanf("%d",&n);
 for(i=0;i<7;i++)
  {
   if(monTab[i]==n)
      k++;
  }
 if(k!=0)
   printf("La valeur %d a ete retrouvee dans le tableau monTab !\n",n);
 else
   printf("La valeur %d n'est pas dans le tableau monTab !\n",n);
 return 0;
}
