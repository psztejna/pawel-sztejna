#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  if(argc == 1)
    printf("%s\n", argv[0]);
  else if(argc == 2)
      printf("%s\n", argv[0,1]);
  else if(argc == 3)
      printf("%s\n", argv[0,1,2]);
  else
    printf("argc >3\n");

  return 0;
}
