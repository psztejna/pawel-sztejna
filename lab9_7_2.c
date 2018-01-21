#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
  int rok;
  int miesiac;
  int dzien;
}data;

void printDat(data *data){
  printf("%d-%d-%d\n",data->rok,data->miesiac,data->dzien);
}

int main(int argc, char const *argv[]) {
  data data1;
  data *wieleDat;
  data1.rok = 2018;
  data1.miesiac = 1;
  data1.dzien = 21;
  printf("%d-%d-%d\n",data1.rok,data1.miesiac,data1.dzien);

  /*Tablica dat*/
  wieleDat = (data*) malloc(2*sizeof(data));
  if(wieleDat == NULL){
    perror("Error in malloc");
  }
  wieleDat[0].rok=2018;
  wieleDat[0].miesiac=1;
  wieleDat[0].dzien=29;

  printf("%d-%d-%d\n",wieleDat[0].rok,wieleDat[0].miesiac,wieleDat[0].dzien);
  printDat(wieleDat);

  scanf("%d %d %d",&wieleDat[1].rok,&wieleDat[1].miesiac, &wieleDat[1].dzien);
  printf("%d-%d-%d\n",wieleDat[1].rok,wieleDat[1].miesiac,wieleDat[1].dzien);
  return EXIT_SUCCESS;
}
