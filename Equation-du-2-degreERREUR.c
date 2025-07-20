#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int EntierNaturel( float f);
void Fraction(int *h,int *p);
int min(int h,int g);
int main()
{
 int a=0,b=0,c=0;
 float A=0,B=0,R=0,T=0,S=0,x=0,y=0,z=0;
 printf("Vous etes la pour resourdre une equation du second degre du type aX²+bX+c = 0 \n Avec  (a,b,c)£ |R \n");
 printf("Entrez alors les coefficients de l' equation (aX²+bX+c = 0 ) a,b et c successivement !\n");
 scanf("%d%d%d",&a,&b,&c);
 A=(pow(b,2)-4*a*c);
 x=((-b)-sqrt(A));
 y=((-b)+sqrt(A));
 z=2*a;
 if(A>0)
   {
    if(EntierNaturel(sqrt(A))==1)
    {
     if(((((-b)-sqrt(A))%(2*a))==0)&&((((-b)+sqrt(A))%(2*a))==0))
     {
       R=((-b)-sqrt(A))/(2*a);
       T=((-b)+sqrt(A))/(2*a);
       printf("Votre equation est %dX²+%dX+%d \n Elle admet deux solutions reelles : A=%.1lf et B=%.1lf\n",a,b,c,R,T);
     }
     else
     {
         if((x%z)!=0)&&((y%z)==0))
         {
          // R=x/z;
           T=y/z;
           printf("Votre equation est %dX²+%dX+%d \n Elle admet deux solutions reelles : A=%.1lf et B=%.0lf\n",a,b,c,R,T);
         }
       else if((x%z)==0)&&((y%z)!=0))
         {
           R=x/z;
          // T=y/z;
           printf("Votre equation est %dX²+%dX+%d \n Elle admet deux solutions reelles : A=%.0lf et B=%.0lf\n",a,b,c,R,T); 
         }
       else if((x%z)!=0)&&((y%z)!=0))
         {
          // R=x/z;
          // T=y/z;
           printf("Votre equation est %dX²+%dX+%d \n Elle admet deux solutions reelles : A=%.1lf et B=%.0lf\n",a,b,c,R,T); 
         }
     }
   }
  }
  else if(A<0)
   {
    B=(-A);
    R=((-b)/(2*a));
    T=(sqrt(B))/(2*a);
    printf("L'equation est %dX²+%dX+%d\n Elle admet deux solutions complexes : A=(%.1lf)+i(%.1lf) et B=(%.1lf)-i(%.1lf)\n",a,b,c,R,T,R,T);
   }
  else
   {
     S=(-b)/(2*a);
     printf("Votre equation est %dx²+%dX+%d \n Elle admet une unique solution reelle : X=%.1lf\n",a,b,c,S);
   }
 return 0;

}
int EntierNaturel( float f)
{
  int i=0;
  i=f;
  if(f==i)
      return 1;
  else
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
   j++;
  }while(tabc[j]!=0);
  j=0;
 do
  {
   *p=*p/tabc[j];
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
