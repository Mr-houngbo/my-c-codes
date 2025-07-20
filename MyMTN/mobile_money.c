#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mobile_money.h"

/*********************************************************************************************/
int generateur_momo()
{
	int max=199999,min=100000;
	int num;
	srand(time(NULL));
	num=(rand()%(max-min+1)+min);
	return num;
}
/*********************************************************************************************/
int recherche(int tab[],int taille,int request)
{
	int i,b=taille;
	for(i=0;i<taille;i++)
		if(tab[i]==request)
		b=i;
	if(b!=taille)
	return b;
	else
	return -1;
}
/*********************************************************************************************/
void lireAgent(Inscrit base[],int taille,Agent_momo tab[],int n)
{
	int i,number,a,tab_num[taille];
	
	for(i=0;i<taille;i++)
	tab_num[i]=base[i].num;
	for(i=0;i<n;i++)
	{
		printf("Entrez le numero du sujet : \t ");
		scanf("%d",&number);
		a=recherche(tab_num,taille,number);
		if((recherche(tab_num,taille,number)==-1))
		{
			printf("Vous n'etes pas abonne a MTN \n");
		}
		else
		{
			printf("Vous avez ete enregistre dans la base des agents \n");
			tab[i].num_id=generateur_momo();
			tab[i].depot=100000;
			tab[i].retrait=100000;
			printf("Votre numero d'identification en tant qu'agent est :\t %d \n",generateur_momo());
			tab[i].agent=base[a];
		}
		
	}
}
/*********************************************************************************************/  
void lireClient(Inscrit base[],int taille,Client_momo tab[], int n)
{
	int i,number,a,pin,tab_num[taille];
	
	for(i=0;i<taille;i++)
	tab_num[i]=base[i].num;
	for(i=0;i<n;i++)
	{
		printf("Entrez le numero du sujet : \t ");
		scanf("%d",&number);
		a=recherche(tab_num,taille,number);
		if(a==-1)
		printf("Vous n'etes pas abonne a MTN \n");
		else
		{
			printf("Entrez votre pin :\t ");
			scanf("%d",&pin);
			printf("Vous avez ete bien enregistre dans la base des abonnes MoMo , Mr %s %s  \n ",base[a].nom,base[a].prenoms);
			tab[i].client=base[a];
			tab[i].pin=pin;
		}
	}
}
/*********************************************************************************************/