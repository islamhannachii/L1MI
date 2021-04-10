#include<stdlib.h>
#include<stdio.h>
//Algorithme qui affiche la somme des chiffres d'un nombre 
int main()
{
    int N;
    int Q;
    int Somme;
    printf("Donner la valeur de N:");
    scanf("%d",&N);
    Somme = 0;
    Q = N;
    while(Q) // Tant que Q > 0
    {
        Somme = Somme + Q%10;
        Q = Q / 10;
    }
    printf("La somme des chiffres du %d est: %d\n",N,Somme);
    return 0;
}