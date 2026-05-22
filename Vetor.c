#include <stdio.h>

int main() {
    float vetor[10];
    float soma = 0.0, media = 0.0;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    media = soma / 10;
    printf("\nA media dos valores informados eh: %.2f\n", media);

system("pause");

    return 0;
}
