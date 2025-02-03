#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[25];
    int i, j, ehPalindromo = 1;

    printf("Digite uma palavra para conferirmos se eh um palindromo: ");
    scanf("%s", palavra);

    for (i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    j = strlen(palavra) - 1;
    for (i = 0; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("Resultado: eh palindromo!\n");
    } else {
        printf("Resultado: nao eh palindromo!\n");
    }

    return 0;
}
