#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int estImpair(int nb);
int main()
{
  int nbre,ret;
  printf("Entrez le nombre ! ");
  scanf("%d",&nbre);
  ret=estImpair(nbre);
  if(ret==0)
     {
       printf(" le nombre est pair \n! ");
     }
   else
     {
       printf(" le nombre est impair \n! ");
     }


}
int estImpair(int nb)
  {
     int n;
     n=pow((-1),nb);
     if(n==1)
     {
       return 0;
     }
     else
     {
       return 1;
     }
  }
