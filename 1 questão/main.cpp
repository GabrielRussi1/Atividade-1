#include <stdio.h>

int main() {
    float numero, metade;

    // Solicita ao usu�rio um n�mero real
    printf("Digite um n�mero real: ");
    scanf("%f", &numero);

    // Calcula a metade do n�mero
    metade = numero / 2;

    // Exibe o resultado
    printf("A metade de %.2f � %.2f\n", numero, metade);

    return 0;
}
