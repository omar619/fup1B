#include<stdio.h>
//PROMEDIO DE 10 NUMEROS
float N1;
float N2;
float N3;
float N4;
float N5;
float N6;
float N7;
float N8;
float N9;
float N10;
float resultado1;
float resultado2;
char r;
int main()
{
	printf("ALLAR EL PROMEDIO DE DIEZ NUMEROS\n");
	printf("\nINICIAR ");
	do	{
			printf("INGRESA DIEZ #:\n");
			scanf("%f", &N1);
			scanf("%f", &N2);
			scanf("%f", &N3);
			scanf("%f", &N4);
			scanf("%f", &N5);
			scanf("%f", &N6);
			scanf("%f", &N7);
			scanf("%f", &N8);
			scanf("%f", &N9);
			scanf("%f", &N10);
			resultado1=N1+N2+N3+N4+N5+N6+N7+N8+N9+N10;
			resultado2=resultado1/10;									
			printf("\nEl promedio es: %f", resultado2);
			printf("\n\nQUIERES VOLVER A PROMEDIAR? \n1>SI \n2>NO\n\n");
			scanf("%d",&r);
		}	while (r==1);
	printf("\n");
}
