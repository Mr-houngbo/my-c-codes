#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Fraction(int *h,int *p);
int min(int h,int g);
int main()
{
int a=0,b=0;
printf("deux eniers \n");
scanf("%d%d",&a,&b);
Fraction(&a,&b);
printf("\n%d/%d\n",a,b);
return 0;
}
void Fraction(int *h,int *p)
{
 int d1=0,tabn[20]={0},tabd[20]={0},tabc[20]={0},j=0,k=0,d=0,o=0,tri=0,P=1;
 for(j=1;j<=9;j++)
 {
  if((*h%j)==0)
   {
     tabn[j-1]=j;
     d++;
   }
 }
 for(j=1;j<=9;j++)
 {
  if((*p%j)==0)
   {
     tabd[j-1]=j;
     d1++;
   }
 }
 for(j=0;j<20;j++)
 {
   for(k=j;k<20;k++)
    {
      if(tabn[j]<tabn[k])
        {
          tri=tabn[j];
          tabn[j]=tabn[k];
          tabn[k]=tri;
        }
    }
 }
 for(j=0;j<20;j++)
 {
   for(k=j;k<20;k++)
    {
      if(tabd[j]<tabd[k])
        {
          tri=tabd[j];
          tabd[j]=tabd[k];
          tabd[k]=tri;
        }
    }
 }
 for(j=0;j<d;j++)
  {
    for(k=0;k<d1;k++)
     {
       if(tabn[j]==tabd[k])
        {
           tabc[o]=tabd[k];
           o++;
        }
     }
  }
 o=0;
 for(j=0;j<min(d,d1);j++)
  {
    if(tabc[j]!=0)
        o++;
  }
 j=0;
 do
  {
   *h=*h/tabc[j];
   printf("%d\n",*h);
   j++;
  }while(tabc[j]!=0);
  j=0;
 do
  {
   *p=*p/tabc[j];
   printf("%d\n",*p);
   j++;
  }while(tabc[j]!=0);
}
int min(int h,int g)
{
  if(h<g)
     return h;
  else 
     return g; 
}
