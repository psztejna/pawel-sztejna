#include <stdio.h>
#include <math.h>

int main() 
{
	double a, b, c;
	printf("podaj wartosc poczatkowa: \n");
	scanf("%lf", &a);
	printf("podaj wartosc koncowa: \n");
	scanf("%lf", &b);
	printf("podaj krok dla argumenru: \n");
	scanf("%lf", &c);

	
	//printf("poczatkowa:%f, koncowa: %f, krok: %f\n", (float)a, (float)b, (float)c); // casting cast

	for (double i = a; i <= b; (i = i + c))  // Petla for 1) warunek poaczatkowy;koncowy;krok i++ tzn i=i+1
	{
		double temp = pow(i, 3);
		printf ("%lf %lf\n", i, temp);

		
	}
}
