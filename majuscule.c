#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void majuscule(char miniscule[]);
int main( )
{
 char texte[100];
 strncpy(texte," ",15);
 printf("Entrez votre texte a rendre majuscule !\n");
 scanf("%s",texte);
 majuscule(texte);
 printf("Voici votre texte rendu majuscule :\n %s \n ",texte);
 printf("\nProgramme ecrit par Raoul H. \n");

 return 0;
}
void majuscule(char miniscule[])
{
int l,j,i,k=0;
 char alphabet[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
 l=strlen(miniscule);
 for(i=0;i<27;i++)
 {
  for(j=0;j<l;j++)
   {
     if(miniscule[j]==alphabet[i])
       {
        k=miniscule[j];
        miniscule[j]=k-32;
       }
   }
   
 }
}
