#include <stdio.h>

int factorial(int num) {

    if (num == 0 || num == 1) {
        return 1;
    }
    int resultado = 1;
    while (num > 1) {
        resultado *= num;
        num--;
    }
    return resultado;
}

int sumaFactoriales(int n) {

    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += factorial(i);
        i++;
    }
    return suma;
}

int main() {
    
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    int suma = sumaFactoriales(n);
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}