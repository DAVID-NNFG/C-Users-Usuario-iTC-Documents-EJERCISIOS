#include <stdio.h>

int main() {
    int n, primero = 0, segundo = 1, siguiente;
    
    printf("Ingrese el número de términos para la serie de Fibonacci: ");
    scanf("%d", &n);
    
    printf("Serie de Fibonacci:\n");
    printf("%d, %d, ", primero, segundo);
     
    int contador = 2;
    while (contador < n) {
        siguiente = primero + segundo;
        printf("%d, ", siguiente);
        primero = segundo;
        segundo = siguiente;
        contador++;
    }
    
    printf("\n");
    
    return 0;
}