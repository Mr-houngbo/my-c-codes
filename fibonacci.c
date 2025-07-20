#include<stdio.h>
#include<stdlib.h>
int terme(int n);
int main( )
{
 int a=0;
 printf("Entrez la valeur de n \n ");
 scanf("%d",&a);
 printf("Un=%d \n",terme(a));
 return 0;
}
int terme(int n)
{
 if((n==1)||(n==2))
      return n;
 else
    return 2*(terme(n-1)+terme(n-2));
}
