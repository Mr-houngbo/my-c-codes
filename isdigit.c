#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   float b;
   printf("Entrez un entier \n");
   scanf("%f",&b);
   if( isdigit(b) )
   {
      printf("\n Bon nombre entier !\n");
   }
   else
     printf("Veuillez entrer un nombre entier ! Pas un caractere !\n");
     scanf("%f",&b);
}
