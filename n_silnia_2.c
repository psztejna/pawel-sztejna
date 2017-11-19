#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*program wypisuje silnie*/
 int main(void){
  int n;
  printf("Podaj liczbe naturalna: \n");
  scanf("%d",&n);
  printf("%d silnia\n", n);

for (int i = 0; i <= n-1;  (i = i + 1)) {
  int temp = i+1;
  int silnia = i*i+1;
  printf("dla liczby %d kwadrat = %d silnia = %d \n", temp, (temp)*(temp), temp*silnia);
}
  return EXIT_SUCCESS;
}
