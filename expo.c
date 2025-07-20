#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int h);
int main( )
{
 int n=0,i=0;
 float e=1,k=1;
 printf("Entrez le nombre dont vous voulez l'exponentielle !\n ");
 scanf("%d",&n);
 //e<2.71828182845905
 for(i=0;k>0.000000000;i++)
  {
   k=((pow(n,i))/(fact(i)));
   e=e+k;
  }
  e--;
 printf("\n l'exponentielle  de %d est %f \n \n",n,e);
 
 return 0;
}
int fact(int h)
{
 int j=1,f=1;
 for(j=1;j<=h;j++)
  {
   f=f*j;
  }
 return f;
}
