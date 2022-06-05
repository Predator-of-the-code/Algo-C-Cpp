#include <stdio.h>

int main(void) 
{
    int nTab,cpt,r;
    
    printf("Encoder un nombre : ");
    scanf("%d", &nTab);
    
    for(cpt=1 ; cpt <= 10 ; cpt++)
    {
        r=nTab*cpt;
        printf("\n%d x %d = %d ",nTab,cpt,r);
    }
    
    return 0;
}