#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Conversion(int tableau[],int TailleTableau);
int main()
{
   int rg_min,rg_max,rg10_max,a,i;
   float b,somme=0,produit=1;
   char chaine[100];
   int l,tab[100]={0},tri,k;
   printf("Veuillez entrer votre nom de famille en majuscule !\n ");
   printf("Entrez votre nom en majuscule ! \n");
   scanf("%s",chaine);
   l=strlen(chaine);
   for(i=0;i<l;i++)
    {
     tab[i]=chaine[i];
    }
   Conversion(tab,l);
   for(i=0;i<l;i++)
    {
       for(k=i;k<l;k++)
      {
           if(tab[i]>tab[k])
          {
            tri=tab[k];
            tab[k]=tab[i];
            tab[i]=tri;
          }
      }
    }
   printf("rg_min=%d\n",tab[0]);
   printf("rg_max=%d\n",tab[l-1]); 
   rg_min=tab[0];
   rg_max=tab[l-1];
   rg10_max=rg_max+10;
   printf("Entrez un entier compris entre %d et %d  \n ",rg_min,rg10_max);
   scanf("%f",&b);
   a=(int)b;
   while((b-a)!=0)
    { 
      printf("Veuillez entrer un nombre entier\nReessayez a nouveau !\n");
      scanf("%f",&b);
      a=(int)b;
    }
   while(b>rg10_max)
    {
       printf("\nEssayez plus petit !\n");
       scanf("%f",&b);
       a=(int)b;
       while((b-a)!=0)
        { 
          printf("Veuillez entrer un nombre entier\nReessayez a nouveau !\n");
          scanf("%f",&b);
          a=(int)b;
        }
    }
   while(b<rg_min)
    {
       printf("\nEssayez plus grand !\n");
       scanf("%f",&b);
       a=(int)b;
       while((b-a)!=0)
        { 
          printf("Veuillez entrer un nombre entier\nReessayez a nouveau !\n");
          scanf("%f",&b);
          a=(int)b;
        }
   }
  printf("\nBravo !! vous avez entre le bon nombre!\n ");
  for(i=rg_min;i<=b;i++)
    {
      somme=somme+i;
    }
  printf("\nLa somme des entiers de 2 a %d est:  %d\n",a,(int)somme);
  for(i=b;i<=rg10_max;i++)
    {
       produit=produit*i;
    }
  printf("\nLe produit des entiers de   %d a 31 est:  %f\n",a,produit);
  return 0;
}	
void Conversion(int tableau[],int TailleTableau)
{
   int j,k,p,z=0;
   for(j=0;j<TailleTableau;j++)
    {
     if(tableau[j]==65)
       {
         tableau[j]=1;
       }
     else if(tableau[j]==66)
       {
         tableau[j]=2;
       }
    else if(tableau[j]==67)
       {
         tableau[j]=3;
       }
    else if(tableau[j]==68)
       {
         tableau[j]=4;
       }
   else if(tableau[j]==69)
       {
         tableau[j]=5;
       }
   else if(tableau[j]==70)
       {
         tableau[j]=6;
       }
   else if(tableau[j]==71)
       {
         tableau[j]=7;
       }
   else if(tableau[j]==72)
       {
         tableau[j]=8;
       }
   else if(tableau[j]==73)
       {
         tableau[j]=9;
       }
   else if(tableau[j]==74)
       {
         tableau[j]=10;
       }
   else if(tableau[j]==75)
       {
         tableau[j]=11;
       }
   else if(tableau[j]==76)
       {
         tableau[j]=12;
       }
   else if(tableau[j]==77)
       {
         tableau[j]=13;
       }
   else if(tableau[j]==78)
       {
         tableau[j]=14;
       }
   else  if(tableau[j]==79)
       {
         tableau[j]=15;
       }
  else if(tableau[j]==80)
       {
         tableau[j]=16;
       }
   else if(tableau[j]==81)
       {
         tableau[j]=17;
       }
   else if(tableau[j]==82)
       {
         tableau[j]=18;
       }
    else if(tableau[j]==83)
       {
         tableau[j]=19;
       }
   else if(tableau[j]==84)
       {
         tableau[j]=20;
       }
   else if(tableau[j]==85)
       {
         tableau[j]=21;
       }
   else if(tableau[j]==86)
       {
         tableau[j]=22;
       }
   else if(tableau[j]==87)
       {
         tableau[j]=23;
       }
   else if(tableau[j]==88)
       {
         tableau[j]=24;
       }
   else if(tableau[j]==89)
       {
         tableau[j]=25;
       }
   else if(tableau[j]==90)
       {
         tableau[j]=26;
       }
   else
      {
        z++;
        if(z==(TailleTableau-1))
        {
         printf("Veuillez entrer votre nom en Majuscule \n");
        }
      }
    }
}
