#include <iostream> 
//programa que ordena los numeros de mayor a menor
using namespace std; 
int main () 
{ 
    float n1, n2, n3, mayor, menor, medio; 
    cout << "Ingrese un numero: "; 
    cin >> n1; 
    cout << "Ingrese otro numero: "; 
    cin >> n2; 
    cout << "Ingrese el ultimo numero: "; 
    cin >> n3; 

    if (n1 > n2 && n1 > n3) 
        mayor = n1; 
    else 
    if (n2 > n3) 
        mayor = n2; 
    else 
        mayor = n3; 

    if (n1 < n2 && n1 < n3) 
        menor = n1; 
    else 
    if (n2 < n3) 
    menor = n2; 
    else 
        menor = n3; 

    if (n1 != mayor && n1 != menor) 
    medio = n1; 
    else 
    if (n2 != n3) 
        medio = n2; 
    else 
        medio = n3; 

    cout << "Mayor: " << mayor << "\n" << "Medio: " << medio << "\n" << "Menor: " << menor << endl; 
    system ("pause"); 
    return 0; 
} 

