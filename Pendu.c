#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#define T 100
//l'accession au niveau expert requiert un certain nombre de points a la bataille et un certain meilleur score
// meilleur score et noms des joueurs 
void menuNiveaux(int *f,int *p);
int repetition(char g[]);
void nbreDeCoups(char ms[],int *nbre,int niveau);
void reste(int nbre);
char lireCaractere(int *i);
void affiche(char mot[],char let,char car[]);
int test(char m[],char b[]);
void corpsDuJeu(char secret[],int *h,int max,char motsecret[],int *score);
void bougeCurseur(FILE *fichier,int nbreAleatoire);
void priseDuMotFacile(FILE *doc,char resultat[],int cur);
void priseDuMotDifficile(FILE *docs,char resultats[],int curs);
void gestion_score(FILE *document,int score,char nom[]);
int main( )
{
 FILE *fichier=NULL,*Fichier=NULL;
 char motSecret[T],reponse,motsecret[T],nom_utilisateur[T];
 int identifiant=0,coups=0,choix=0,i,curseur1,curseur2,curseur3,curseur4,p=0,score=0;
 strcpy(motSecret,"");
 strcpy(motsecret,"");
 do
 {
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("~~~~~~~~~~~~~ BIENVENU DANS LE PENDU ! ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("~~~~~~~~~~~~  Cher Joueur , veuillez entrez votre nom :~~~~~~~~~\n");
  scanf("%s",nom_utilisateur);
  menuNiveaux(&choix,&p);
  switch (choix)
   {
    case 1:
          printf("==========  BIENVENU DANS LE NIVEAU FACILE      =================\n");
          priseDuMotFacile(fichier,motSecret,curseur1);
          nbreDeCoups(motSecret,&coups,1);
          corpsDuJeu(motSecret,&identifiant,coups,motsecret,&score);
          strcpy(motsecret,"");
          break;
    case 2:
          printf("=========  BIENVENU DANS LE NIVEAU MOYEN        =================\n");
          priseDuMotFacile(fichier,motSecret,curseur2);
          nbreDeCoups(motSecret,&coups,2);
          corpsDuJeu(motSecret,&identifiant,coups,motsecret,&score);
          strcpy(motsecret,"");
          break;
    case 3:
          printf("=========  BIENVENU DANS LE NIVEAU DIFFICILE    =================\n");
          priseDuMotDifficile(fichier,motSecret,curseur3);
          nbreDeCoups(motSecret,&coups,3);
          corpsDuJeu(motSecret,&identifiant,coups,motsecret,&score);
          strcpy(motsecret,"");
          break;
    case 4:
          printf("=========  BIENVENU DANS LE NIVEAU EXPERT       =================\n");
          priseDuMotDifficile(fichier,motSecret,curseur4);
          nbreDeCoups(motSecret,&coups,4);
          corpsDuJeu(motSecret,&identifiant,coups,motsecret,&score);
          strcpy(motsecret,"");
          break;       
   }
 gestion_score(Fichier,score,nom_utilisateur);
 printf("~~~~~~~~~~~VOULEZ-VOUS CONTINUER ? TAPEZ ENTREE POUR OUI ~~~~~~~~~\n");
 reponse=getchar();
 if(reponse=='\n'){
   system("clear");
   p+=50;
   }
}while(reponse=='\n');
 
 system("clear");
 printf("\nPROGRAMME ECRIT PAR GORD ENVER  \n");
 return 0;
}
char lireCaractere(int *i)
{
  char caractere=0,intrus=0;
  if(*i==1)
      intrus=getchar();
  caractere=getchar();
  caractere=toupper(caractere);
  while(getchar()!='\n');
  *i=50;
  return caractere;
}
void reste(int nbre)
{
 printf("Il vous reste %d coups avant une mort certaine !\n",nbre);
}
void affiche(char mot[],char let,char car[])
{
 int i=0,taille=strlen(mot);
 do
  {
    if(mot[i]==let)
       car[i]=let;
    i++;
  }while(i!=taille);
 i=0;

}
void corpsDuJeu(char secret[],int *h,int max,char motsecret[],int *score)
{

 int nbreCoups=max,trouve=strlen(secret),i=0,p=1;
 char lettre;
 strcpy(motsecret," ");
 for(i=0;i<trouve;i++)
  {
   motsecret[i]='-';
  }
 reste(nbreCoups);
 do
 {
  printf(" Entrez une lettre du mot  secret !\n");
  lettre=lireCaractere(&p);
  nbreCoups--;
  affiche(secret,lettre,motsecret);
  system("clear");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("      MOT SECRET : %s \n",motsecret);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  if(test(motsecret,secret)!=5)
      reste(nbreCoups);
 }while((nbreCoups!=0)&&(test(motsecret,secret)!=5));
 if(test(motsecret,secret)==5)
   {
    printf("BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO\n");
    printf("\nVOUS AVEZ GAGNE LE JEU EN %d COUPS    \n",max-nbreCoups);
    printf("\nBRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO~BRAVO\n\n");
    *h=555;
    *score=max-nbreCoups;
    strcpy(motsecret," ");
   }
 else if(nbreCoups==0){
   printf("\nOUPS ! VOUS AVEZ PERDU !\n ");
   printf("~~~~~~~~~~~~~~~LE MOT SECRET ETAIT : ~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("                  %s                                     \n",secret);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   strcpy(motsecret," ");
	}
}
int test(char m[],char b[])
{
 int position=0,i=0,taille=strlen(m);
 do
  {
    if(m[i]==b[i])
       position++;
    i++;
  }while(i!=taille);
 if(position==taille)
    return 5;
 else
    return 4;
}
void menuNiveaux(int *f,int *p)
{
 int k=0;
 if(*p!=0)
   system("clear");
 do
  {
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("|                         NIVEAUX                              |\n");
   printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
   printf("|~~~~~~~             1: NIVEAU FACILE                 ~~~~~~~~~|\n");
   printf("|~~~~~~~             2: NIVEAU MOYEN                  ~~~~~~~~~|\n");
   printf("|~~~~~~~             3: NIVEAU DIFFICILE              ~~~~~~~~~|\n");
   printf("|~~~~~~~             4: NIVEAU EXPERT                 ~~~~~~~~~|\n");
   printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("FAITES VOTRE CHOIX \n");
   scanf("%d",f);
   if((*f<1)||(*f>4))
    {
     printf("!!! VEUILLEZ BIEN FAIRE VOTRE CHOIX !!!\n");
     k++;
    }
   else
   	k=0;
  }while(k!=0);
  system("clear");
}
void nbreDeCoups(char ms[],int *nbre,int niveau)
{
 int l=strlen(ms),h;
 h=repetition(ms);
 if(niveau==1)
  *nbre=l+4;
 else if(niveau==2)
  *nbre=l+3;
 else if(niveau==3)
  {
   if(h==2)
     *nbre=l+1;
   else if(h>=3)
     *nbre=l;
   else
    *nbre=l+2;
  }
 else
  {
   if(h==2)
     *nbre=l-2;
   else if(h>=3)
     *nbre=l-3;
   else
     *nbre=l;
  }
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
void priseDuMotFacile(FILE *doc,char resultat[],int cur)
{
 int i=0,nbre=0;
 char bon=' ';
 long position;
 srand(time(NULL));
 nbre=(rand()%(129))+1;
 strcpy(resultat,"");
 doc=fopen("PenduDicoFacile.txt","r");
 bougeCurseur(doc,nbre);
 if(doc!=NULL)
  {
   do
    {
     bon=fgetc(doc);
     if(bon!='\n')
        resultat[i]=bon;
     i++;
    }while(bon!='\n');
  }
 else
  {
   printf("Erreur d'ouverture du fichier ! \n");
   exit(0);
  }
 fclose(doc);
}
void priseDuMotDifficile(FILE *docs,char resultats[],int curs)
{
 char bons=' ';
 int i=0,nbre=0;
 long position;
 srand(time(NULL));
 nbre=(rand()%(1580))+1;
 strcpy(resultats,"");
 docs=fopen("PenduDicoDifficile.txt","r");
 bougeCurseur(docs,nbre);
 if(docs!=NULL)
  {
   do
    {
     bons=fgetc(docs);
     if(bons!='\n')
        resultats[i]=bons;
     i++;
    }while(bons!='\n');
  }
 else
  {
   printf("Erreur d'ouverture du fichier ! \n");
   exit(0);
  }
 fclose(docs);
}
void bougeCurseur(FILE *fichier,int nbreAleatoire)
{
 char caractere;
 int i;
 for(i=0;i<nbreAleatoire;i++)
  {
   do
    {
     caractere=fgetc(fichier);
    }while(caractere!='\n');
  }
}
void gestion_score(FILE *document,int score,char nom[])
{
	File *fic=NULL;
	char c,*tab_nom;
	int i=0,*tab_score,j=0;
	document=fopen("score.txt","r+");
	if(document!=NULL)
  {
		fprintf(document,"%s %d \n",nom,score);
  }
  if(!feof(document)!=0)//Teste si le fichier n'est pas vide
  	{
  		rewind(document);
			do
			{
				do
			 	{
					c=fgetc(document);
				}while(c!='\n');
				i++;
			}while(c!=EOF);
		tab_nom=malloc(i*sizeof(int));
		if(tab_nom==NULL)
			{
			 fprintf(stderr,"Erreur allocation dynamique !\n");
			 exit(EXIT_FAILURE);
			}
		for(j=0;j<i;j++)
		{
			tab_nom=malloc(T*sizeof(int));
		}
  	tab_score=malloc(i*sizeof(int));
		if(tab_score==NULL)
			{
			 fprintf(stderr,"Erreur allocation dynamique !\n");
			 exit(EXIT_FAILURE);
			}
		for(j=0;j<i;j++)
			{
  			fscanf(document, "%s %d",tab_nom[j],tab_score[j]);
  		}
  	for(j=0;j<i;j++)
  	{
  		
  		for(j=0;j<i;j++)
  		{
  		
  		}
  		
  		
  	
  	}
  	}  
	fclose(document);
}



