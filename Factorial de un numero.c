#include <stdi.h>

int main() {
    int numero;
    int factorial = 1; 

    
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    
    int i = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }

    
    printf("El factorial de %d es: %d\n", numero, factorial);

    return 0;
}