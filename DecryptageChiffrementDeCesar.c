#include "Raoul.h"
void decryptogramme2(char code[]);
void majuscule(char miniscule[]);
int main ()
{
  char textecode[100]={" "},texteclair[100]={" "};
  int f,v;
  printf("Entrez votre texte crypte !\n");
  lireChar(textecode,100);
  v=strlen(textecode);
  for(f=0;f<v;f++)
   {
     texteclair[f]=textecode[f];
   }
  majuscule(texteclair);
  decryptogramme2(texteclair);
  printf("======================================================================================================\n");
  printf("======================================================================================================\n");
  printf("===   Texte code par le chiffreent de Cesar !=== Texte decode par le programme de Raoul Calixte H. ===\n");
  printf("===                      %s               ===                           %s                   ===\n",textecode,texteclair);
  printf("======================================================================================================\n");
  printf("======================================================================================================\n");
}
void decryptogramme2(char code[])
{
  int h=0,k=0,b=0;
  k=strlen(code);
  for(h=0;h<k;h++)
   {
    b=code[h];
    code[h]=b-4;
   }
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






























