include <stdio.h>
struct Produto{
    char nome[50];
    float preco;
    char marca[50];
    int quantidade;
}
int main(){
    int i;
    float total;
    struct Produto produtos[5];
    for(i=0; i<5; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", produtos[i] .nome);
        printf("Digite o preco do produto: ");
        scanf("%f", &produtos[i].preco);
        printf("Digite a marca do produto: ");
        scanf("%s", produtos[i].marca);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &produtos[i].quantidade);

        printf("\nProduto cadastrado:\n");
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Marca: %s\n", produtos[i].marca);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        total = produtos[i].preco * produtos[i].quantidade;
        printf("Total: %.2f\n", total);
    }
}