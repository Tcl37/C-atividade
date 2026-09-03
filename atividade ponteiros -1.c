//Criar programa que leia 5 numeros inteiros e armazene em um vetor, depois imprima usando ponteiros o maior numero e a soma dos numeros digitados.
include <stdio.h>

int main() {
    int numeros[5];
    int i;
    int maior = numeros[0];
    int *p;
    p = numeros;
    int soma = 0;
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
        if (p[i] > maior) {
            maior = p[i];
        }
        soma += p[i];
    }
    printf("\nO maior numero digitado foi: %d\n", maior);
    printf("A soma dos numeros digitados foi: %d\n", soma);
    return 0;
}