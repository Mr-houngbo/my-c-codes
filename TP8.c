#include<stdio.h>
#include<stdlib.h>
int f1(int i){return (i+1);}
int f2(int i){return (i+1);}
int f3(int i){printf("%d\n",(i==0)); return (i);}
int f4(int i){printf("%d\n",(i=0));return (i);}
int main ()
{
  int a,b;
  a=f1(0);
  b=f2(1);
  printf("a=%d,b=%d\n",a,b);
  a=f3(a);
  b=f4(a);
  printf("a=%d,b=%d\n",a,b);
}
