#include <stdio.h>

int main(void)
{
    int numero=1 , numpotenze, i=0;
    printf("Inserisci un numero di potenze di 2 da visualizzare (maggiore o uguale di 2 e minore o uguale di 20: ");
    scanf("%d",&numpotenze);

    while (i < numero)
        {
        if (numpotenze >= 2 && numpotenze <= 20)
            {
            printf("2^%d = %d\n", i, numero);
            numero*= 2;
            i++;}
        else{
            printf ("Errore: numero scritto < 2 o numero scritto > 20");}
        }

    return 0;
}
