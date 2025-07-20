#include<stdio.h>
#include<stdlib.h>
float Facto(int n);
float Comb(int p,int n);
int main()
{
  int a,b,c,d;
  float fact, combi;
  printf("\nEntrez le nombre entier dont vous voulez la factorielle !\n");
  scanf("%d",&a);
  fact=Facto(a);
  printf("La factorielle de %d est %.1f  !\n",a,fact); 
  do
  {
    printf("\nEntrez p et q avec p<q ! \n");
    scanf("%d%d",&b,&c);
  }while(b>c);
  combi=Comb(b,c);
  printf("La combinaison de %d dans %d est %.2f !\n",b,c,combi);
  do
  {
    printf("\nEntrez le nombre n de lignes de votre triangle de pascal avec n £ ]2,8[ !\n");
    scanf("%d",&d);
  }while((d<2)||(d>8));
        printf("TRIANGLE DE PASCAL !                \n");
  
    if(d>0)
        printf("| 1 1                            \n");
    if(d>1)
        printf("| 1 2 1                          \n");
    if(d>2)
        printf("| 1 3 3  1                       \n");
    if(d>3)
        printf("| 1 4 6  4  1                    \n");
    if(d>4)
        printf("| 1 5 10 10 5  1                 \n");
    if(d>5)
        printf("| 1 6 15 20 15 6  1              \n");
    if(d>6)
        printf("| 1 7 21 35 35 21 7  1           \n");
    if(d>7)
        printf("| 1 8 28 56 70 56 28 8 1         \n");
  return 0;
}
float Facto(int n)
{
  int i,facto=1;
  for(i=n;i>=1;i--)
  {
     facto=facto*i;
  }
  return facto;
}
float Comb(int p,int q)
{
  int k;
  float f=1,g=1,h=1,j=1,comb=1;
  for(k=p;k>=1;k--)
  {
     f=f*k;
  }
  for(k=q;k>=1;k--)
  {
     g=g*k;
  }
  h=(q-p);
  for(k=h;k>=1;k--)
  {
     j=j*k;
  }
  comb=g/(f*j);
  return comb;
} 
