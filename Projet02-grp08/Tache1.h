#ifndef __TACHE1__
#define __TACHE1__





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>







void prise_rationnel(int rationnel[]);
void addition(int rationnel1[],int rationnel2[],int rationnel[]);
void division(int rationnel1[],int rationnel2[],int rationnel[]);
void AdditionNormalise(int r1[], int r2[]);
void DivisonN( int r1[], int r2[]);
void soustraction_norm(int a, int b, int c, int d);
void SumProd_N( int m);
void representation_reel();
void selection(double tab[], int n);
void inverse(int rationnel1[],int rationnel[]);
void Addition(int r1[],int entier);
int pgcd(int a, int b);
void multiplication_rationnel(int num1,int den1,int num2,int den2);
void multi_ratio_entier();
void produit_norm(int a, int b, int c, int d);
void division(int rationnel1[],int rationnel2[],int rationnel[]);
void DivisonE( int r1[], int entier);
void soustractionRationnel(int num1,int den1,int num2,int den2);
void soustraction_ratio_entier();
void inverse(int rationnel1[],int rationnel[]);
void Normalisation( int r[]);
void afficheRationnel(int num,int den);
int comparaison_ratio(int num1,int deno1,int num2, int deno2);



#endif
