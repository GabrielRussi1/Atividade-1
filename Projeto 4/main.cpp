#include <stdio.h>

int main() {
    float base, altura, area;

    // Entrada de dados
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);

    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);

    // C�lculo da �rea
    area = (base * altura) / 2;

    // Sa�da do resultado
    printf("A �rea do tri�ngulo �: %.2f\n", area);

    return 0;
}
