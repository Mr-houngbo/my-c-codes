#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"inscription.h"

/*********************************************************************************************/
int generateur()
{
	int max=629999,min=620000;
	int num;
	srand(time(NULL));
	num=(rand()%(max-min+1)+min);
	return num;
}
/*********************************************************************************************/
void lireInscrit(Inscrit base[],int taille)
{	int i,tab_num[taille];
	FILE* fichier=NULL;

	for(i=0;i<taille;i++)
	{
		printf("\n\t Remplisssez la fiche suivante : \n");
		printf("Entrez votre nom :\t");
		scanf("%s",base[i].nom);
		printf("\n Entrez votre prenom :\t ");
		scanf("%s",base[i].prenoms);
		printf("\Entrez votre ville : \t ");
		scanf("%s",base[i].ville);
		printf("\n Entrez votre date de naissance : \n ");
		printf("Jour ----> \t");
		scanf("%d",&base[i].naissance.jour);
		printf("\n Mois(avec des chiffres)---->\t");
		scanf("%d",&base[i].naissance.mois);
		printf("\n Annee----> \t");
		scanf("%d",&base[i].naissance.annee);
		printf("\n");
		base[i].num=generateur();
		
		fichier=fopen("inscrits.txt","a");
		if(fichier!=NULL)
		{
			fprintf(fichier,"\n\n\n\tINFORMATION CONCERNANT LES INSCRITS : \n\n");
			fprintf(fichier,"NOM :\t %s \n ",base[i].nom);
			fprintf(fichier,"PRÉNOMS :\t %s \n ",base[i].prenoms);
			fprintf(fichier,"VILLE :\t %s \n ",base[i].ville);
			fprintf(fichier,"Date de naissance :\t %2d/%2d/%d \n ",base[i].naissance.jour,base[i].naissance.mois,base[i].naissance.annee);
			fprintf(fichier,"Numero de telephone :\t %d \n ",base[i].num);
		fclose(fichier);
		}
		else
		{
			fprintf(stderr,"Erreur technique : ouverture de fichier echouee \n");
			exit(1);
		}
		
	}
}
/*********************************************************************************************/