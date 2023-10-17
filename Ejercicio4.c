//Leer numeros hasta que digiten 0 y determinar a cuánto es igual el promedio entero de los número primos leídos.

#include <stdio.h>

int esPrimo(int n) {
    if (n <= 1) {
        return 0;
 }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}   
int main() {
    int numero, suma = 0, cantidad = 0;

    printf("Ingrese números (0 para terminar): \n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (esPrimo(numero)) {
                suma += numero;
                cantidad++;
            }
        }   
        } while (numero != 0);

    if (cantidad > 0) {
        int promedio = suma / cantidad;
        printf("El promedio entero de los números primos es: %d\n", promedio);
    } else {
        printf("No se ingresaron números primos.\n");
    }

    return 0;
}