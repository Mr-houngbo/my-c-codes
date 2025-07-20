#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,r,k=0;
  printf("Entrez le nombre entier !\n");
  scanf("%d",&n);
  if(n==1)
    {
      printf("%d est un nombre premier !\n",n);
    }
  else
    {
     for(i=2;i<n;i++)
      {
        r=(n%i);
        if(r!=0)
        k++;
      }
      if(k==(n-2))
        {
          printf("%d est un nombre premier !\n",n);
        }
      else
        {
          printf("%d n'est pas un nombre premier !\n",n);
         }
     }
}
