#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void simplifierfraction(int *divd ,int *divs);
int Nombre(double *n) ;
int main( )
{
 double h,h1;
 int j,t;
 printf("Entrez votre nombre decimal \nCertes ce programme ne peut gerer qu'au plus six chiffres aprs la virgule\n");
 scanf("%lf",&h);
 h1=h;
 j=Nombre(&h);
 printf("\nVotre nombre contient %d chiffres apres la virgule \n",j);
 j=pow(10,j);
 t=h1*j;
 simplifierfraction(&t,&j);
 printf("La fraction reduite est %d/%d !\n",t,j);
}
void simplifierfraction(int *divd ,int *divs)
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
int Nombre(double *n )//fonction nombre de chiffre apres la virgule d'un entier
{
  int i=0;
  long int k=0;
  do
  {
   *n=*n*10;
   i++;
   k=(long int)*n;
  }while(*n!=k);
  return i;
}
