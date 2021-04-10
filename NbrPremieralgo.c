#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int N; 
    int Q;
    bool nbrpr;
    int i;
    do{
        printf("N = ");
        scanf("%d",&N);
    }while(N<=0);
    nbrpr = true; //On suppose que le Nbr est un nombre premier
    Q = N/2; // On divise le Nbr saisi par 2 
    i = 2; // On sait que tous les nombres divisible par le 1 alors 1 est premier, donc le i initialisé par 2

    while ((nbrpr) && (i <= Q))
        {
            if((N % i) != 0)
            {
                i++;
            }
            else{
                nbrpr = false;
            }
        }
    if (nbrpr)
        { printf("%d est un nombre premier\n",N);}
        else {printf("%d n'est pas un nombre premier\n",N);}
    return 0;
}