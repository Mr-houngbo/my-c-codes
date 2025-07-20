/*le code est un peu incomprehensible desole*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define T 100
void decryptogramme(char code[]);
void majuscule(char miniscule[]);
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
int main ()
{
  char textecode[T]={"  "},texteclair[T]={" "},continuer[T/10];
  int f,v;
  long a;
  do
   {
    do
     {
      printf("Bienvenu dans le  chiffrement de César\nQue voulez-vous faire ? \n");
      printf("1  Cryptage du texte clair. ENTREZ 1\n");
      printf("2 Decryptage du texte chiffre.ENTREZ 2\n");
      a=lireLong();
     }while((a!=1)&&(a!=2));
    if(a==1)
     {
      printf("Entrez votre texte clair !\n");
      lireChar(textecode,T);
      v=strlen(textecode);
      for(f=0;f<v;f++)
       {
         texteclair[f]=textecode[f];
       }
      majuscule(texteclair);
      decryptogramme(texteclair);
      printf("=============================\n");
      printf("=== Texte chiffre :      ====\n");
      printf(" %s\n",texteclair);
      printf("=============================\n");
      printf("\nProgramme ecrit par Raoul H. \n");
    }
    else if(a==2)
     {
      printf("Entrez votre texte chiffre !\n");
      lireChar(textecode,100);
      v=strlen(textecode);
      for(f=0;f<v;f++)
       {
        texteclair[f]=textecode[f];
       }
      majuscule(texteclair);
      decryptogramme2(texteclair);
      printf("================================\n");
      printf("===  Texte clair           ===\n");
      printf("===  %s\n",texteclair);
      printf("================================\n");
     }
    printf("Voulez-vous continuer ?\n Entrez OUI ou NON .\n");
    lireChar(continuer,T/10);
    majuscule(continuer);
    a=0;
  }while(strcmp(continuer,"NON")!=0);
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
void decryptogramme(char code[])
{
  int h=0,k=0,b=0;
  k=strlen(code);
  for(h=0;h<k;h++)
   {
    b=code[h];
    code[h]=b+4;
   }
}
/*void decryptogramme(char code[])
{
  int h=0,k=0,b=0;
  k=strlen(code);
  for(h=0;h<k;h++)
   {
      
     b=code[h];
     if(b>86)
      {
       b=b+4;
       b=b-26;
       code[h]=b;
      } 
     else 
     {
       code[h]=b+8;
     }
     b=0;
   }
}*/