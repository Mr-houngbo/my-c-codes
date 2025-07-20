#ifndef __TREE__
#define __TREE__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef enum
{
 false,true
}Bool;
typedef struct tree
{
 int value;
 struct tree *tleft; 
 struct tree *tright;
 struct tree *parent;
}tree;
tree *new_tree(int x);
void clear_tree(tree *tr);
tree *join_tree(tree *left,tree *right,int node);
void print_tree(tree *tr);
int count_tree_node(tree *tr);
int height_tree(tree *tr);
tree *tri_tree(tree *tr);
Bool complet_tree(tree *tr);
tree *push_head_tree_left(tree *tr1,int x);
tree *push_head_tree_right(tree *tr1,int x);
tree *generate_complete_tree(int height,int ref_val);
tree *best_tri_tree(tree *tr);

#endif
