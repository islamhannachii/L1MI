#include<stdlib.h>
#include<stdio.h>

/*
_________________________________________________________________________________
|    Cet algorithme nous permet de créer une liste chainées      avec         |
|    FIFO et LIFO et on peut aussi suppremier et afficher ses élements          |
|_______________________________________________________________________________|   
*/


//DECLARATION DE LA LISTE
typedef struct liste liste; // Type Enregistrement = liste :
struct liste {              //      nbr: entier;
    int nbr;                //      svt: *liste
    liste *svt;             // Fin. || On peut aussi écrire cette forme typedef struct liste *liste au lieu d'utlisier à chaque fois liste* on la remplace par liste direct
};

//DECLARATION DE NOTRE LISTE (GLOBALE)
liste *L=NULL;          // L: *liste;

// PROCEDURE QUI CREER UNE LISTE AVEC FIFO
liste FIFO ()
    {
        //REMPLIR LA LISTE AVEC FIFO
        liste *P;           //DECLARATION UN POINTEUR INTERMIDIARE
        P = malloc(sizeof(liste));          //Allouer(P);
        printf("Donner le 1er element, saisissez -1 si vous avez terminé: "); 
        int x;
        scanf("%d",&x);               // Lire(P^.nbr); lire le 1er element de la liste 
        if (x == -1 ) {return *L; }
        P->nbr = x;
        P->svt = L;                        // P^svt = L; 
        //La tête de la liste
        L = P;
        int i = 0;
        do
        {
            printf("Donner le %deme element: ",i+2);
            scanf("%d",&x);          //Lire(P^.nbr); 
            if (x == -1) return *L;
            P->svt=malloc(sizeof(liste)); //Allouer(P^.svt);
            P = P->svt;                   //P=P^.svt;
            P->nbr = x;
            P->svt = NULL;                //P^.svt = NULL;
            i++;
        }while(x != -1);
        return *L;
    }


//REMPLIR LA LISTE AVEC LIFO    
liste LIFO ()
    {
    //UN POINTEUR INTERMEDIARE
    liste *P;    // P: *liste;
    int i = 0;
    int x = 0;
    while (x != -1)
    {   
         P = malloc(sizeof(liste)); //    Allouer(P);
         if(!P) {   
             printf("Erreur d'allocation de la mémoire");
             exit(-1);
             }
         P-> svt = L;               //    P^.svt = L;
         printf("Donner la %dere valeur, Saisissez -1 si vous avez terminé :",i+1); scanf("%d",&x); if (x == -1){return *L;} P->nbr = x;// Lire(P^.nbr); 
         i++;
         //La tête de la liste   
         L = P;       // L = P;

    }
        return *L;
    }
//SUPPRESSION D'UN ELEMENT DANS UNE LISTE
liste suppression (liste *Q, int pos)
    {   liste *P=NULL;
        liste *R=NULL;
        R = Q;
        P = R->svt;
        int i = 2;
        if (!R)
        {
            printf("Aucun élément dans cette liste.\n"); 
            return *Q;
        }        
        else
        {
        if ( pos == 1)
            {
                Q = P;
                free(P);
                printf("Fait!\n");
                return *Q;
            }
        else
            {   
                while ( (P != NULL))
                    {
                        if (pos == i)
                            {
                                if ( P->svt != NULL)
                                    {
                                        R->svt = P->svt;
                                        free(P);
                                        printf("Fait !\n");
                                        return *Q;
                                    }
                                else
                                    {
                                        R->svt = NULL;
                                        free(P);
                                        printf("Fait !\n");
                                        return *Q;
                                    }
                            }
                        R = P;
                        P = P->svt;
                        i++;
                    }                  
                    printf("La position n'exsiste pas !\n ");
                    return *Q;                    
            }
            }
    }
// AFFICHAGE D'UNE LISTE    
void AFFICHAGE (liste *Q)
    {   
        //DECLARATION DU POINTEUR INTERMDIARE
        liste *P;
        P = Q;  // P = L;
        if (Q) {
                printf("Les elements de votre liste sont: \n");
                while (P != NULL)
                    {
                        printf("%d\n",P->nbr);  
                        P = P->svt; // P = P^.svt;
                    }}
        else {printf("La liste est vide !\n");}
    }
// PROGRAMME PRENCIPALE
int main ()
    { 
    int pos,r;
    char rep=' ';
    printf("Voulez-vous créer une liste Avec:\n1)FIFO\n2) LIFO:\n");
        do {scanf("%d",&r);}while((r <1) || (r >2));
        switch (r)
        {
        case 1:  FIFO(); break;     
        default: LIFO(); break;
        }
    do
    {   printf("1) Afficher les elements de la liste.\n"); 
        printf("2) Supprimer un element dans la liste.\n"); 
        do {scanf("%d",&r);} while((r <1) || (r >2));
        switch (r)
        {
        case 1:  AFFICHAGE(L); break;     
        case 2:  printf("Donner la position que vous allez la supprimer: \n");
                 scanf("%d",&pos);
                 *L= suppression(L,pos);
                    break;     
        }
       printf("Saisissez # si vous avez terminé.\n"); scanf("%c",&rep);
    }while(rep != '#');
    return 0;
}
