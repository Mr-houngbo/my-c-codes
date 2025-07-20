#include<stdio.h>
int main()
{
 int monTab[]={12,21,28,20,11,6,21},i=0;
 float prod=1,moy=0,som=0;
 for(i=0;i<7;i++)
  {
   prod=prod*monTab[i];
  }
 for(i=0;i<7;i++)
  {
   som=som+monTab[i];
  }
 moy=(som)/7;
 printf("Le produit des elements du tableau monTab est %f \n",prod);
 printf("La moyenne arithmetique des elements du tableau monTab est %f \n",moy);
 return 0;
}
