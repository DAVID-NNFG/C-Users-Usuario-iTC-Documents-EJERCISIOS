#include <stdio.h>

int main() {

    int n;
    int suma_cuadrados = 0;
    int i = 1;

    printf("Introduce un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        suma_cuadrados += i * i;
        i++;
    }

    printf("La suma de los cuadrados de los %d numeros es: %d\n", n, suma_cuadrados);

    return 0;
}