#include <stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned long fact(int n);
int main()
{
 unsigned long f;
 int n,i;
 float x,S=0,a,b,c;
 printf("Entrez un nombre entier !\n");
 scanf("%d",&n);
 printf("Entrez un nombre reel !\n");
 scanf("%f",&x);
 for(i=1;i<=n;i++)
 {
   a=pow((-1),i);
   b=pow(x,i+1);
   c=fact((2*i)+1);
   S=S+((a*b)/c);
 }
 printf("La somme est : Sn(x) = %f ",S);
 return 0;
}
 unsigned long fact(int n)
{
  int i;
  long facto=1;
  for(i=1;i<=n;i++)
  {
    facto=facto*i;
  }
  return facto;
}
