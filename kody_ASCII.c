#include <stdio.h>

int main()
{
   int kod_ascii;
   printf("Podaj znak lub liczbe\n");
   kod_ascii = getchar();
   printf("Kod ASCII: %d\n",kod_ascii);

   return 0;
}
