#include<stdio.h>
#include<stdlib.h>
#include"mobile_money.h"
#include"inscription.h"
#include"autres.h"
						/*********************************/
/************************************************  	BLOC PRINCIPAL	   	  *****************************************************************/
						/*********************************/


int main(void)
{
/*********************************************************************************************/
	int i,agent_taille,client_taille,taille;
	int choix,trans_option,momo_option,ins_momo_option;//les variables pour stocker les options
	int verify_agent,num_enter_agent,verify_client,num_enter_client;
	int *tab_num_agent, *tab_num_client;
	int somme_retiree,somme_deposee;
	Inscrit* base;
	Agent_momo *pointeur;
	Client_momo* pointeur1;
/*********************************************************************************************/	
	
	printf("\n\t\t\t /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n");
	printf("  \t\t\t /*   BIENVENUE CHEZ MyMTN : le reseau le plus securise est le plus sur                               */");
	printf("\n\t\t\t /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n\n\n");
	logo(40,70);
/*********************************************************************************************/	
	do
	{
		printf("\n\n\t\t\t 1-\t Inscrivez_vous ");
		printf("\n\t\t\t 2-\t Mobile Money ");
		printf("\n\t\t\t 3-\t Credit ");
		printf("\n\t\t\t 4-\t Se renseigner");
		printf("\n\t\t\t 5-\t Quittez le programme \n");
		printf("\n\t\t Entrez votre choix \t");
		scanf("%d",&choix);

		if(choix==1) 	 // INSCRIPTION 	
		{
			printf("Entrez le nombre de personnne a enregistrer :\t");
			scanf("%d",&taille);
			base=malloc(taille*sizeof(Inscrit));
			lireInscrit(base,taille);
		}
		
		else if(choix==2)		// MOBILE MONEY
		{
			printf("\n1-\tInscription\n");
			printf("2-\t Transfert \n");
			printf("\nVotre choix :\t");
			scanf("%d",&momo_option);
			if(momo_option==1) //Inscription MoMo
			{
				printf("\n\n1-\tEn tant que client \n");
				printf("2-\tEn tant qu'agent \n ");
				printf("Votre choix : \t ");
				scanf("%d",&ins_momo_option);
				if(ins_momo_option==2) // Inscription MoMo : Agent
				{
					printf("Entrez le nombre de personne a enregistrer :\t ");
					scanf("%d",&agent_taille);
					pointeur=malloc(agent_taille*sizeof(Agent_momo));
					lireAgent(base,100,pointeur,agent_taille);
				}
				else if(ins_momo_option==1) //// Inscription MoMo : Client
				{
					printf("Entrez le nombre de personne a enregistrer :\t ");
					scanf("%d",&client_taille);
					pointeur1=malloc(client_taille*sizeof(Client_momo));
					lireClient(base,100,pointeur1,client_taille);
				}
			}
			else if(momo_option==2)		//Transfert
			{
				printf("\n\t 1-\t Depot\n");
				printf("\t 2-\t Retrait \n");
				printf("\n Votre choix : \t ");
				scanf("%d",&trans_option);
				if(trans_option==1)	//Depot
				{
					tab_num_agent=malloc(agent_taille*sizeof(int));
					for(i=0;i<agent_taille;i++)
					tab_num_agent[i]=pointeur[i].num_id;
					
					printf("Entrez votre numero d'identification d'agent :\t ");
					scanf("%d",&num_enter_agent);
					verify_agent=recherche(tab_num_agent,agent_taille,num_enter_agent);
					if(verify_agent==-1)
					{
						printf("Vous n'etes pas autorise a effectuer cette requete \n");
						exit(0);
					}
					else
					{
						tab_num_client=malloc(client_taille*sizeof(int));
						for(i=0;i<client_taille;i++)
						tab_num_client[i]=pointeur1[i].client.num;
					
						printf("Entrez le numero du destinataire :\t ");
						scanf("%d",&num_enter_client);
						verify_client=recherche(tab_num_client,client_taille,num_enter_client);
						if(verify_client==-1)
						{
							printf("Il n'est pas abonne a MTN \n ");
							exit(0);
						}
						else
						{
							printf("Entrez la somme a envoyer :\t ");
							scanf("%d",&somme_deposee);
							pointeur[verify_agent].depot=pointeur[verify_agent].depot+somme_deposee;
							pointeur[verify_agent].retrait=pointeur[verify_agent].retrait-somme_deposee;
							pointeur1[verify_client].solde_actuel=pointeur1[verify_client].solde+somme_deposee;
						}
					
					}
				}
				else if(trans_option==2)	//Retrait
				{
					tab_num_agent=malloc(agent_taille*sizeof(int));
					for(i=0;i<agent_taille;i++)
					tab_num_agent[i]=pointeur[i].num_id;
					
					printf("Entrez votre numero d'identification d'agent :\t ");
					scanf("%d",&num_enter_agent);
					verify_agent=recherche(tab_num_agent,agent_taille,num_enter_agent);
					if(verify_agent==-1)
					{
						printf("Vous n'etes pas autorise a effectuer cette requete \n");
						exit(0);
					}
					else
					{
						
						tab_num_client=malloc(client_taille*sizeof(int));
					for(i=0;i<client_taille;i++)
					tab_num_client[i]=pointeur1[i].client.num;
					
					printf("Entrez le numero du client :\t ");
					scanf("%d",&num_enter_client);
					verify_client=recherche(tab_num_client,client_taille,num_enter_client);
					if(verify_client==-1)
					{
						printf("Il n'est pas abonne a MTN \n ");
						exit(0);
					}
					else
					{
						printf("Entrez la somme a retirer :\t ");
						scanf("%d",&somme_retiree);
						pointeur[verify_agent].depot=pointeur[verify_agent].depot-somme_retiree;
						pointeur[verify_agent].retrait=pointeur[verify_agent].retrait+somme_retiree;
						pointeur1[verify_client].solde_actuel=pointeur1[verify_client].solde+somme_deposee;
					}
					
						
					}
				}
			}
		}
		else if(choix==3)
		{
		}
		else if(choix==4)
		{
			
		}
		else if(choix==5)
		{
			printf("Programme quitee avec succes \n\n");
			exit(0);
		}
		else
		{
			printf("Mauvais choix \n\n");
			exit(0);
		}
	}while(choix!=4);
/*********************************************************************************************/
return 0;
}