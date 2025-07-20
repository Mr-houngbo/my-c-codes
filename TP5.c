#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int A,B,C;
  printf("Entrez les trois entiers\n");
  scanf("%d%d%d",&A,&B,&C);
  if(A>B)
    {
         if(A>C){
                 printf("La plus grande valeur est A= %d",A);
          }else{
                printf("La plus grande valeur est C= %d",C);
          }
    }
  else{
    
       if(B>C){
                 printf("La plus grande valeur est B= %d",B);
          }else{
                printf("La plus grande valeur est C= %d",C);
          }
      }
    
    
   
      
 return 0; 
}
