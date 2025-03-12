#include <stdio.h>

int main() {
    float distancia, tempo, velocidade_media;

    // Solicita ao usu�rio a dist�ncia percorrida
    printf("Digite a dist�ncia percorrida (em km): ");
    scanf("%f", &distancia);

    // Solicita ao usu�rio o tempo gasto
    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    // Calcula a velocidade m�dia
    velocidade_media = distancia / tempo;

    // Exibe o resultado
    printf("A velocidade m�dia � %.2f km/h\n", velocidade_media);

    return 0;
}
