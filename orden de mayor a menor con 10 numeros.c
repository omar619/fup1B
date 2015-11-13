#include <stdio.h>
 
int main()
{
 
int vector[10];
int i;
 
for (i=0; i<10; i++){
   printf( "ingrese 10 numeros. Numero %d\n", i+1);
   scanf("%d", &vector[i]);
}
 
int mayor, menor;
mayor = vector[0]; 
menor = vector[0]; 
 
for (i=0; i<10; i++){
    if (vector[i]> mayor){
    mayor=vector[i];
    }
    if (vector[i]< menor){
    menor=vector[i];
    }
}
printf("El numero mayor es %d\n", mayor);
printf("El numero menor es %d\n", menor);
system("pause");
}
