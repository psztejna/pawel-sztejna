#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text1[]={0};
  char text2[] = "-c";

  if (argc ==2) {
    text1 == argv[2];
   }


  if (strcmp(text1,text2)==0) {
    printf("Uzyto -c\n");
  }else{
    printf("Nie uzyto -c\n");
  }



  return EXIT_SUCCESS;
}
