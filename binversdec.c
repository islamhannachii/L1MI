#include<stdlib.h>
#include<stdio.h>
//fonction qui convert un nombre binaire vers decimal 
//1ere solution
int Dec(int M)
    {   int dec = 0;
        int mul = 1;
        while (M) //Tant que Q > 0
            {
                dec = dec + (M%10)*mul;
                mul = mul * 2;
                M = M / 10;
            }
    return dec;
    }
//2eme solution (la récursivité)
int Dec2(int M)
    {
        if(M == 0) return 0;
        else
            {
                if(M == 1) return 1;
                else return Dec2(M/10)*2 + (M%10);
            }
        
    }
//programme principal
int main()
{
    int N;
    printf("Donner la valeur de N en binaire:");
    scanf("%d",&N);

    printf("%d en decimal est = %d\n",N, Dec2(N));
    return 0;
}
