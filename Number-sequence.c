#include <stdio.h>

int main() {
    // Write C code here
    int nd,cpt;
    
    cpt = 0;
    
    printf("Encoder un nombre : ");
    scanf("%d", &nd);
    
    nd=nd+1;
    
    printf("\nVoici les nombres suivant : ");
    
    while(cpt < 10)
    {
        printf("%d ",nd++);
        cpt++;
    }
    
    return 0;
}
