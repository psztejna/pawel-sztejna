#include <stdio.h>
#include <stdlib.h>

void print_table(int tab[] , int n){
  printf("Wskaznik: %p\n",tab);//adres
  printf("%d\n", tab[0]); //pierwszy sposob wypisywania
  printf("%d\n",(*tab+1));

}
int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4, 5};
  print_table(a,5);

  return EXIT_SUCCESS;
}
