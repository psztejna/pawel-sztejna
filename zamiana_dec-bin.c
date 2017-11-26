#include <stdio.h>
#include <stdlib.h>

void dec_to_bin(unsigned int n){
  int bufor[BUFSIZ];
  int i = -1;
  int j;
  while (n != 0) {
    i++;
    bufor[i] = n%2;
    n = n/2;
  }
  for (j = i; j >= 0; j--) {
    printf("%d ",bufor[j]);
  }
  putchar('\n');
}

int main(void) {
  unsigned int n;
  printf("Podaj liczbe naturalna: \n");
  scanf("%d", &n);
  dec_to_bin(n);


  return 0;
}
