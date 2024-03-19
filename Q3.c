#include <stdio.h>

int main() {
    int numero, fatorial;

    do {
        printf("Insira um número positivo para calcular o fatorial: ");
        scanf("%d", &num);

        if (numero > 0) {
            
            fatorial = 1;
            
            for (int i = 1; i <= numero; ++i) {
                fatorial *= i;
            }
            printf("O fatorial de %d é: %d\n", numero, fatorial);
        } else {
            printf("O número precisa ser positivo.\n");
        }

    } while (num <= 0);

    return 0;
}
