//CE TRAVAIL EST SEULEMENT VALABLE SUR  |R
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main( )
{
 int x,y,z,t,u,j=0,k=0,r=0;
 float  i=-100,tab[5]={0};
 printf("Entrez les cinq (5) coefficients de votre equation de degre 4 : aX⁴+bX³+cX²+dX+e   !\n");
 scanf("%d%d%d%d%d",&x,&y,&z,&t,&u);
 printf("DEBUT DU TRAVAIL VEUILLEZ PATIENTER !!!\n");
 do
  {
   r=((x*pow(i,4))+(y*pow(i,3))+(z*pow(i,2))+(t*i)+u);
   if(r==0)
   {
    tab[k]=i;
    k++;
   }
   i++;  
  }while(k!=4);
  printf("Les racines  de l'equation sont : \n");
  for(j=0;j<4;j++)
   {
    printf("%.0f\n",tab[j]);
   }
  
 return 0;
} 
