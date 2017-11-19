#include<stdio.h>

int main(int argc, char const *argv[]) {
  char a;
  int b;
  double c;
  printf("char %zu\nint %zu\ndouble %zu\n", sizeof a, sizeof b, sizeof c);
  return 0;
}
