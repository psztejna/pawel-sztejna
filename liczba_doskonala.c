#include<stdio.h>
/* do poprawy - funkcja
void liczba_doskonala(int *dolna_granica, int *gorna_granica)
{
    unsigned *dolna_granica, *gorna_granica,dzielnik,suma_dzielnikow;
    printf("Podaj dolna granice\n");
    scanf("%d",dolna_granica);
    printf("Podaj gorna granice\n");
    scanf("%d",gorna_granica);
            for(unsigned i=dolna_granica;i<=gorna_granica;i++)
      {
          dzielnik=1,suma_dzielnikow=0;
          while(dzielnik<=i/2)
              {
              if(i%dzielnik==0)
              suma_dzielnikow+=dzielnik;
              dzielnik++;
              }
              if(i==suma_dzielnikow)
              printf("%d\n",i);
        }
}

int main(int argc, char const *argv[]) {
  liczba_doskonala(dolna_granica, gorna_granica);
  return 0;
}
