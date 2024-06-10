#include <stdio.h>

int main() {
    
    int n;
    double suma = 0.0;

    printf("Introduce el numero de terminos en la serie: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        suma += 1.0 / i;
    }

    printf("La suma de la serie de numeros fraccionarios es: %.6f\n", suma);

    return 0;
}