		/********************************************************************************************************/
		/*													*/
		/*		PROTOTYPES DES FONCTIONS ET DEFININTIONS DES TYPES DE VARIABLES PERSONNELLES		*/
		/*													*/
		/********************************************************************************************************/


#ifndef __INSCRIT__H__
#define __INSCRIT__H__
/*********************************************************************************************/
typedef struct
{
	int jour;
	int mois;
	int annee;
}Date;
/*********************************************************************************************/
typedef struct 
{
	char nom[20];
	char prenoms[50];
	char ville[12];
	Date naissance;
	int num;
}Inscrit;
/*********************************************************************************************/
typedef struct 
{
	Inscrit client;
	int pin;
	int solde_actuel;
	int solde;
}Client_momo;
/*********************************************************************************************/
typedef struct
{
	Inscrit agent;
	int num_id;
	int depot;
	int retrait;
}Agent_momo;
/*********************************************************************************************/
#endif
/*********************************************************************************************/
int generateur_momo(); 
int recherche(int tab[],int taille,int request);		
void lireAgent(Inscrit base[],int taille,Agent_momo tab[],int n);
void lireClient(Inscrit base[],int taille,Client_momo tab[], int n);
/*********************************************************************************************/
