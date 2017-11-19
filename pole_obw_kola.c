#include <stdio.h>
#include <math.h>

// program liczy pole i obwod koła z danego promienia

double main(int argc, char const *argv[])
{
  double M_Pi=3.14;
  double r;
  double pole;
  double obwod;

  printf("Podaj promien kola\n");
  scanf("%f\n", &r);
  {
    pole = M_Pi*(r*r);
  obwod = 2*M_Pi*r;
}
  printf("Pole kola wynosi: %f\n", pole);
  printf("Obwod kola wynosi: %f\n", obwod);
  return 0;
}
