#include <stdio.h>

int main() {
    int n;
    int suma_pares = 0;
    int numero = 2; 

    printf("Introduce un numero: ");
    scanf("%d", &n);

    do {
        suma_pares += numero;
        numero += 2; 
    } while (numero <= n);

    printf("La suma de los numeros pares %d es: %d\n", n, suma_pares);

    return 0;
}