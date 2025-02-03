#include <stdio.h>

int main() {
    float area, base, altura;
    
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura;
    
    printf("A area do retangulo eh: %.2f\n", area);
    
    return 0;
}
