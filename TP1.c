#include<stdio.h>
#include<stdlib.h>
int a,b;
float c;
int main()
{
  printf("Entrez a\n");
  scanf("%d",&a);
  printf("Entrez b\n");
  scanf("%d",&b);
  c=(float)a/b;
  printf("%d/%d=%.2f\n",a,b,c);
  return 0;


}
