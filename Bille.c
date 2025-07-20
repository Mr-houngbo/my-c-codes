#include<stdio.h>
#include<stdlib.h>
void initialiser(int *Nt,int *J);
void utilisateur_joue(int *p,int *l);
void machine_joue(int *u,int *w);
int main ( )
{
   int Nt=0,J=0,j=0,m=0;
   initialiser(&Nt,&J);
   if(J==0)
   {
     do
      {
        utilisateur_joue(&j,&Nt);
        machine_joue(&Nt,&m);
     }while(Nt!=0);
   }
   else
   {
     do
      {
        machine_joue(&Nt,&m);
        utilisateur_joue(&j,&Nt);
     }while(Nt!=0);
   }
 return 0;
}
void initialiser(int *h,int *k )
{
 int a,b;
 printf("Quel est le nombre de bille ? \n");
 scanf("%d",&a);
 do
 {
  printf("Quel joueur commence le premier ?\n 0 pour l'utilisateur et 1 pour la machine \n");
  scanf("%d",&b);
 }while((b!=0)&&(b!=1));
 *h=a;
 *k=b;
}
void utilisateur_joue(int *p,int *l)
{
  int a=0;
  do
  {
    printf("\nCher utilisateur , quel est le nombre de bille  a prendre 1 2 ou 3 ?\n");
    scanf("%d",&a);
  }while((a!=1)&&(a!=2)&&(a!=3));
  *p=a;
  *l=*l-a;
  printf("\nVous avez pris %d billes \n",*p);
  printf("\nil reste %d billes !\n",*l);
  if(*l==0)
     printf("\n\nDesole cher utilisateur vous avez perdu!\n\n");
}
void machine_joue(int *u,int *w)
{
  int a=0,b=0; 
  a=*u;
  do
  {
    do
    {
      b=(a-1)%4;
      a--;
    }while(b!=0);
    *w=*u-a;
    *w--;
  }while((*w!=1)&&(*w!=2)&&(*w!=3));
  *u=*u-*w;
  printf("\nLa machine prend %d  billes \n",*w);
  printf("\nil reste %d billes !\n",*u);
  if(*u==0)
     printf("\n\nBravo cher utilisateur vous avez gagne!\n\n");
}
