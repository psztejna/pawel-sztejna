#include <stdio.h>

int main(){
int x;
  printf("Ile masz lat ?\n");
  scanf("%d", &x);

  printf("Masz %d godzin", x*365*24);
  printf(" co daje %d sekund\n", x*365*24*60*60);
}
