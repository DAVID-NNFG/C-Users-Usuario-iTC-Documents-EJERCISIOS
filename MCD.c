#include <stdio.h>

int main() {

    int num1, num2;
    
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    
    
    int a = num1, b = num2;
    
    do {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    } while (num1 != num2);
    
    int mcd = num1;

    printf("El MCD de %d y %d es: %d\n", a, b, mcd);

    return 0;
}