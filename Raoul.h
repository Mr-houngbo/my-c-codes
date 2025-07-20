#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void viderbuffer()
{
 int caractere;
 while((caractere!='\n')&&(caractere!=EOF))
   caractere=getchar();
}
int lireChar(char chaine[],int taille)
{
 char caractere=0;
 int i=0;
 if(fgets(chaine,taille,stdin)!=NULL)
   {
    do
     {
      caractere=chaine[i];
      if(caractere=='\n')
          {
           chaine[i]='\0';
          }
      i++;
     }while((caractere!='\n')&&(i!=taille));
     if(i>=taille)
         viderbuffer();
     return 1;
   }
  else
   {
    viderbuffer();
    return 0;
   }
}
long lireLong()
{
 char nombre[100]={0};
 if(lireChar(nombre,100))
    return strtol(nombre,NULL,10);
 else
    return 0;
}
double lireDouble()
{
 int k;
 char nombre[100]={0},caractere;
 if(lireChar(nombre,100))
   {
    for(k=0;k<100;k++)
     {
      caractere=nombre[k];
      if(caractere==',')
          nombre[k]='.';
     }
    return strtod(nombre,NULL);
   }
 else
    return 0;
}
