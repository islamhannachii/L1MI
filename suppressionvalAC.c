#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int ValExiste(int* T, int M,int valeur)
    {
        int j = 0;
        while((j < M) && (T[j] != valeur ) ) //L'existance de la valeur dans le tableau
            {
                j++;
            }
        if( j == M){ return -1;} //La valeur n'existe pas 
        else {
            return j;} //La valuer existe
    }
void SuppVAl(int *T, int* M, int valeur)
    {
        if(ValExiste(T,*M, valeur)!= -1)
            {   
            int i ;
                //La valeur existe dans la position J
            for(i = ValExiste(T,*M,valeur); i < *(M) -1; i++)
                {
                   T[i] = T[i+1];
               }
                //la nouvelle taille du tableau 
                 *M = (*M) -1;

            }
        else {
            printf("\nValeur= %d n'existe pas dans le tableau\n",valeur);
        }
    }
int main()
    {
    int Tab[100];
    int N;
    int val;
    int j;
    // Saisir la taille du tableau
    do{ 
             printf("Donner la taille de votre tableau <=100: ");
             scanf("%d",&N);   
    }while((N<0) || (N >100));

    //Lire les elements du tableau
    for(int i = 0; i < N; i++)
        {
                printf("Tab[%d]: ",i+1);
                scanf("%d",&Tab[i]);
        }

    printf("Valeur :"); scanf("%d",&val); //Lire une valeur a suppremier

    SuppVAl(Tab,&N,val); // suppression de Val 

    //Affichage du nouveau tableau
    printf("Le nouveau tableau: \n");
        for (int i = 0; i < N; i++)
            {
                printf("T[%d]= %d \n",i+1,Tab[i]);
            }
    return 0;
    }