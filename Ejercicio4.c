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