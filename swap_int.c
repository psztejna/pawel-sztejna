#include <stdio.h>

void swap_int(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void wczytaj_liczbe(int *a, int *b){
  printf("Podaj a b\n");
  scanf("%d %d", a, b);
}

int main(int argc, char const *argv[]) {
  int a, b;
  wczytaj_liczbe(&a, &b);
  swap_int(&a, &b);
  printf("po zamianie to %d i %d\n", a, b);
  putchar('\n');
  return 0;
}
