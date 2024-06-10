#include <stdio.h>

int main() {
   
    int radicando, indice;
    
    printf("Ingrese el radicando: ");
    scanf("%d", &radicando);
    printf("Ingrese el índice: ");
    scanf("%d", &indice);
    
    if (indice <= 0) {
        printf("El índice debe ser un entero positivo.\n");
        return 1;
    }
    
    int resultado = 1;
    for (int i = 0; i < indice; i++) {
        resultado = radicando - resultado;
    }
    
    printf("La resta es %d\n", indice, radicando, resultado);
    
    return 0;
}