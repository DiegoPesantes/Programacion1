//Leer numeros hasta que digiten 0 y determinar a cuánto es igual el promedio entero de los número primos leídos.

#include <stdio.h>

int esPrimo(int n) {
    if (n <= 1) {
        return 0;
        