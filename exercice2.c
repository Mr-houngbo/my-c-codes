#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Nombre(int n);
int Narcissique(int m);
void N_Narcissique(int x,int y);
int main ()
{
  int a,b;
   printf("Entrez deux entiers !\n");
   scanf("%d%d",&a,&b);
  if(a<b)
     N_Narcissique(a,b);
  else if(a>b)
    N_Narcissique(b,a);
 return 0;
}
int Nombre(int n) //fonction nombre de chiffre d'un entier
{
  int i=0;
  do
  {
   n%10;
   i++;
   n=n/10;
  }while(n!=0);
  return i;
}
int Narcissique(int m)//fonction nombre narcissique
{
 int j=0,k=0;
 float z=0,l=0;
 l=m;
 j=Nombre(m);
 do
 {
  k=m%10;
  m=m/10;
  z=z+pow(k,j);
 }while(m!=0);
 if(l==z)
  {
    return 1;
  }
 else
  {
    return 0;
  }
}
void N_Narcissique(int x,int y)//nombres narcissiques compris entre deux valeurs passees en parametre
{
 int p,l=0,h=0;
 int j,k;
 float z=0;
 printf("Les nombres narcissiques entre %d et %d sont : \n",x,y);
 for(p=x;p<=y;p++)
 {
   j=Nombre(p);
   l=p;
   h=p;
   do
    {
      k=h%10;
      h=h/10;
      z=z+pow(k,j);
    }while(h!=0);
    
   if(l==z)
   {
    printf("\n%.0f\n",z);
   }
   z=0;
 }

}
