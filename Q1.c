#include <stdio.h>

int main() {
    float a, b, c, media;
    char *mens;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    if (media >= 7) {
        mens = "Aprovado";
    } else if (media >= 5 && media < 7) {
        mens = "Recuperação";
    } else {
        mens = "Reprovado";
    }

    printf("Media: %.2f - Situação: %s\n", media, mens);

    return 0;
}
