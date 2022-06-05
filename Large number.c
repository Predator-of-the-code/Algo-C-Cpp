#include <stdio.h>

int main(void) 
{
    int i,n,max;
    int v[30];
    
    printf("Encoder le nombre d'élément que vous voudriez (entre 1 et 30) ? ");
    scanf("%d",&n);
    
    while(n > 30) 
    {
        printf("Le nombre d'élément est supérieur à 30 !");
        printf("\nRéencoder un nombre : ");
        scanf("%d",&n);
    }
    for(i=0; i < n; i++)
    {
        printf("Encoder le nombre n°%d : ",i+1);
        scanf("%d",&v[i]);
    }
            
    max = v[0];
            
    for(i=0; i < n; i++)
    {
        if (v[i] > max) max = v[i];
    }
            
        printf("\nLe plus grand nombre est %d", max);
    
    return (0);
}