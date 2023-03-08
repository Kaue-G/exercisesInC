#include <stdio.h>

int fatorial (int valor);

int main () {
    int decimal = 0;

    do {
        printf("informe um numero inteiro positivo: \n");
        scanf("%d", &decimal);
    } while (decimal < 0);
    
    int resultado = fatorial(decimal);
    
    printf("Resultado: %d", resultado);

    return 0;
}

int fatorial (int valor) {
    if (valor == 1) {
        return valor;
    }
    long int resultado = valor * fatorial(valor - 1);
    return resultado;
}
