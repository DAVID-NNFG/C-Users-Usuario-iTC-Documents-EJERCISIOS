#include <stdio.h>

int calcularTriangular(int n) {
    
    int triangular = 0;
    
    for (int i = 1; i <= n; ++i) {
        triangular += i;
    }
    
    return triangular;
}

int main() {
   
    int n;
   
    printf("Ingrese el valor de n para calcular el n-esimo numero triangular: ");
    scanf("%d", &n);

    int numeroTriangular = calcularTriangular(n);
    
    printf("El %d-esimo numero triangular es: %d\n", n, numeroTriangular);

    return 0;
}