#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define T 20
int repetition(char g[]);
int main( )
{
 int a=0;
 char lecture[T];
 FILE *fichier=NULL,*fic=NULL;
 fic=fopen("PenduDicoDifficile.txt","a");
 fichier=fopen("PenduDico.txt","r");
 if(fichier!=NULL)
  {
   while(fgets(lecture,T,fichier)!=NULL)
    {
     if(repetition(lecture)<10)
        fprintf(fic,"%s\n",lecture);
    }
  
  }
 else
   printf("Erreur d'ouverture du fichier ! \n ");

 return 0;
}
int repetition(char g[])
{
 int i,j,k=strlen(g),n=0;
 for(i=0;i<k;i++)
  {
   for(j=0;j<k;j++)
    {
     if(g[i]==g[j])
        n++;
    }
    n--;
  }
  if(n==k)
   return 0;
  else
   return n;
}
