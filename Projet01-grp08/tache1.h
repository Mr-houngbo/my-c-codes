#ifndef __TACHE1__
#define __TACHE1__





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_TAILLE 1000
typedef struct MonEnsemble MonEnsemble;
struct MonEnsemble
{
	int tab[MAX_TAILLE];
	int taille;//represente la taille reelle du tableau
};
void init(MonEnsemble *A);
void pause();
void add(MonEnsemble *A,int elem,int pos);
void suppression(MonEnsemble *t);
void unionn(MonEnsemble *A, MonEnsemble *B, MonEnsemble *C);
int Remove(MonEnsemble *A, int pos);
int getFirst(MonEnsemble *A);
int getLast(MonEnsemble *A);
int set(MonEnsemble *A,int elem,int pos);
int size(MonEnsemble *A);
int isEmpty(MonEnsemble *A);
int get( MonEnsemble *A , int pos );
void diff( MonEnsemble *A , MonEnsemble *B , MonEnsemble *C );
void addLast(MonEnsemble *A,int elem);
void addFirst(MonEnsemble *A,int elem);
void removeFirst(MonEnsemble *A);
void removeLast(MonEnsemble *A);
void ordonnerTableau(int tableau[], int tailleTableau);






#endif
