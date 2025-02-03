#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
       
        int quadrado = numero * numero;
        printf("Eh um numero par e seu quadrado eh igual a %d\n", quadrado);
        
    } else {
    
        int cubo = numero * numero * numero;
        printf("Eh um numero impar e seu cubo eh igual a %d\n", cubo);
    }

    return 0;
}
