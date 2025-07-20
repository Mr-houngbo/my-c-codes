#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Raoul.h"
#define T 100
typedef enum
{
	false,true
}Bool;
void sectionner_char(int i,char chaine[],char sect[]);
int main( )
{
	char mots[T],section[T];
	int length=0,i=0,j=0;
	printf("Entrez le mot \n");
	lireChar(mots,T);
	length=strlen(mots);
	/*for(i=0;i<length;i++)
		{
			
	  }*/
	sectionner_char(1,mots,section);
	printf("|%s|\n",section);
	return 0;
}
void sectionner_char(int i,char chaine[],char sect[])
{
	int j=0,tab[strlen(chaine)];
	for(j=0;j<strlen(chaine);j++)
		{
				tab[j]=chaine[j];
		}
	for(j=0;j<strlen(chaine);j++)
		{
			if(j!=i)
				{
					sect[j]=tab[j];
				}
		}
}
