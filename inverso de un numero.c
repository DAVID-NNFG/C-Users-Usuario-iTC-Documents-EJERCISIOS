#include <stdio.h> 

int main (){
    int numero; 

    prinft("numero para invertirlo");
    scanf("%n" , %numero);

    int cifra = 0; 
    int valor = numero;
    do
    {
        volor /= 10; 
        cifra++;
    }while (valor != 0);
    
    int i = 0 
    do 
    {
        int resultado = numero % 10;
        prinft("%d", resultado)
        numero /= 10;

        i++; 
    }while(i < cifra);
    prinft("\n");
    return 0
}