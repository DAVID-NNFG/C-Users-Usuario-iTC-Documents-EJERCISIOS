#include <studio.h>

int main (){

    int numero 
    int suma = 0 
    int digito, divisor = 1 

    printf("ingrese un numero\n");
    scanf("&n, &numero");

    int i = numero 
    while ( i >= 10 ){
        i /= 10; 
        divisor *= 10; 
    }

    printf("&d->", numero); 

    int x = divisor; 
    while (x = 0){
        digito = numero / x;
        suma += digito; 
        printf("%d", digito)
        numero % = x 
        if (x > 1){
            printf("+");
        }
        x /= 10;
    }
    

    printf("=%d\n", suma);


    return 0;

}