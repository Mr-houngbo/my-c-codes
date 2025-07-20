#ifndef CONSTANTE
#define CONSTANTE
#include "Raoul.h"
typedef enum
 {
  false,true
 }bool;
//Definition d'une pile 
typedef struct stackElement
 {
  int value;
  struct stackElement *next;
 }stackElement,*stack;
stack new_stack();
bool is_empty_stack(stack pil);
stack insert_stack(stack pil,int x);
stack clear_stack(stack pil);
void print_stack(stack pil);
stack remove_stack(stack pil);
int top_stack(stack pil);
int length_stack(stack pil);


#endif
