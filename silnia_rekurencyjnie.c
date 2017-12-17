#include <stdio.h>
#include <stdlib.h>

int silnia (int liczba)
{
int sil, i;
if (liczba<0) return 0; /* wywołanie jest bezsensowne, */
/* zwracamy 0 jako kod błędu */
if (liczba==0 || liczba==1) return 1;
for (i=1 ; i<=liczba; i++){
  sil = sil * i;
}
return sil;
}

int main(int argc, char const *argv[]) {
  int sil, liczba;
  printf("Podaj liczbe \n");
  scanf("%d\n",liczba);
  sil = silnia(&liczba);
  printf("Slinia liczby %d wynosi %d\n",liczba, sil);
  return 0;
}
