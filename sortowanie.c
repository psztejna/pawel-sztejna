#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {3,2,1};
  int i;
  for (i = 0; i < 3; i++) {
    printf("tab[%d] == %d\n",i,a[i]);
  }
  printf("%ld\n",sizeof(i));
  printf("%ld\n",sizeof(a));
  return 0;
}
