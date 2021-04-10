#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
 
bool NbrPremier(int N)
    {   
        int Q;
        int i;
        Q = N/2; // On divise le Nbr saisi par 2 
        i = 2; // On sait que tous les nombres divisible par le 1 alors 1 est premier, donc le i initialisé par 2

    while (i <= Q)
        {
            if((N % i) != 0)
            {
                i++;
            }
            else
            {
                return  false;
            }
        }
    return true;
    }

int main()
    {
        int M;
        //Lire un nbr > 0
        do{
            printf("Nbr = ");
            scanf("%d",&M);
        }while(M<=0);
        //Utilisant la fonction  NbrPremier, on decouvre si le nbr saisi est un prermier ou non
        if(NbrPremier(M))
            {
                printf("%d est un nbr premier\n",M);
            }
        else {
            printf("%d n'est pas un nbr premier\n",M);
        }
    }