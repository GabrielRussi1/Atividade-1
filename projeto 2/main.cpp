#include <stdio.h>

int main() {
    float numero, dobro;

    // Solicita ao usu�rio um n�mero real
    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    // Calcula o dobro do n�mero
    dobro = numero * 2;

    // Exibe o resultado
    printf("O dobro de %.2f � %.2f\n", numero, dobro);

    return 0;
}
