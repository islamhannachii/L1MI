#include<stdlib.h>
#include<stdio.h>

//Debut du programme
int main()
    {
        int N;  //La taille du tableau
        int Tab[100];   //Declaration du Tableau 
        int min;
        int max;

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

        //Recherche du minimum du tableau 
        min = Tab[0]; // On suppose que le minimum est le 1er element tableau
        for (int i = 1; i<N ;i++)
            {
                if(min > Tab[i]) // Si le minimum superieur a l'element Tab[i] alors Tab[i] est le minumun
                    {
                        min = Tab[i];
                    }
            }
        printf("Le minimum est: %d\n", min);

        //Recherche du maximum du tableau 
        max = Tab[0];
        for (int i = 1; i<N ;i++)
            {
                if(max < Tab[i]) // Si le maximum inferieur a l'element Tab[i] alors Tab[i] est le maximum
                    {
                        max = Tab[i];
                    }
            }

        printf("Le maximum est: %d\n", max);

    return 0;
    }