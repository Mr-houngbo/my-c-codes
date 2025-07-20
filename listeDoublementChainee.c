#include "listfunction.c"
int main( )
{
 Dlist maliste=new_Dlist();
 maliste=push_front_Dlist(maliste,100);
 maliste=push_front_Dlist(maliste,90);
 maliste=push_front_Dlist(maliste,80);
 maliste=push_front_Dlist(maliste,70);
 maliste=push_front_Dlist(maliste,60);
 maliste=push_front_Dlist(maliste,50);
 maliste=push_front_Dlist(maliste,40);
 maliste=push_front_Dlist(maliste,30);
 maliste=push_front_Dlist(maliste,20);
 maliste=push_front_Dlist(maliste,10);
 print_Dlist(maliste);
 printf("Taille de ma liste doublement chainee : %d\n",Dlist_length(maliste));
 printf("############################### Ajout aux lignes 3,6,9 #################################\n");
 /*maliste=insert_at_position(maliste,333,1);
 maliste=insert_at_position(maliste,666,4);
 print_Dlist(maliste);
 maliste=insert_at_position(maliste,999,maliste->length);
 maliste=insert_at_position(maliste,888,maliste->length);
 print_Dlist(maliste);*/
 maliste=insert_at_position(maliste,888,maliste->length);
 maliste=insert_at_position(maliste,444,maliste->length);
 maliste=insert_at_position(maliste,777,maliste->length);
 maliste=insert_at_position(maliste,555,maliste->length);
 print_Dlist(maliste);
 printf("Taille de ma liste doublement chainee : %d\n",Dlist_length(maliste));
 printf("################################################################\n");
 maliste=remove_at_position(maliste,5);
 maliste=remove_at_position(maliste,4);
 maliste=remove_at_position(maliste,1);
 maliste=remove_at_position(maliste,3);
  print_Dlist(maliste);
 printf("Taille de ma liste doublement chainee : %d\n",Dlist_length(maliste));
 maliste=clear_Dlist(maliste);
 print_Dlist(maliste);
 printf("Taille de ma liste doublement chainee : %d\n",Dlist_length(maliste));











 return 0;
}
