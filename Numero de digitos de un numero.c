#include <stdio.h>

int main() {

    int numero;
    int contador_digitos = 0; 

    printf("Introduce un numero: ");
    scanf("%d", &numero);

    int temp = numero;
    while (temp != 0) {
        temp /= 10;
        contador_digitos++;
    }

    printf("El numero %d tiene %d digitos.\n", numero, contador_digitos);

    return 0;
}