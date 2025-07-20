#ifndef __TACHE2_2_
#define __TACHE2_2_





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct rationnel rationnel;
struct rationnel
{
	int num;
	int den;
};
void prise_rationnel(rationnel *rat);
void affichage(rationnel *rat);
void addition(rationnel *rat1,rationnel *rat2,rationnel *rat);
void Addition(rationnel r2,int entier);
int pgcd(int a, int b);
void AdditionNormalise(rationnel r1, rationnel r2);
void division(rationnel *rat1,rationnel *rat2,rationnel *rat);
void inverse(rationnel *rat1,rationnel *rat);
void affiche(rationnel p);
void multiplication_rationnel(rationnel Rationnel[],int n);
void produit_norm(rationnel *q1, rationnel *q2);
void DivisonE( rationnel r1, int entier);
void DivisonN( rationnel r1, rationnel r2);
void soustractionRationnel(rationnel Rationnel[],int n);
void soustraction_norm(rationnel *q1, rationnel *q2);
void Normalisation( rationnel r);
void SumProd_N( int m);
void afficheRationnel(rationnel Rationnel);
void selection(double tab[], int n);
void representation_reel();
void multi_ratio_entierS();
void soustraction_ratio_entierS();
int comparaison_ratioS(rationnel r1[]);


#endif


