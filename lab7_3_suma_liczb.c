#include <stdio.h>
#include <stdlib.h>

int suma_liczb(int min, int max){
  int suma_k;
  int i;
  for (i = min; i <= max; i++) {
    suma_k =i+suma_k;
    //suma = i+i++;
    }
    return suma_k;
  }

void wczytaj_max_min(int *min, int *max){
  //int *min, *max;
  printf("Podaj min max\n");
  scanf("%d %d", min, max);
}

  int main(int argc, char const *argv[]) {
    int min, max,suma_k, suma=suma_k;
    wczytaj_max_min(&min, &max);
    suma_liczb(min,max);
    printf("Suma liczb z przedziału <%d;%d> to %d\n", min, max, suma);


    return 0;
  }
