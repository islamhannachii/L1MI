#include<stdlib.h>
#include<stdio.h>
//Action parametre qui convert un nbr decimal vers binaire
//1ere solution
int BIN(int M)
    {
        int bin;
        int mul;
        mul = 1;
        bin = 0;
        while(M)
            {
                bin = bin  + (M%2)*mul;
                M = M / 2;
                mul = mul * 10;
            }
        return bin;
    }
//Deuxieme solution(la récursivité)
int BIN2(int M)
    {
        if(M == 0) return 0;
        else {
            if(M == 1) return 1;
            else return BIN2(M/2)*10 + (M%2);
        }
    }
int main()
{
    int N;
    printf("Donner la valeur de N en decimal:");
    scanf("%d",&N);// Lire N
    printf("%d en binaire est= %d\n",N,BIN(N));
    return 0;
}