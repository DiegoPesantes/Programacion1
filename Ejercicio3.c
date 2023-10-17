//Leer un número entero y determinar si la suma de sus dígitos es también un número primo.

#include <stdio.h>

int main (){
    int numero;
    printf ("Ingresa un numero:");
    scanf ("%d", &numero);
    return 0;

int sumaD = 0;
int numeroO= numero;

while (numero !=0){
    sumaD += numero %10;
    numero /=10;
}
return 0;
}
   


