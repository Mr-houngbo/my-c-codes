/******************************************* Exercice10   ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
typedef enum
{
 false,true
}Bool;

float Un(float x,int n)
{
 if(n==0)
	return 2;
 return (Un(x,n-1)+(x/Un(x,n-1)))/2;
}
void exercice10()
{
 int n=0;
 float x;
 do
 {
 	printf("Entrez une valeur positive x \n");
	scanf("%f",&x);
 }while(x<=0);
 printf("\n\nn   Un\n");
 while(fabs(Un(x,n)-sqrt(x))>=0.0001)
  {
   printf("\n\n%d   %.4f\n",n,Un(x,n));
   n++;
  }

}
int main(int argc, char **argv)
{

  exercice10();
}