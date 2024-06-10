#include <stdio.h>

int main() {

    int primer_termino, 
    int difirencia;
    int cantidad_terminos;
    int suma = 0; 

    
    printf("Introduce el primer termino: ");
    scanf("%d", &primer_termino);
    printf("Introduce la diferencia: ");
    scanf("%d", &diferencia);
    printf("Introduce la cantidad de terminos: ");
    scanf("%d", &cantidad_terminos);

    
    int i = 0;
    do {
        suma += primer_termino + i * diferencia;
        i++;
    } while (i < cantidad_terminos);

    
    printf("La suma de la serie aritmetica es: %d\n", suma);

    return 0;
}