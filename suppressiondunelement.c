#include<stdlib.h>
#include<stdio.h>

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
    j=0;
    while((j < N) && (Tab[j] != val ) ) //L'existance de la valeur dans le tableau
    {
        j++;
    }
    if( j == N){ printf("Val = %d n'existe pas\n",val);} //La valeur n'existe pas 
    else { 
        //La valeur existe dans la position J
        for(int i = j; j < N-1; j++)
            {
                Tab[j] = Tab[j+1];
            }
        //la nouvelle taille du tableau 
         N = N-1;
        //Nouveau tableau
        for (int i = 0; i < N; i++)
            {
                printf("T[%d]= %d \n",i+1,Tab[i]);
            }
        }
    return 0;
}