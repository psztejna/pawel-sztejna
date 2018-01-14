#include <stdio.h>

//algorytm Euklidesa liczony za pomoca pętli

int euklides(int a, int b){
  int c;
  if(a<b){
  while(b!=0){
    c=a%b;
    a=b;
    b=c;
  }
  return a;
}else if(a>b){
  while(a!=0){
    c=b%a;
    b=a;
    a=c;
  }
  return b;
}else{
  printf("a=b\n");
}
}
int main(int argc, char const *argv[]) {
  int a, b;
  puts("podaj a i b");
  scanf("%d %d",&a, &b);
  //a=2;
  //b=5;
  euklides(a, b);
  printf("NWD =%d\n", euklides(a, b));
  return 0;
}
