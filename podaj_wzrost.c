#include <stdio.h>
#include <stdlib.h>
//program wypisuje wzrost z konwersja cal na cm
double main(int argc, char *argv[])
{
    int wzrost;
    char znak, c, i;

    printf("Podaj Twoj wzrost: \n");
    scanf("%d %s", &wzrost, &znak);

    if (znak == 'c')
        printf("Twoj wzrost to %f centymetrow \n", wzrost*0,393);
    else if (znak == 'i')
      printf("Twoj wzrost to %f cali\n",wzrost*2.4);
      else{
        printf("Bledne dane\n");
      }
  return 0;
}
