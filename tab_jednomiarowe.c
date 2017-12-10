#include <stdio.h>
#define ROZMIAR 3
int main()
{
  int tab[ROZMIAR] = {3,6,8};
  int i;
  puts ("Druk tablicy tab:");

  for (i=0; i<ROZMIAR; ++i) {
    printf ("Element numer %d = %d\n", i, tab[i]);
  }
  return 0;
}
