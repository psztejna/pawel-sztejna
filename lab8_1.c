#include <stdio.h>

// algorytm Euklidesa liczony przy pomocy funkcji rekurencyjnej
int euklides(int a, int b){
  if (a>b) {
    a=a-b;
  return euklides(a,b);
  }else if(a<b){
    b=b-a;
    return euklides(a,b);
  }else{
    a=b;
      }
    return a;
}
int main(int argc, char const *argv[]) {
  int a, b;

  puts("podaj a i b");
  scanf("%d %d",&a, &b);
  euklides(a, b);
  printf("NWD = %d\n", euklides(a, b));
  return 0;
}
