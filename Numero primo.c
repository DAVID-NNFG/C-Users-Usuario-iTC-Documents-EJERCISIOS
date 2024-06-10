#include <stdio.h>

int main() {

    int numero;
    bool es_primo = true;

    
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    
    if (numero <= 1) {
        es_primo = false;
    } else {
        int i = 2;
        while (i <= numero / 2) {
            if (numero % i == 0) {
                es_primo = false;
                break;
            }
            i++;
        }
    }

    if (es_primo)
        printf("%d es un numero primo.\n", numero);
    else
        printf("%d no es un numero primo.\n", numero);

    return 0;
}