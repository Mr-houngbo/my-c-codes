#include<stdio.h>
int main()
{
 int monTab[]={12,21,28,20,11,6,21},k=0,min=0,max=0;
 min=monTab[0];
   for(k=0;k<7;k++)
    {
     if(monTab[k]<min)
        min=monTab[k];
    }
 printf("Le plus petit element du tableau monTab  est :  %d \n",min);
 max=monTab[0];
   for(k=0;k<7;k++)
    {
     if(monTab[k]>max)
        max=monTab[k];
    }

  printf(" Le plus grand element du tableau monTab  est : %d \n",max);
 return 0;
}
