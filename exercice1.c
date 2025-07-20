/*Nom :HOUNGBO
Prenoms :Calixte  Raoul Tadagbe
matricule :11674220 */
#include<stdio.h>
#include<stdlib.h>
int maxtrio(int a,int b,int c);
int main()
{
  int i=0,j=0,k=0,hauteur=0,largeur=0,x=0,h=0,d=0;
  hauteur=7;
  largeur=7;
  printf("Entrez un entier i !\n");
  scanf("%d",&i);
  k=maxtrio(i,largeur,hauteur);
  if(k>1)
     printf("H\n");
     printf("HO\n");
  if(k>2)
     printf("HOU\n");
  if(k>3)
     printf("HOUN\n");
  if(k>4)
     printf("HOUNG\n");
  if(k>5)
     printf("HOUNGB\n");
  if(k>6)
     printf("HOUNGBO\n");
  if(k>7)
     printf("HOUNGBO*\n");
  if(k>8)
     printf("HOUNGBO*C\n");
  if(k>9)
     printf("HOUNGBO*CA\n");
  if(k>10)
     printf("HOUNGBO*CAL\n");
  if(k>11)
     printf("HOUNGBO*CALI\n");
  if(k>12)
     printf("HOUNGBO*CALIX\n");
  if(k>13)
     printf("HOUNGBO*CALIXT\n");
  if(k>14)
     printf("HOUNGBO*CALIXTE\n");
  if(k>15)
     printf("HOUNGBO*CALIXTE*\n");
  if(k>16)
   {
     j=k-16;
     h=0;
     d=0;
     for(x=0;x<j;x++)
       {
         h++;
         printf("HOUNGBO*CALIXTE*");
         do
         {
           printf("*");
           d++;
         }while(d!=h);
         d=0;
         printf("\n");
       }
   }
   return 0;
}
int maxtrio(int a,int b,int c)//fonction maxtrio
{
 if(a>b)
  {
    if(a>c)
      {
        return a; 
      }
    else 
       return c;
  }
 else if(b>a)
   {
     if(b>c)
       return b;
     else
         return c;
   }
}
