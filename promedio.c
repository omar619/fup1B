#include<stdio.h>
void main()
{
	int i, promedio;
	int calificaciones[10];
	int suma = 0;
	printf("\nintrodusca las calificaciones de 10 alumnos:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&calificaciones[i]);
		suma+=calificaciones[i];
	}
	printf("\nla suma de las calificaciones es %d",suma);
	promedio=suma/10;
	printf("\nel promedio de las calificaciones es %d",promedio);
	system("pause");
}
