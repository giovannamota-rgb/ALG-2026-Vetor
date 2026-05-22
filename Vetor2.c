#include <stdio.h>

int main() {
    int v1[10];
    int v2[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &v1[i]);
    }

    for (i = 0; i < 10; i++) {
        v2[i] = v1[9 - i]; 
    }

    printf("\n--- Resultado --- \n");
    
    printf("v1 = { ");
    for (i = 0; i < 10; i++) {
        printf("%d%s", v1[i], (i < 9) ? ", " : "");
    }
    printf(" }\n");

    printf("v2 = { ");
    for (i = 0; i < 10; i++) {
        printf("%d%s", v2[i], (i < 9) ? ", " : "");
    }
    printf(" }\n");

system("pause");


    return 0;
}
