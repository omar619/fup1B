#include<stdio.h>

   float m;
   float bit;
   float byte;
   float kilo;
   float giga;
   float tera;
	int main()
	{
	    printf("Este programa convierte los megabytes en bits, bytes, kilobytes, gigabytes, \nterabytes \n");
	    printf("Dame el numero de megas ");
	    scanf("%f", &m);
		
		bit=m*1024*1024*8;
		byte=m*1024*1024;
		kilo=m*1024;
		giga=m/1024;
		tera=m/1024/1024;
		
		printf("El resultado en bit es %f \n",bit); 
		printf("El resultado en bytes es %f \n",byte); 
		printf("El resultado en kilobytes es %f \n",kilo); 
		printf("El resultado en gigabytes es %f \n",giga); 
		printf("El resultado en terabytes es %f \n",tera); 
		
		
	}
