#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double deg, rad;
    printf("Podaj kat w stponiach :");
    scanf("%lf", &deg);
    rad = deg * 3,14159/180;
    printf("%3lf deg = %3lf rad\n", rad );/* code */
  return 0;
}
