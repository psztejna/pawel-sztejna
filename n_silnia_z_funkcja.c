#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*program wypisuje silnie*/

int silnia(int x){
  int i,x,sil=1;
  printf("Podaj liczbe\n");
  scanf("%d",&x);
  for (i = 1; i <=x; i++) {
    sil=sil*i;
    return("%d! = %d\n",i,sil);
}
}

int main(int argc, char const *argv[]) {
  int silnia(x);
  printf("%d\n",silnia);
  return 0;
}
