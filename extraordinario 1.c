#include<stdio.h>
int main ()
{
	int v [10];
	int q [10];
	int i;
	int multi=1;
	printf("introduce los diez eleentos a multiplicar: \n");
	for(i =0;i<10;i++)
	{
		printf("dame un numero",+1);
		scanf("%d",&v[i]);
		multi=multi * v[i];
		}
		printf("introduce los diez numeros a multiplicar:\n");
		for(i=0;i<10;i++)
		{
			printf("dame un numero",+1);
			scanf("%d",&q[i]);
			multi=multi*v[i]* q[i];
		}
		printf("el resultado de la multiplicacion es %d\n", multi);
}
