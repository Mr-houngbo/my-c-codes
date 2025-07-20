#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define T 100
typedef struct 
{
 char nom[T];
 char prenom[T];
 int  numero;
}personne;
void ajout_personne(FILE *rep);
void affiche_ensemble_personne (FILE *rep);
void trouve_numero_personne (FILE *rep, char *nom);
void changer_numero_personne (FILE *rep, char *nom);
void menu(FILE *rep);
int main( )
{
 int i;
 FILE *repertoire;
 ajout_personne(repertoire);
 affiche_ensemble_personne (repertoire);


 return 0;
}

void ajout_personne(FILE *rep)
{
  personne Personne;
  printf("\tEntrez le nom de la personne !\n");
  scanf("%s",Personne.nom);
  printf("\tEntrez le prenom de la personne !\n");
  scanf("%s",Personne.prenom);
  printf("\tEntrez le numero de telephone de la personne !\n");
  scanf("%d",&Personne.numero);
  rep=fopen("repertoire.txt","a");
  if(rep!=NULL)
   {
    fprintf(rep," %s ",Personne.nom);
    fprintf(rep," %s ",Personne.prenom);
    fprintf(rep," %d ",Personne.numero);
   }
  else
   printf("\tErreur d'ouverture du fichier !\n");
  fclose(rep);
}
void affiche_ensemble_personne (FILE *rep)
{
 char lecture[T];
 rep=fopen("repertoire.txt","r");
 if(rep!=NULL)
   {
    while(fgets(lecture,T,rep)!=NULL)
     {
      printf("%s\n",lecture);
     }
   }
  else
   printf("\tErreur d'ouverture du fichier !\n");
  fclose(rep);

}
void trouve_numero_personne (FILE *rep, char *nom)
{
  int l=strlen(nom),numero;
  char lecture[l];
  rep=fopen("repertoire.txt","r");
  if(rep!=NULL)
   {
    do
     {
      fgets(lecture,l,rep);
     }while(lecture!=nom);
    fscanf(rep,"%s %d",lecture,&numero);
    printf("Le numero de %s est : %d \n ",nom,numero);
   }
  else
   printf("\tErreur d'ouverture du fichier !\n");
  fclose(rep);
}
void changer_numero_personne (FILE *rep, char *nom)
{


}
void menu(FILE *rep)
{


}
