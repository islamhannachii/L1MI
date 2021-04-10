#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int MaxTab(int* Tab,int N)
    {
        //Recherche du maximum du tableau 
        int max = Tab[0];   // On suppose que le maximum est le 1er element tableau
        for (int i = 1; i < N ;i++)
            {
                if(max < Tab[i]) // Si le maximum inferieur a l'element Tab[i] alors Tab[i] est le maximum
                    {
                        max = Tab[i];
                    }
            }
        return max;
    }
    
int MinTab(int* Tab,int N)
    {
        //Recherche du minimum du tableau 
        int min = Tab[0]; // On suppose que le minimum est le 1er element tableau
        for (int i = 1; i < N ;i++)
            {
                if(min > Tab[i]) // Si le minimum superieur a l'element Tab[i] alors Tab[i] est le minumun
                    {
                        min = Tab[i];
                    }
            }
        return min;
    }

int main()
{
    int M;
    int T[100];
    // Saisir la taille du tableau
        do{ 
             printf("Donner la taille de votre tableau <=100: ");
             scanf("%d",&M);   
          }while((M<0) || (M >100));
        //Lire les elements du tableau
        for(int i = 0; i < M; i++)
            {
                printf("Tab[%d]: ",i+1);
                scanf("%d",&T[i]);
            }
        printf("Le minimum est: %d\n", MinTab(T, M)); 
        
        printf("Le maximum est: %d\n", MaxTab(T, M));

    return 0;
}