#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    if (numero <= 3) {
        return 1; 
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);

    if (ehPrimo(numero)) {
        printf("%d - O número é primo.\n", numero);
    } else {
        printf("%d - O número não é primo.\n", numero);
    }

    return 0;
}
