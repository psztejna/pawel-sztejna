#include <stdio.h>

//program wylicza NWD uzywajac rozszerzonego algorytmu Euklidesa

int main(int argc, char const *argv[]) {
  int a, b, x, y, k;
  int c=0, ya=0, yb=1, xa=1,xb=0;

  puts("podaj a i b");
  scanf("%d %d",&a, &b);
while (a*b!=0) {
  if (a>=b) {
    c = a / b;
    a = a % b;
    xa = xa-c*xb;
    ya = ya-c*yb;
  }else{
    c = b / a;
    b = b % a;
    xb = xb- c*xa;
    yb = yb - c * ya;
  }
}
if (a>0) {
  x = xa;
  y = ya;
}else if (b>0) {
  x = xb;
  y = yb;
}

k=x *a +y*b;
printf("NWD %d \n", k);

  return 0;
}
