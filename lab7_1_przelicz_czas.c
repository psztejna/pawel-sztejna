#include <stdio.h>
#include <math.h>

unsigned int min;
const unsigned int h=60;


int main(int argc, char const *argv[]) {

  printf("podaj minuty\n");
  scanf("%d", &min);

  printf("Podales %d minut co daje %d godzin i %d minut\n", min, min/h, min%h );
  return 0;
}
