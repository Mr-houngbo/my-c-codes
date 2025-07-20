#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void decryptogramme(char code[],int u);
void majuscule(char miniscule[]);
int main ()
{
  char texteclair[100]={" "};
  int i=0;
  printf("\nEntrez votre texte crypte !\n");
  scanf("%s",texteclair);
  majuscule(texteclair);
  for(i=1;i<=25;i++)
  {
   printf("\n=====Texte Decrypte %d =====\n",i);
   decryptogramme(texteclair,i);
  }
  printf("\n=== Programme ecrit par  Calixte Raoul H. ===\n");
  return 0;
}
void decryptogramme(char code[],int u)
{
  int h=0,k=0,b=0;
  char *Code=NULL;
  k=strlen(code);
  Code=malloc(k *sizeof(char));
  for(h=0;h<k;h++)
   {
    Code[h]=code[h];
   }
  for(h=0;h<k;h++)
   {
    b=Code[h];
    Code[h]=b-(u+1);
   }
  printf("\n=====     %s       =====\n",Code);
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
