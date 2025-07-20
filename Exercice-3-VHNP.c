#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char Lettre[1];
  char r[1];
  do
  {
    printf("Entrez la lettre \n");
    scanf("%s",&Lettre[0]);
    switch (Lettre[0])
     {
       case 'A':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'E':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'I':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'O':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'U':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'Y':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'a':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'o':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'i':
        {
          printf("La lettre entree est une voyelle\n");
          break;
        }
       case 'u':
       {
          printf("La lettre entree est une voyelle\n");
          break;
       }
      case 'e':
      {
          printf("La lettre entree est une voyelle\n");
          break;
      }
     case 'y':
      {
          printf("La lettre entree est une voyelle \n");
          break;
      }
     default :
      { 
          printf("La lettre entree est une consonne !\n");
          break;
      }
   }
   printf("Voulez-vous continuer ?\n");
   scanf("%s",&r[0]);
  }while(r[0]!='#');   
  
  return 0;
}
