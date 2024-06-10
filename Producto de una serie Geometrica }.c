#include <stdio.h>

int main() {

    int primer_termino, razon, cantidad_terminos;
    int producto = 1; 

    printf("Introduce el primer termino: ");
    scanf("%d", &primer_termino);
    printf("Introduce la razon de la serie: ");
    scanf("%d", &razon);
    printf("Introduce la cantidad de terminos a multiplicar: ");
    scanf("%d", &cantidad_terminos);

    for (int i = 0; i < cantidad_terminos; i++) {
        producto *= primer_termino;
    }


    printf("El producto de la serie geometrica es: %d\n", producto);

    return 0;
}