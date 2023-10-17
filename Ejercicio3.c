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

int esPrimo (int n){
    if (n<=1){
        return 0;
    }
    for (int i=2; i*i <= n; i++){
        if (n % 1 ==0){
            return 0;
        }
    }
    return 1;
}

   


