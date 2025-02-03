#include <stdio.h>

int main() {
    int anos, meses, dias;
    int totalDias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
    printf("\n");

    totalDias = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias eh: %d\n", totalDias);

    return 0;
}
