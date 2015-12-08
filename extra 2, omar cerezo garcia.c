#include<stdio.h>
char cadena[50];
char subcadena[50];
int j=0;
int i=0;
int letra,nuevaletra,palabra;
int main()
{
	printf("\nInserta la palabra:\n");
	scanf("%s",cadena);
	printf("Inserta la subcadena que deseas buscar:\n");
	scanf("%s",subcadena);
		while(cadena[i]!='\0')
		{
		while(cadena[i]==subcadena[j])
		{
			i++;
			j++;
			if(subcadena[j]=='\0')
			{			
			printf("\n si existe la cadena");
		    printf("\n la palabra es: %s",cadena);
		    getchar(); 
		    printf("\n Ingrese la letra que quiere reemplazar ");
            scanf ("%c",&letra); 
            getchar(); 
			printf("\n Ingrese la letra por la que va a reemplazarla "); 
			scanf ("%c",&nuevaletra); 
			   for(i=0;i<20;i++) 
 			   { 
  				 if(cadena[i]==letra) 
  			  	  { 
  					 cadena[i]=nuevaletra; 
   			   } 
   				  } 
			printf("\n La nueva palabra es:  %s",cadena); 
			return 0;
			}
		}
		i++;
		j=0;
		if('\0'==cadena[i]){
		printf("\n no existe la subcadena");
		printf("\n la palabra escrita es: %s",cadena);
		break;

		}
}
system("pause");
}
