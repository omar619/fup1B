#include <stdio.h>
// convertir un número de decimal a binario.
int main()
{
	 printf("introduce numero decimal:\n");
    int numero, a, b;
    scanf("%d", &numero);
    a=numero/2;
    while(a>1)
    {         
              b=numero%2;
              printf("%d", b);    
              a=numero/2;
              numero=a;          
    }
    printf("% <---es el numero binario ", a);
    system("pause");
}
