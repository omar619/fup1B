#include<stdio.h>//libreria de E/S

// CALCULADORA SUMA, RESTA, MULTIPLICACION Y DIVICION.

int resultado1;
int resultado2;
int resultado3;
int resultado4;

int N1;
int N2;

int main()

{
 printf("PRIMER #:\n");
 scanf("%d",&N1);
 printf("SEGUNDO #:\n");
 scanf("%d",&N2);
 resultado1=N1+N2;
 printf("El resultado de la suma es:%d\n",resultado1);
 resultado2=N1-N2;
 printf("El resultado de la resta es:%d\n",resultado2);
 resultado3=N1*N2;
 printf("El resultado de la multiplicacion es:%d\n",resultado3);
 resultado4=N1/N2;
 printf("El resultado de la division es:%d\n",resultado4);
}
