#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    float TabSol[6][6], TabAf[6][6];
    int choix, cpt, i, j;
    float gains;

    gains = 1;
    choix = 0;
    cpt = 0;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            TabSol[i][j] = 0;
        }
    }

    while (cpt < 7)
    {
        random_r;
        i = rand() % 6;
        random_r;
        j = rand() % 6;
        if (TabSol[i][j] == 0)
        {
            TabSol[i][j] = 10;
            cpt++;
        }
    }

    cpt = 0;

    while (cpt < 10)
    {
        random_r;
        i = rand() % 6;
        random_r;
        j = rand() % 6;

        if (TabSol[i][j] == 0)
        {
            TabSol[i][j] = 1;
            cpt++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            TabAf[i][j] = 5;
        }
    }

    printf("Voici votre billet : ");
    printf("\n\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%3.0f", TabAf[i][j]);
        }
        printf("\n");
    }

    while ((choix != 1) && (gains != 0))
    {
        printf("\n");
        printf("Case à gratter : ");
        printf("\n");

        printf("N° de ligne : ");
        scanf("%d", &i);

        printf("N° de colone : ");
        scanf("%d", &j);

        printf("\n");

        if (TabAf[i][j] != 5)
            printf("Désolé, case déjà gratté !");
        else
        {
            TabAf[i][j] = TabSol[i][j];
            gains = gains * TabAf[i][j];

                printf("\n");

            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    printf("%3.0f", TabAf[i][j]);
                }
                printf("\n");
            }

            printf("\n\n");
            printf("\nQue désirez-vous faire ? ");
            printf("\nN°1 - Encaisser le gain");
            printf("\nN°2 - Gratter une nouvelle case ");
            printf("\n");
            scanf("%d", &choix);
        } // fin du else

    } // fin du while

    printf("Total de vos Gains en Euros : %4.0f ", gains);
    printf("\nAu revoir et bonne journée !");

    return (0);
}