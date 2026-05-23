#include <stdio.h>
#include <locale.h>

int main() {
 
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int pares = 0;
    int impares = 0;
    int i;

   
    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Posição [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

 
    for(i = 0; i < 10; i++) {
      
        if(vetor[i] % 2 == 0) {
            pares++; 
        } else {
            impares++; 
        }
    }

    printf("\n--- Resultado --- \n");
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

system("pause");

    return 0;
}
