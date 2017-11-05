#include <stdio.h>

void hej(char *name);

int main(int argc, char * argv[]){

	printf ("argc: %d\n", argc);
	for (int i = 1; i < 5; i++)  // Petla for 1) warunek poaczatkowy;koncowy;krok i++ tzn i=i+1
	{
#ifdef DEBUG
		printf ("argv%d: %s\n", i, argv[i]);
#endif
		hej(argv[i]);
	}
	return 0;
}
