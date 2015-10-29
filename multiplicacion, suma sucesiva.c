#include<stdio.h>
int main()
{
	int a,b, num1, num2;
	a=1;
	b=0;
	printf ("multiplicacion de dos numeros con suma sucesiva-->");
	printf ("ingrese numero que se va a multiplicar-->");
	scanf("%d" ,& num1);
printf ("por");
	scanf("%d" ,& num2);
	while (a<= num1)
	{
		b=b+num2;
		a=a+1;
		}	
		printf("%d",b);
}
