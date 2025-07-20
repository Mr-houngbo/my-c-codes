#ifndef __TACHE4__
#define __TACHE4__



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef enum
{
 false,true
}bool;
typedef struct DlistNode DlistNode;
struct DlistNode
{
	int value;
	struct DlistNode *next;
	struct DlistNode *back;
};
typedef struct Dlist Dlist;
struct Dlist
{
	int length;
	struct DlistNode *begin;
	struct DlistNode *end;
};
Dlist *new_Dlist();
bool is_empty_Dlist(Dlist *li);
int size(Dlist *li);
int getFirst(Dlist *li);
int getLast(Dlist *li);
void print_Dlist(Dlist *li);
Dlist *addLast_Dlist(Dlist *li,int x);
Dlist *addFirst_Dlist(Dlist *li,int x);
Dlist *removeLast_Dlist(Dlist *li);
Dlist *removeFirst_Dlist(Dlist *li);
Dlist *clear_Dlist(Dlist *li);
Dlist *add(Dlist *li,int x,int position);
Dlist *remove_at_position(Dlist *li,int position);
Dlist *create_tab(Dlist *li,int n);
int get(Dlist *li,int pos);
int set(Dlist *li,int elem,int pos);
//int remove(Dlist *li,int pos);
void diff(Dlist *A,Dlist *B,Dlist *C);
void unionn(Dlist *A,Dlist *B,Dlist *C);

























#endif
