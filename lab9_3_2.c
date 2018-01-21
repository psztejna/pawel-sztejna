#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  if (argc >= 1){
   if (strcmp(argv[1], "-c") == 0){
    printf("Uzyto -c\n");
  }else{
    printf("Nie uzyto -c\n");
  }
}else{
  printf("Nie ma drugiego argumentu\n");
}



  return EXIT_SUCCESS;
}
