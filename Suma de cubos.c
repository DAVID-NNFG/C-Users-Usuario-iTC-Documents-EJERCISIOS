#include <stdio.h>

int main() {
    
    int n;
    int suma_cubos = 0;
    int i = 1;

    printf("Introduce un numero: ");
    scanf("%d", &n);

    do {
        suma_cubos += i * i * i;
        i++;
    } while (i <= n);

    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma_cubos);

    return 0;
}