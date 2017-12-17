#include <stdio.h>
#include <stdlib.h>

 #define ROZMIAR 5
 int main()
 {
   int tab[ROZMIAR];
   int i;
   for(i=0; i<ROZMIAR; i++)
   {
     tab[ROZMIAR] = rand();
   }

   puts ("Druk tablicy tab:");

   for (i=0; i<ROZMIAR; ++i) {
     printf ("Element numer %d = %d\n", i, tab[i]);
   }
   return 0;
 }
