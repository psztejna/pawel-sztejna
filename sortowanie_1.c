#include <stdio.h>
#include <stdlib.h>

// Porównywacz
int my_compare (const void * a, const void * b)
{
    int _a = *(int*)a;
    int _b = *(int*)b;
    if(_a < _b) return -1;
    else if(_a == _b) return 0;
    else return 1;
}

int main ()
{
    int i;
    int ile;
    int *tablica;

    puts("Podaj ile bedziesz wprowadzal wartosci: ");
    scanf("%d", &ile);

    tablica= malloc(ile * sizeof(int) );

    for (i=0; i<ile; ++i)
    {
        printf("Podaj %d liczbe: ", i+1);
        scanf("%d", &tablica[i]);
    }

    puts("\n");   //przerwa miedzy liczbamy podanymi a liczbami wyswietlonymi

    qsort(tablica, ile, sizeof(int), my_compare);

    for(i=0; i<ile; ++i)
        printf("%d ", tablica[i]);
        printf("\n");
    free(tablica);

    return 0;
}
