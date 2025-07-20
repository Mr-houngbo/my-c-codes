#include<stdio.h>
#include<stdlib.h> 
int simplifierfraction(int *divd ,int *divs); 
int main()
{
 int dividende=0,diviseur=0;
 printf("Je veux simplifier votre fraction !\n");
 printf("Entrez la dividende et le diviseur !\n");
 scanf("%d%d",&dividende,&diviseur);
 simplifierfraction(&dividende,&diviseur);
 if(dividende==diviseur)
      printf("La fraction reduite est %d !\n",dividende);
 else
      printf("La fraction reduite est %d/%d !\n",dividende,diviseur); 
 return 0;
}
 
int simplifierfraction(int *divd ,int *divs)
{
 int dvd=0,dvs=0,reste=0;;
 dvd=*divd;
 dvs=*divs; 
  do
    {
        reste=dvd%dvs;
        dvd=dvs;
        dvs=reste;
    }while(reste!=0); 
 *divd=(*divd)/(dvd);
 *divs=(*divs)/(dvd);
}
