#ifndef __LIST__
#define __LIST__
#include "Raoul.h"
typedef enum
{
 false,true
}bool;
/* Un maillon de la liste doublement chainee   */
typedef struct DlistNode
{
 int value;
 struct DlistNode *back;
 struct DlistNode *next;
}DlistNode;
/*Definition de la liste doublement chainee   */
typedef struct Dlist
{
 int length;
 struct DlistNode *begin;
 struct DlistNode *end;
}*Dlist;
Dlist new_Dlist();
bool is_empty_Dlist(Dlist li);
int Dlist_length(Dlist li);
int Dlist_first(Dlist li);
int Dlist_last(Dlist li);
void print_Dlist(Dlist li);
Dlist push_back_Dlist(Dlist li,int x);
Dlist push_front_Dlist(Dlist li,int x);
Dlist pop_back_Dlist(Dlist li);
Dlist pop_front_Dlist(Dlist li);
Dlist clear_Dlist(Dlist li);
Dlist insert_at_position(Dlist li,int x,int position);
Dlist remove_at_position(Dlist li,int position);


#endif
