#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int verifMaj(char prim[]);
int main( )
{
 int a=0;
 char lecture[5];
 FILE *fichier=NULL,*fic=NULL;
 fic=fopen("dic.txt","a");
 fichier=fopen("dc.txt","r");
 if(fichier!=NULL)
  {
   while(fgets(lecture,5,fichier)!=NULL)
    {
     if(verifMaj(lecture)==1)
        fprintf(fic,"%s\n",lecture);
    }
  
  }
 else
   printf("Erreur d'ouverture du fichier ! \n ");

 return 0;
}
int verifMaj(char prim[])
{
 int l=strlen(prim),i=0,j=0,k=0;
 char alphabet[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
 for(i=0;i<l;i++)
  {
   for(j=0;j<27;j++)
    {
     if(prim[i]==alphabet[j])
        k++;
    }
  }
 if(k!=0)
   return 0;
 else
   return 1;//majuscule
 
}
