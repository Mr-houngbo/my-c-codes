//header
#ifndef _CONST_FILE__
#define _CONST_FILE__
#include "Raoul.h"
typedef enum
{
 false,true
}bool;
typedef struct queueElement
{
 int value;
 struct queueElement *next;
}queueElement,*queue;
//Parametres de la file
static queueElement *first=NULL;
static queueElement *last=NULL;
static int nb_elements=0;
bool is_empty_queue();


#endif
