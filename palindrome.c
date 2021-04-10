#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//1ere solution
bool palindorme(char ch[])
    {
        int j = 0;  // Le debut de la chaine
        int taille = strlen(ch) -1; // la taille de la chaine 
        while(j < taille) // Tant que J inferieur a la taille de la chane
        {
            if (ch[j] != ch[taille]) return false; 
            else j++; taille--;
        }
        return true;
    }
//2eme solution(La récursivité)
bool palindorme2(char ch[], int j, int taille)
    {
        if(j >= taille -1) return true;
        else{
            if (ch[j] != ch[taille -1]) return false;
            else return palindorme2(ch,j+1,taille-1);
        }
    }
int main()
{   
    int TailleDeChaine;
    char* ch;
    printf("Donner votre chaine de caractere: "); scanf("%s",ch);
    TailleDeChaine = strlen(ch);
    if (palindorme2(ch,0,TailleDeChaine)) printf("\'%s\' est palindrome\n",ch);
    else printf("\'%s\' n'est pas palindrome\n",ch);
    return 0;
}