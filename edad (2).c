#include<stdio.h>
#include<conio.h>
int main ()
{
int edad;
  printf("Estadisticas de edades ");
  printf(" Dame tu edad: ");
  scanf("%d",&edad);
   if(edad<=12)
     printf("Eres  ni~no");
  else if (edad<=18)
    printf("Eres adelocente");
       else if (edad<=29)
    printf("Eres joven");
         else if (edad<=59)
    printf("eres adulto");
    
     else if (edad>60)
    printf("Eres de la tercera edad");
    getch ();

  	}
