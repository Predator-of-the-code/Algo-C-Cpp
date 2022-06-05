// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
    int nd,cpt,test;
    
    random_r;
    nd = 1 + (rand() %10); //Génère aléaroirement un nombre entre 1 et 500
    
    cpt = 0;
    
    printf("Encode un nombre : ");
    scanf("%d", &test);
    
    while((nd != test) || (cpt <=10))
    {
        if (test < nd) printf("\nTrop petit !");
            else printf("\nTrop Grand");
        cpt++;
        printf("\nRéencoder un nombre : ");
        scanf("%d",&test);
    }
    printf("\n\nNombre d'essaie : %d", cpt);
    printf("\nNombre à deviner : %d", nd);
    
    return(0);
}