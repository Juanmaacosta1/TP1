#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero: \n");
    scanf("%i", &n);
    printf("Los numeros primos menores o iguales a %d son:\n", n);
    for (int i = 2; i <= n; i++) {
        int esPrimo = 1; // Suponemos que es primo
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                esPrimo = 0; // No es primo
                break;
            }
        }
        if (esPrimo) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
