//Determinar a cuánto es igual la suma de los elementos de la serie de Fibo- nacci entre 0 y 100.

#include <stdio.h>

int main(){

int num1=0;
int num2= 1;
int suma=0;

while (num2 <= 100){

        suma+= num2;
    }

    int num3 = num1 + num2;
    num1 = num2;
    num2=num3;


    printf("La suma de los numeros es: %d\n", suma);
    
    return 0;
}
