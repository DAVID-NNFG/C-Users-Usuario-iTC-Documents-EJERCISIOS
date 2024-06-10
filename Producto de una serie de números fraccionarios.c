#include <stdio.h>


bool esPrimo(int num) {

    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int contarPrimos(int n) {

    int contador = 0;

    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {

    int numero;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    int cantidadPrimos = contarPrimos(numero);
    
    printf("La cantidad de numeros primos hasta %d es: %d\n", numero, cantidadPrimos);

    return 0;
}