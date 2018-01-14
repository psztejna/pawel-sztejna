#include <stdio.h>

//Funkcja Ackermanna - charakteryzuje sie szybkim wzrostem.

int ackermann(int m,int n){
    if (m==0){

      return n+1;

    } else if (m > 0 && n==0) {

     return ackermann(m-1,1);

  } else if (n > 0 && m > 0) {

      return ackermann(m-1,ackermann(m,(n-1)));
    }
}




int main(int argc, char const *argv[]) {
  int m, n;
  puts("podaj m i n");
  scanf("%d %d",&m, &n);
  ackermann(m, n);
  printf("%d\n", ackermann(m, n));
  return 0;
}
