//ZAD 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

// najmniejsza wspolna wielokrotnosc
int NWW(int a, int b){
  int pom;
    while(b!=0){
      pom = b;
      b = a%b;
      a = pom;
    }
    return a;
}

int main(int argc, char const *argv[]) {
  FILE *infile, *outfile;
  infile = fopen("test.txt", "r");
  outfile = fopen("rozw.txt", "w");

int a, b, c;
fscanf(infile,"%d %d",&a,&b);

c=NWW(a,b);
printf("%d\n", c);
puts("zapisuje wynik do pliku rozw.txt");
fprintf(outfile, "%d\n", c);

fclose(infile);
fclose(outfile);

}
