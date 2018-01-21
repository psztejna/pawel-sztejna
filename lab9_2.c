#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*if(argc == 1)
    printf("%s\n", argv[0]);
  else if(argc == 2)
      printf("%s\n", argv[1]);
  else if(argc == 3)
      printf("%s\n", argv[2]);
  else
    printf("argc >3\n");
    */
    for (int i = 0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }

  return 0;
}
