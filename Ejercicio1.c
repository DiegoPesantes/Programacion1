//Leer dos números y mostrar todos los números terminados en 4 comprendidos entre ellos.
#include <stdio.h>

int main() {
    int inicio, fin;

    printf("Ingrese el primer número: ");
    scanf("%d", &inicio);
    printf("Ingrese el segundo número: ");
    scanf("%d", &fin);

    printf("Números terminados en 4 comprendidos entre %d y %d:\n", inicio, fin);

    for (int numero = inicio; numero <= fin; numero++) {
        if (numero % 10 == 4) {
            printf("%d\n", numero);
        }
    }

    if (inicio > fin) {
        printf("El primer número debe ser menor o igual al segundo número.\n");
    } else {
        printf("Números terminados en 4 comprendidos entre %d y %d:\n", inicio, fin);
        for (int numero = inicio; numero <= fin; numero++) {
            if (numero % 10 == 4) {
                printf("%d\n", numero);
            }
        }
    }
    if (inicio > fin) {
        printf("El primer número debe ser menor o igual al segundo número.\n");
    } else {
        printf("Números terminados en 4 comprendidos entre %d y %d:\n", inicio, fin);
        for (int numero = inicio; numero <= fin; numero++) {
            if (numero % 10 == 4) {
                printf("%d\n", numero);
            }
        }
        printf("Fin del programa.\n");
    }

    return 0;
}