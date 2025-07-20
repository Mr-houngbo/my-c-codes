#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
 int ordre;
 int **matrice; 
}MATRICE;
MATRICE* matrice_new (int ordre);
void Affichage(MATRICE*M);
MATRICE* matrice_reduite(MATRICE*M,int l,int c);
int determinant(MATRICE*M) ;
MATRICE* produit_par_scalaire(MATRICE*M,int e );
MATRICE* transposee(MATRICE*M);
MATRICE* Comatrice(MATRICE*M);
MATRICE* Inverse(MATRICE*M);
int main( )
{
int n,i,j;
MATRICE *M,*I;
printf(" Entrer l’ ordre dela matrice : ");
scanf("%d",&n );
M=matrice_new(n);
I=matrice_new(n);
printf(" Remplir l a matrice :\n");
for(i=0;i<=(M->ordre);i++)
 for(j=0;j<(M->ordre);j++)
  scanf("%d",&(M->matrice[i][j]));
printf("\nAffichage de la Matrice :\n");
 Affichage(M);
 I=Inverse(M);
printf("\nAffichage de la Matrice Inverse :\n");
 Affichage(I);
 return 0;
 
}
MATRICE* matrice_new(int ordre)
{
 MATRICE*M=(MATRICE *) malloc(sizeof(MATRICE));
int i ;
M->ordre=ordre ;
M->matrice=malloc (ordre *sizeof(int));
for(i=0;i<(M->ordre);i++)
{
M->matrice[i]=malloc(ordre * sizeof(int)) ;
}
return M;
}
void Affichage(MATRICE*M)
{
int i,j;
printf("%s ordre:%d\n" , __func__ ,M->ordre);
for(i=0;i<(M->ordre);i++)
{
for(j=0;j<(M->ordre);j++)
{
printf("%d\t " ,M->matrice[i][j]);
}
printf( " \n" ) ;
j=0;
}
}
MATRICE* matrice_reduite(MATRICE*M, int l , int c)
{
int i=0,j=0,k=0,v=0;
MATRICE* A=matrice_new((M->ordre) -1);
while(i<(M->ordre))
{
if(i!=l)
{
while(j<(M->ordre))
{
if(j!=c)
{
 A->matrice[k][v]=M->matrice[i][j];
 v++;
 j++;
}
else
{
 j++;
}
}
 v=0;
 j=0;
 k++;
 i++;
}
else
{
 i++;
 j=0;
}
}
return A;
}
int determinant(MATRICE*M)
{
int i=0,det=0;
if((M->ordre)==1)
{
det=M->matrice[0][0];
}
else if((M->ordre)==2)
{
 det=(M->matrice[0][0])*(M->matrice[1][1])-(M->matrice[1][0])*(M->matrice[0][1]);
}
else
{
for(i=0;i<(M->ordre);i++)
{
MATRICE*R=matrice_reduite(M,i,1);
if((i+1)%2==0)
{
  det+=(M->matrice[i][1])*determinant(R);
}
else
{
 det+=-(M->matrice[i][1])*determinant(R);
}
}
}
return det;
}
MATRICE* produit_par_scalaire(MATRICE*M,int e)
{
int i,j,k=0 ,v=0;
MATRICE* S=matrice_new(M->ordre);
for(i=0;i<(M->ordre);i++)
{
for(j=0;j<(M->ordre);j++)
{
 (S->matrice[k][v])=e*(M->matrice[i][j]);
 v++;
}
j=0;
v=0;
k++;
}
return S;
}
MATRICE* transposee(MATRICE*M)
{
MATRICE* A=matrice_new(M->ordre);
int i,j,l=0,c=0;
for(i=0;i<(M->ordre);i++)
{
for(j=0;j<(M->ordre);j++)
{
(A->matrice[l][c])=(M->matrice[j][i]);
c++;
}
l++;
c=0;
}
return A;
}
MATRICE* Comatrice(MATRICE*M)
{
int i,j,l=0,c=0;
MATRICE* A=matrice_new(M->ordre);
for(i=0;i<(M->ordre);i++)
{
for(j=0;j<(M->ordre);j++)
{
MATRICE*R=matrice_reduite(M,i,j);
if((i+j)%2==0)
{
(A->matrice[l][c])=determinant(R);
}
else
{
(A->matrice[l][c])=-determinant(R);
}
c++;
}
l++;
c=0;
}
return A;
}
MATRICE* Inverse(MATRICE*M)
{
MATRICE* I=matrice_new(M->ordre);
int det=determinant(M);
if(det==0)
exit(1);
else
{
I=produit_par_scalaire(transposee(Comatrice(M)),1/det);
}
return I;
}
