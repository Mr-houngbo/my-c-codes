#ifndef CONSTANTE 
#define CONSTANTE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
 int x;
 int y;
 int z;
};
typedef struct Personne Personne;
struct Personne
{
 char nom[50];
 char prenom[50];
 char sexe[50];
 char adresse[50];
 char profession[50];
 int age;
}; 
typedef enum Volume Volume;
enum Volume
{
 Faible=10,Moyen=50,Fort=100
};
#define bonjour() printf("Bonjour cher ami !\nEntrez vos   informations  \n");

#endif
