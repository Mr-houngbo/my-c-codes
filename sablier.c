#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sablier()
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
     for(j=0;j<k;j++)
      {
       printf("*");
      }
     k-=2;
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
    
    /********************************************************************************************************/
}
int main()
{
 sablier();
 return 0;
}