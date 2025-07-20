#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//#include <conio.h>

int main()
{
    int  Max=100,Min=1,x,y,f,s,q,h=1;
    float t=0,w=0;
    unsigned int n,r,z;
    long a,b,c,d;
    srand(time(NULL));
    n=(rand()%(Max-Min+1)+Min);
   (z=1)  ;
   x=1;
   y=1;
   f=1;
   s=1;
   printf("CE JEU A ETE PROGRAMME PAR RAOUL HOUNGBO \n");
   printf("\n\n\n");
   do
   {

   printf(" Bienvenu dans le jeu du nombre mystere de raoul !\n");
   printf("      Deux modes de jeux sont possibles !         \n");
   printf("##################################################\n");
   printf("####                ####                      ####\n");
   printf("## 1- MODE UN JOUEUR ### 2- MODE DEUX JOUEURS  ###\n");
   printf("####                ####                      ####\n");
   printf("##################################################\n");
   printf("       Quel est votre choix ?                     \n");
   scanf("%d",&q);
   while ((q<1)||(q>2))
   {
       printf("Veuillez bien vouloir inscrire un nombre entre 1 et 2 !\n");
       scanf("%d",&q);
   }
   if (q==2)
   {
       printf("Bienvenu au MODE DEUX JOUEURS !\n");
       printf("Nous invitons le premier joueur a saisir le nombre mystere !\n");
       scanf("%f",&t);
       system("cls");
       printf("Veuillez bien passer l'ordinateur au second joueur!\n");
       system("PAUSE");
       printf("A vous de jouer !! \n");
       system("PAUSE");
       printf("DEVINEZ LE NOMBRE MYSTERE !\n");
       scanf("%f",&w);
       do
        {
            if (t<w)
            {
                printf("PLUS PETIT ! \n");
                scanf("%f",&w);
            }
            else if (t>w)
            {
                printf("PLUS GRAND ! \n");
                scanf("%f",&w);
            }
            else
                printf(" \n\n \n");
            h++;

        }
        while (t!=w);
         printf("BRAVO ! Vous avez resolu le mystere en %d coups !\n",h);
         printf("Voulez-vous poursuivre l'aventure ?  Tapez :0 pour oui et 1 pour non \n");
         scanf("%d",&z);
         system("cls");
   }
   if (q==1)
   {




    printf("^^^^^^^^^^^^^^^^^^^^^MENU^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("^        1:  Niveau Debutant : De 1 a 100            ^\n");
    printf("^        2:  Niveau Intermediaire : De 1 a 1000      ^\n");
    printf("^        3:  Niveau Maitre : De 1 a 5000             ^\n");
    printf("^        4:  Niveau Expert : De 1 a 10000            ^\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("           Quel est votre choix ?                   \n");
    scanf("%ld",&a);
   while ((a<1)||(a>4))
   {
       printf("IDIOT(E) ecris un nombre entre 1 et 4\n");
       scanf("%ld",&a);
   }





    switch (a)
    {


    case 1:
        printf("Bienvenu au Niveau Debutant\n");
        printf("Devinez le nombre mystere!\n");
        scanf("%d",&r);
        do
        {
            x++;
            if (n<r)
            {
                printf("PLUS PETIT ! \n");
                scanf("%d",&r);
            }
            else if (n>r)
            {
                printf("PLUS GRAND ! \n");
                scanf("%d",&r);
            }
            else
                printf(" !!! \n");

        }
        while (n!=r);
         printf("BRAVO ! Vous avez resolu le mystere en %d coups !\n",x);
         printf("Voulez-vous poursuivre l'aventure ?  Tapez :0 pour oui et 1 pour non \n");
         scanf("%d",&z);
         system("cls");
         x=1;
        break;
    case 2:
        Max=1000 ;
        printf("Bienvenu au Niveau Intermediaire !\n");
        printf("Devinez le nombre mystere ! \n");
        scanf("%ld",&b);
        n=(rand()%(Max-Min+1)+Min);
        do
        {
            y++;
            if (n<b)
            {
                printf("PLUS PETIT ! \n");
                scanf("%ld",&b);
            }
            else if (n>b)
            {
                printf("PLUS GRAND ! \n");
                scanf("%ld",&b);
            }
            else
                printf(" !!! \n");

        }
        while (n!=b);
         printf("BRAVO ! Vous avez resolu le mystere en %d coups !\n",y);
         printf("Voulez-vous poursuivre l'aventure ?  Tapez :0 pour oui et 1 pour non \n");
         scanf("%d",&z);
         system("cls");
         y=1;
        break;
    case 3:
        Max =5000 ;
        printf("Bienvenu au Niveau Maitre !\n");
        printf("Devinez le nombre mystere ! \n");
        scanf("%ld",&c);
        n=(rand()%(Max-Min+1)+Min);
        do
        {
            f++;
            if (n<c)
            {
                printf("PLUS PETIT ! \n");
                scanf("%ld",&c);
            }
            else if (n>c)
            {
                printf("PLUS GRAND ! \n");
                scanf("%ld",&c);
            }
            else
                printf(" !!! \n");

        }
        while (n!=c);
         printf("BRAVO ! Vous avez resolu le mystere en %d coups\n",f);
         printf("Voulez-vous poursuivre l'aventure ?  Tapez :0 pour oui et 1 pour non \n");
         scanf("%d",&z);
         system("cls");
         f=1;
        break;
    case 4:
         Max =10000 ;
        printf("Bienvenu au Niveau Expert !\n");
        printf("Devinez le nombre mystere ! \n");
        scanf("%ld",&d);
        n=(rand()%(Max-Min+1)+Min);
        do
        {
            s++;

            if (n<d)
            {
                printf("PLUS PETIT ! \n");
                scanf("%ld",&d);
            }
            else if (n>d)
            {
                printf("PLUS GRAND ! \n");
                scanf("%ld",&d);
            }
            else
                printf(" !!! \n");
        }
        while (n!=d);
         printf("BRAVO ! Vous avez resolu le mystere en %d coups !\n",s);
         printf("Voulez-vous poursuivre l'aventure ?  Tapez :0 pour oui et 1 pour non \n");
         scanf("%d",&z);
         system("cls");
         s=1;
        break;
    default :
        printf("Veuillez entrer un nombre qui correspond a un choix dans le menu !\n");
        scanf("%ld",&a);
        break;
    }

    }
   }
   while (z!=1);


    return 0;
}
