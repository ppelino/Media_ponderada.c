#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    float media[3], peso[3], mediafim=0, totpeso=0, totmedia=0;
    int nota=1;
    for(int i=0; i<3; i++)
    {
        printf("Digite a Nota %d: ", nota);
        scanf("%f", &media[i]);
        printf("Digite o peso da Nota %d: ", nota);
        scanf("%f", &peso[i]);
        totmedia= totmedia+(media[i]*peso[i]);
        totpeso= totpeso+peso[i];
        nota++;
    }
    mediafim= totmedia/totpeso;

    printf("%.2f", mediafim);
    getch();

}
