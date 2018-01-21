#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/*w argumencie wiersza polecen dodaj nazwe pliku, aprogram wyswietli z ilu
znakow sklada sie ten plik np:
./a.out test.txt */

int main(int argc, char const *argv[]) {
  FILE *plik;
  char c;
  int lenght = 0;

  plik = fopen(argv[1], "r");
  if (plik != NULL) {
    while (c != EOF) {
      c = fgetc(plik);
      lenght++;
    }
    printf("%d\n", lenght);
    fclose(plik);
  }
}
