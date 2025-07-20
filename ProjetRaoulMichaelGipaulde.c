#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Menu( );
void Menu1();
void Menu2( );
void Menu3( );
void Menu4( );
void Menu5( );
void Menu6( );
void PGCD( );
void  PPCM( );
void simplifierfraction( );
float** matriceReduite(float **mat,int taille,int b,int c);
float determinant(float **mat,int taille);

int main()
{
     int u=0,b=0,c=0,d,cx=0,xx=0,tab[6]={0},i,j,no,k,ii;
     double a=0,b1=0,c1=0,d1=0;
     float n0=0,n1=0,n3=0,n4=0,n5=0,n7=0,n8=0,n9=0,x=0,y=0,z=0,t=0,q=0,r=0,i1=0,i2=0,i3=0,A=0,B=0,aa=0;
     float  n2=0,n6=0,d2=0,**mat;
  do
   {   
     Menu();
     printf("\n");
     scanf("%d",&b);
     system("clear");
     switch (b)
     {
     case 1:
     {
       Menu1();
       scanf("%d",&c);
       system("clear");
       if(c==1)
       {
           printf("==  Entrez les deux nombres !    ==\n");
           scanf("%f%f",&x,&y);
           z=x+y;
           printf("==   (%f+%f)=%f   ==\n",x,y,z);
           x=0;
           y=0;
           z=0;
       }
       else if(c==2)
       {
           printf("==  Entrez les deux nombres !    ==\n");
           scanf("%f%f",&x,&y);
           z=x*y;
           printf("==   (%f*%f)=%f   ==\n",x,y,z);
           x=0;
           y=0;
           z=0;
       }
       else if(c==3)
       {
           printf("==  Entrez les deux nombres !    ==\n");
           scanf("%f%f",&x,&y);
           z=x/y;
           printf("==   (%f/%f)=%f   ==\n",x,y,z);
           x=0;
           y=0;
           z=0;
       }
       else if(c==4)
       {
           printf("==  Entrez les deux nombres !    ==\n");
           scanf("%f%f",&x,&y);
           u=x/y;
           printf("==   (%f/%f)=%d   ==\n",x,y,u);
       }
       else if(c==5)
       {
           printf("==  Entrez les deux nombres !    ==\n");
           scanf("%d%d",&i,&j);
           u=i%j;
           printf("==   (%dmod%d)=%d   ==\n",i,j,u);
       }
       else if(c==6)
       {
           printf("==  Entrez le nombre !    ==\n");
           scanf("%d",&i);
           for(u=0;u<=12;u++)
           {
             printf("%d*%d=%d\n",u,i,u*i);
           }
       }
       else if(c==7)
       {
           printf("==  Entrez le nombre !    ==\n");
           scanf("%d",&i);
           if(i%2==0)
               printf("\n==%d est un nombre pair ==\n",i);
           else
               printf("\n==%d est un nombre impair ==\n",i);    
           
       }
       else 
       { 
           printf("Idiot !\n");
       }
       break;
     }
     case 2:
     {
       printf("==      Entrez le nombre dont vous voulez la racine carree !           ==\n");
       scanf("%f",&n2);
       n2=sqrt(n2);
       printf("==La racine carree du nombre  est %.3f==\n",n2);
       break;
     }
     case 3:
     {
        printf("==     Entrez le nombre dont vous voulez la valeur absolue !           ==\n");
        scanf("%f",&n3);
        n3=fabs(n3);
        printf("==la valeur absolue du nombre est %f ==\n",n3);
        break;
     }
     case 4:
     {
       printf("==      Entrez le nombre  et son exposant !           ==\n");
       scanf("%f%f",&n4,&n5);
       n4=pow(n4,n5);
       printf("===le resultats    est %f\n===",n4);
       break;
     }
     case 5:
     {
          printf("==      Entrez le nombre dont vous voulez le logarithme neperien !           ==\n");
          scanf("%f",&n6);
          n6=log(n6);
          printf("== Le resultats   est %f==\n",n6);
          break;
     }
     case 6:
     {
          printf("==      Entrez le nombre dont vous voulez l'exponentielle  !           ==\n");
          scanf("%f",&n7);
          n7=exp(n7);
          printf("== Le resultats   est %f==\n",n7);
          break;
     }
     case 7:
     {
         printf("==     1: Produit vectoriel de deux vecteurs de  |R³!         ==\n");
         printf("==     2: Produit scalaire de deux vecteurs de |R³ !          ==\n");
         scanf("%d",&c);
         if(c==1)
         {
           printf("Entrez les coordonnees des deux vecteurs en ligne\n ");
           printf("C'est a dire  x=.. .. .. et y=.. .. .. \n");
           y=0;
           d=0;
           do
           {
           for(u=d;u<=(d+2);u++)
           {
            scanf("%d",&tab[u]);
           }
           printf("\n");
           y++;
           d=3;
           }while(y!=2);
           i1=tab[1]*tab[5]-tab[2]*tab[4];
           i2=tab[2]*tab[3]-tab[5]*tab[0];
           i3=tab[0]*tab[4]-tab[1]*tab[3];
           printf("  (%d,%d,%d)~(%d,%d,%d)=(%f,%f,%f) \n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],i1,i2,i3);
           for(u=0;u<=5;u++)
           {
             tab[u]=0;
           }
         }
         else if (c==2)
         {
           u=0;
           d=0;
           y=0;
           printf("Entrez les coordonnees des deux vecteurs en ligne\n ");
           printf("C'est a dire  x=.. .. .. et y=.. .. .. \n");
           do
           {
           for(u=d;u<=(d+2);u++)
           {
            scanf("%d",&tab[u]);
           }
           printf("\n");
           y++;
           d=3;
           }while(y!=2);
           i1=(tab[0]*tab[3])+(tab[1]*tab[4])+(tab[5]*tab[2]);
           printf("  (%d,%d,%d).(%d,%d,%d)=(%f) \n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],i1);
         }
         else
         {
          printf("IDIOT !\n");
         }
      break;
     }
     case 8:
     {
         c=0;
         Menu2( );
         scanf("%d",&c);
         system("clear");
        //    Aire d'une pyramide !    
        //    Aire d'un rectangle  !   
        //    Aire d'un cone !         
         //   Aire d'un triangle !      
        //    Aire d'un cylindre  !     
         if(c==1)
          {
          
          }
          else if(c==2)
          {
           printf("Entrez respectivement la longueur et la largeur du rectangle !\n");
           scanf("%f%f",&n0,&n1);
           printf("L'aire de ce rectangle est A=%fm²\n",n0*n1);
          }
          else if(c==3)
          { 
            printf("== 1 Aire de base !   ==\n ");
            printf("== 2 Aire Laterale  ! ==\n ");
            scanf("%d",&xx);
            if(xx==1)
           {
            printf("== Entrez le  rayon du cone ! ==\n");
            scanf("%f",&x);
            d1=x*x*3.14;
            printf("== L'aire de base du cone est %lf ==\n",d1);
           }
           else if(xx==2)
           {
            printf("== Entrez le rayon et l'arrete du cone ! ==\n");
            scanf("%f",&x);
            scanf("%f",&y);
            d1=3.14*x*y;
            printf("== L'aire Laterale  du cylindre est %lf ==\n",d1);
           }
           else
           {
            printf("Idiot !\n");
           }
          }
          else if(c==4)
          {
           printf("==Entrez respectivement la base et la hauteur du triangle !==\n");
           scanf("%f%f",&n2,&n6);
           d2=(n2*n6)/2;
           printf("== L'aire du triangle est %f !==\n",d2);
          }
          else if(c==5)
          {
           printf("== 1 Aire de base !   ==\n ");
           printf("== 2 Aire Laterale  ! ==\n ");
           scanf("%d",&xx);
           if(xx==1)
           {
            printf("== Entrez le rayon du cylindre ! ==\n");
            scanf("%f",&x);
            d1=x*x*3.14;
            printf("== L'aire de base du cylindre est %lf ==\n",d1);
           }
           else if(xx==2)
           {
            printf("== Entrez le rayon et la hauteur du cylindre ! ==\n");
            scanf("%f",&x);
            scanf("%f",&y);
            d1=2*3.14*x*y;
            printf("== L'aire Laterale  du cylindre est %lf ==\n",d1);
           }
           else
           {
            printf("Idiot !\n");
           }
          }
          else
         {
          printf("IDIOT !\n");
         }
         break;
     }
     case 9:
     {
        printf("Entrez les coefficients a b et c \n");
        scanf("%lf%lf%lf",&a,&b1,&c1); 
        break;
     } 
     case 10:
     { 
         printf("===    1  PPCM                        ===\n ");
         printf("===    2  PGCD                        ===\n ");
         printf("===    3  Simplification de fraction  ===\n ");
         scanf("%d",&cx);
         if(cx==1)
               PPCM( );
         else if(cx==2)
               PGCD( );
         else if(cx==3)
               simplifierfraction( );
         else
               printf("Idiot  !\n");
         break;
     }
     case 11:
     {
         Menu3( );
         system("clear");
         break;
     }
     case 12:
     {
         //  1   Module d'un nombre complexe  
         //  2  Conjugue d'un nombre complexe ! 
         //3 Somme de deux nombres complexes !   
        //  4  Argument d'un nombre complexe  !  
         Menu4( );
         scanf("%f",&n7);
         system("clear");
         if(n7==1)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de votre nombre complexe z=a+ib !\n"); 
           scanf("%f%f",&n8,&n9);
           n5=sqrt((pow(n8,2))+((pow(n9,2))));
           printf("Le module z=%.0f+i%.0f est |z|=%.0f \n",n8,n9,n5);
          }
          else if(n7==2)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de votre nombre complexe a+ib !\n"); 
           scanf("%f%f",&n8,&n9);
           printf("Le conjugue de z=%.0f+i%.0f est _z_=%.0f-i%.0f \n",n8,n9,n8,n9);
          }
          else if(n7==3)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de vos deux  nombres complexes a+ib !\n"); 
           scanf("%f%f%f%f",&n3,&n4,&n8,&n9);
           printf("La somme est z=%.0f+i%.0f \n",n3+n8,n4+n9);
          }
          else if(n7==4)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de votre nombre complexe a+ib !\n"); 
           scanf("%f%f",&n8,&n9);
          }
          else if(n7==5)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b devos deux  nombres complexes a+ib !\n"); 
           scanf("%f%f%f%f",&n3,&n4,&n8,&n9);
           
          }
          else if(n7==6)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de votre nombre complexe a+ib !\n"); 
           scanf("%f%f",&n8,&n9);
          }
          else if(n7==7)
          {
           printf("Entrez la partie reelle a et la partie immaginaire b de votre nombre complexe a+ib !\n"); 
           scanf("%f%f",&n8,&n9);
          }
          else
          {
           printf("Idiot !!\n");
          }
         break;
     }
     case 13:
     {
      printf("== PROGRAMME DE CALCUL DU DETERMINANT D'UNE MATRICE CARREE DE TAILLE N ==\n");
      printf("==             Entrez la taille de votre matrice !                     ==\n");
      scanf("%d",&no);
      mat=malloc(no*sizeof(float *));
      for(ii=0;ii<no;ii++)
       {
        mat[ii]=malloc(no*sizeof(float));
       }
      printf("**Entrez les elements de votre matrice suivant la ligne ! **\n");
      for(ii=0;ii<no;ii++)
       {
        for(k=0;k<no;k++)
         {
          scanf("%f",&mat[ii][k]);
         }
        printf("\n");
       }
      aa=determinant(mat,no);
      printf("==   Le determinant de votre matrice est : %.0f                           ==\n",aa);
      printf("==                  FIN DU PROGRAMME                                   ==\n");
      printf("==     PROGRAMME ECRIT PAR HOUNGBO Calixte Raoul                       ==\n");
      for(ii=0;ii<no;ii++)
       {
        free((float *)mat[ii]);
       }
     
         break;
     }
     case 14:
     {
         Menu5( );
         system("clear");
         break;
     }
     case 15:
     {
         printf("\n Veuillez patienter le temps qu'on ecrive le programme correspondant !\n");
         break;
     }
     case 16:
     {
         printf("\n Veuillez patienter le temps qu'on ecrive le programme correspondant !\n");
         break;
     }
     case 17:
     {
         printf("\n Veuillez patienter le temps qu'on ecrive le programme correspondant !\n");
         break;
     }
     case 18:
     {
         Menu6( );
         system("clear");
         break;
     }
     default :
           {
             printf("Idiot");
           }
     }
  
     
     printf("Voulez vous continuer  ? \n  1 pour NON  et tout nombre de |R pour OUI  \n");
     scanf("%f",&aa);
     if(aa!=1)
       system("clear");
  }while(aa!=1);
  return 0;   
} 
void Menu( )
{
  printf("==Programmed by H.Raoul.Calixte                                             ==\n");
  printf("===================================MENU=======================================\n");
  printf("==     1    Operation sur les nombres!                                      ==\n");
  printf("==     2    Racine carree d'un nombre!                                      ==\n");
  printf("==     3    Valeur absolue d'un nombre!                                     ==\n");
  printf("==     4    Puissance d'un nombre!                                          ==\n");
  printf("==     5    Logarithme neperien d'un nombre!                                ==\n");
  printf("==     6    Exponentielle d'un nombre!                                      ==\n");
  printf("==     7 Produit-scalaire,prodruit vectoriel de vecteurs dans une meme base ==\n");
  printf("==     8    Aire  de solides                                                ==\n");
  printf("==     9    Resolution d'equation du type aX²+bX+c (a,b,c) £ IR             ==\n");
  printf("==     10   PGCD , PPCM et Simplification de fractions                      ==\n");
  printf("==     11   Volumes de solides                                              ==\n");
  printf("==     12   Nombres complexes                                               ==\n");
  printf("==     13   Determinant d'une matrice carree d'ordre N                      ==\n");
  printf("==     14   Probabilite                                                     ==\n");
  printf("==     15   Statistique                                                     ==\n");
  printf("==     16   Conversion Monnaies                                             ==\n");
  printf("==     17   Division euclidienne de polynomes de degres fixes               ==\n");
  printf("==     18   Fonctions hyperboliques                                         ==\n"); 
  printf("===============================================Programmed by H.Raoul.Calixte==\n");
}
void Menu1( )
{
       printf("==     1    Addition de deux nombres !         ==\n");
       printf("==     2    Multiplication de deux nombres !   ==\n");
       printf("==     3    Division de deux  nombres !        ==\n");
       printf("==     4    Division entiere de deux nombre !  ==\n");
       printf("==     5    Modulo !                           ==\n");
       printf("==     6  Table de Multiplication d'un nombre !==\n");
       printf("==     7    Parite d'un nombre !               ==\n");
}
void Menu2( )//Aire
{
       printf("==     1    Aire d'une pyramide !     ==\n");
       printf("==     2    Aire d'un rectangle  !    ==\n");
       printf("==     3    Aire d'un cone !          ==\n");
       printf("==     4    Aire d'un triangle !      ==\n");
       printf("==     5    Aire d'un cylindre  !     ==\n");
}
void Menu3( )//Volume
{
       printf("==     1    Volume d'une pyramide !   ==\n"); 
       printf("==     2    Volume d'un cone !        ==\n");
       printf("==     3    Volume d'un triangle !    ==\n");
       printf("==     4    Volume d'un cylindre  !   ==\n");
       printf("==     5    Volume d'une sphere   !   ==\n");
}
void Menu4( )//Nombre complexe
{
  printf("==     1   Module d'un nombre complexe  !  ==\n");
  printf("==     2  Conjugue d'un nombre complexe !  ==\n");
  printf("==    3 Somme de deux nombres complexes !  ==\n");
  printf("==    4  Argument d'un nombre complexe  !  ==\n"); 
  printf("==  5 Produit de deux nombres complexes !  ==\n");
}
void Menu5( )//probabilite
{
       printf("==     1    Combinaison de deux nombres !     ==\n");
       printf("==     2    Arrangement de deux nombres !     ==\n");
       printf("==     3    Factorielle  d'un  nombre !       ==\n");
       printf("==     4    N-uplet                     !     ==\n");     
}
void Menu6( )//fonctions hyperboliques
{
       printf("==     1    Sinus (Sin)  d'un nombre  !     ==\n");
       printf("==     2    Cosinus (Cos)  d'un nombre !    ==\n");
       printf("==     3    Tangente (Tan)  d'un  nombre !       ==\n"); 
       printf("==     4    Cotangente (Cotan)  d'un  nombre !       ==\n");
       printf("==     5    Arcsinus (arcsin)  d'un  nombre !       ==\n");
       printf("==     6    Arccosinus (arccos)  d'un  nombre !       ==\n");       
       printf("==     7    Arctangente (arctan)  d'un  nombre !       ==\n");
       printf("==     6    Arccotangente (arccot)  d'un  nombre !       ==\n");
} 
float** matriceReduite(float **mat,int taille,int b,int c)
{
 float **Mat=NULL;
 int i=0,j=0,k=0,l=0,m=0,h=0;
 Mat=malloc((taille-1)*sizeof(float *));
 for(i=0;i<(taille-1);i++)
  {
    Mat[i]=malloc((taille-1)*sizeof(float));
  }
 for(i=0;i<taille;i++)
  {
   if(m!=h)
      l++;
   for(j=0;j<taille;j++)
    {
     h=m;
     if((i!=b)&&(j!=c))
      {
       Mat[l][m]=mat[i][j];
       m++;
      }
    }
   m=0;
  }
 for(i=0;i<(taille-1);i++)
  {
   for(j=0;j<(taille-1);j++)
    {
     printf("%.2f ",Mat[i][j]);
    }
   printf("\n");
  }
 printf("\n\n\n");
 return Mat;
}
float determinant(float **mat,int taille)
{
 int i=0;
 float Determinant=0;
 if(taille==1)
  {
    Determinant=mat[0][0];
  }
 else if(taille==2)
  {
   Determinant=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
  }
 else
 {
    for(i=0;i<taille;i++)
     {
       Determinant=Determinant+((pow(-1,i))*(mat[0][i])*(determinant(matriceReduite(mat,taille,0,i),taille-1)));
     }
 }
 return  Determinant;
}
void PGCD( )
{
 
    int reste=0,dividende=0,diviseur=0;
    printf(" Entrez lA DIVIDENDE  !\n");
    scanf("%d",&dividende);
    printf("Entrez le diviseur !\n");
    scanf("%d",&diviseur);
    do
    {
        reste=dividende%diviseur;
        dividende=diviseur;
        diviseur=reste;
    }while(reste!=0);
    printf("Le pgcd est %d\n",dividende);
 
} 
void  PPCM( )
{
 int f=0,g=0 ,k=0,v=0,gg=0;
 float h=0;
 printf("Entrez les deux valeurs !\n");
 scanf("%d%d",&f,&g);
 k=f;
 gg=g;
 do
  {
        v=k%gg;
        k=gg;
        gg=v;
    }while(v!=0);
 h=(f*g)/k;
 printf("Le PPCM de %d et %d est %f \n",f,g,h);
} 
void simplifierfraction( )
{
 int dvd=0,dvs=0,reste=0,divd=0,divs=0,kk,jj;
 printf("Entrez a et b pour la reduction de la fraction a/b !\n"); 
 scanf("%d%d",&divd,&divs);
 dvd=divd;
 dvs=divs;
 kk=divd;
 jj=divs;
  do
    {
        reste=dvd%dvs;
        dvd=dvs;
        dvs=reste;
    }while(reste!=0); 
  divd=(divd)/(dvd);
  divs=(divs)/(dvd);
  printf("%d/%d devient %d/%d !\n",kk,jj,divd,divs);
}
