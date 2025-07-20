#include <stdio.h>
#include <stdlib.h>
void ordonnerTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[10]={0},a=0,d=0;
    printf("Entrez les dix nombres entiers ! \n");
    for(a=0;a<10;a++)
    {
        scanf("%d",&tableau[a]);
    }
    system("clear");
    ordonnerTableau(tableau,10);
    printf("Voici le tableau bien ordonne !\n");
    for(d=0;d<10;d++)
    {
        printf("%d\n",tableau[d]);
    }
    return 0;
}
void ordonnerTableau(int tableau[], int tailleTableau)
{
   unsigned int c=0,d=0;
   int tri=0;
   for(c=0;c<tailleTableau;c++)
   {
       for(d=c;d<tailleTableau;d++)
       {
           if(tableau[c]>tableau[d])
           {
               tri=tableau[c];
               tableau[c]=tableau[d];
               tableau[d]=tri;
           }
       }
   }

}

