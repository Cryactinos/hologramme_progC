#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{

//declaration des variables

int z=1;
int lambdanm=600;
double lambda=0.000000001*lambdanm;
double As=0.1;
double xs=0.001;
int ys=0, zs=0;
double theta=0.1;
int N,h;
double I[N][N];
double phiO[N][N];   		//phi Objet
double phiS[N][N];		//phi Source
double x,y,x1,x2,y1,y2;
int A=1;
double r,X,Y,Z;

//initialisation des tableaux
    
for (x=0;x<N;x=x+h)			//NB il faudra définir h
{   for (y=0;y<N;y=y+h)
    {
        I[x][y]=0;
		phi0[x][y]=0;
		phiS[x][y]=0;
    }
}

//onde de référence phi0


//onde objet phiS

for (x=0;x<N;x=x+h)
{   for (y=0;y<N;y=y+h)
    {
		X=(x-xs)*(x-xs);
		Y=(y-ys)*(y-ys);
		Z=0;				//Pas de dépendance en z
		r=sqrt(X+Y+Z);
		phiS[x][y]=As*exp(i*k*r)/r;
    }
}	

/*Commentaires pour le moment:
Comment trouver k (rapport avec lambda je crois)
Comment faire une exponentielle avec un i
Définir h de façon judicieuse*/

}
