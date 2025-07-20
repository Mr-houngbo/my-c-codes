#include<stdio.h>
#include<stdlib.h>
int premier(int x);
int main()
{
  int i=1,j=0,n=0,a=0;
  printf("Entrez le nombre n!\nJe vous afficherai les n premiers nombres premiers !\n");
  scanf("%d",&n);
  printf("Les %d premiers nombres premiers sont :\n",n);
  do
   {
       j=premier(i);
       if(j==1)
        {
          printf("%d\n",i);
          a++;
        }
        i++;
   }while(a!=n);

  return 0;
}
int premier(int x)
{
  int y=0,z=0,k=0;
  if(x==1)
   {
    return 0;
   }
  for(y=2;y<x;y++)
    {
         k=x%y;
         if(k==0)
           {
             z++;
           }
         k=0;
    }
    if(z==0)
     {
       return 1;
     }
    else
     {
       return 0;
     }

}

