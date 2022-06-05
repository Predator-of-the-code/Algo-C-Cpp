#include <stdio.h>

int main(void) 
{
    int nd,i,m;    
    
    m=1;
    
    printf("Encoder un nombre : ");
    scanf("%d", &nd);
    
    for(i=2; i<=nd; i++)
    {
        m=m*i;
    }
    
    printf("Le résultat est %d", m);
    return 0;
}