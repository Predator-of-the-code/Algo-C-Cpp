#include <stdio.h>
#include <math.h>

int main(void)
{
    int nb,s;
    
    printf("Encoder un nombre : ");
    scanf("%d", &nb);
    
    s = s + pow(nb,2); // pow(nb,2) = nb au carré
    // ou s = nb*nb
    
    printf("Voici le résultat : %d ", s);
    
    return (0);
}