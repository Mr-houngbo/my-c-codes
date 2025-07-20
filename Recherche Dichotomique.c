#include<stdio.h>
void RechercherValeur(int Tab[],int a,int b,int n);
int main()
{
 int tab[10]={2,4,7,9,45,67,86,99,111,555};
 RechercherValeur(tab,0,9,17171710);
 return 0;
}
void RechercherValeur(int Tab[],int a,int b,int n)
{
 int c=(a+b)/2,k=0;
 while(a<b)
 {
  if(Tab[c]<n)
    {
     a=(a+b)/2;
    }
  else if(Tab[c]>n)
    {
     b=(a+b)/2;
    }
  else
    {
     k=c;
     a=2*b;
    }
 if(a==c)
      a++;
 else if(b==c)
      b--;
 else
   c=(a+b)/2;
}
if(k==0)
   printf("La valeur recherchée n'est pas dans le tableau !!!\n");
else
   printf("La valeur a été trouvée dans le tableau a la position %d\n",k);
}