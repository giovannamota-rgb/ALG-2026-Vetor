#include <stdio.h>
#include <locale.h>

int main() {
    // Configura o terminal para aceitar acentuação (opcional)
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int pares = 0;
    int impares = 0;
    int i;

    // --- PRIMEIRO FOR: Apenas para leitura dos dados ---
    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Posição [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // --- SEGUNDO FOR: Separado apenas para o cálculo ---
    for(i = 0; i < 10; i++) {
        // O operador % calcula o resto da divisão por 2
        if(vetor[i] % 2 == 0) {
            pares++; // Incrementa se o resto for zero (par)
        } else {
            impares++; // Incrementa se o resto não for zero (ímpar)
        }
    }

    // --- Exibição dos resultados ---
    printf("\n--- Resultado --- \n");
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

system("pause");

    return 0;
}
