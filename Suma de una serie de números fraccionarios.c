#include <stdio.h>

int main() {

    int n;
    double producto = 1.0;

    cout << "Ingrese la cantidad de números fraccionarios: ";
    cin >> n;

    int i = 0;
    
    while (i < n) {
        double numero;
        cout << "Ingrese el número fraccionario #" << i + 1 << ": ";
        scanf("%lf", &numero);
        producto *= numero;
        i++;
    }

    printf("El producto de los números fraccionarios es: %lf\n", producto);

    return 0;
}