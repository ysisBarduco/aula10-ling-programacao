/*
Exercício 3: Lista de Compras Dinâmica
- Crie um programa que:
  - Comece com uma lista de 2 itens
  - Permita ao usuário adicionar itens dinamicamente
  - Use realloc() para expandir a lista
  - Exiba todos os itens ao final
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura
typedef struct {
    char produto[50];
    float preco;
} Compra;


// Protótipos
void exibirLista(Compra listaCompras[], int quantidadeItens);

// Declarção de funções
void exibirLista(Compra listaCompras[], int quantidadeItens){
    int i;

    printf("\n== LISTA DE COMPRAS ==\n");
    for(i = 0; i < quantidadeItens; i++){
        printf("- %s R$%.2f\n", listaCompras[i].produto, listaCompras[i].preco);
    }
}


int main(){
    int i;
    int quantidadeItens, novaQuantidade;
    Compra *lista;

    // Começa com uma lista de 2 itens
    quantidadeItens = 2;
    lista = (Compra*) malloc(quantidadeItens * sizeof(Compra));

    //Verifica se a alocação foi bem sucedida
    if(lista == NULL){
        printf("\nErro ao alocar lista!\n");
        return 1;
    }

    // Adiciona os itens iniciais
    for(i = 0; i < quantidadeItens; i++){
        strcpy(lista[i].produto, "Item");
        lista[i].preco = 0.00;
    }

    exibirLista(lista, quantidadeItens);

    do{
        // Pergunta ao usuário quantos itens deseja adicionar
        printf("Quantos itens deseja adicionar? ");
        scanf("%d", &novaQuantidade);

        if(novaQuantidade == 0){
            printf("\nAdicao de itens finalizada! Exibindo lista...\n");
            exibirLista(lista, quantidadeItens);
        }
        else if(novaQuantidade > 0){
            // Soma o número de novos itens a quantidade atual
            novaQuantidade += quantidadeItens;

            // Realoca a lista
            lista = (Compra*) realloc(lista, novaQuantidade * sizeof(Compra));

            // Verifica a realocação
            if(lista == NULL){
                printf("\nErro ao realocar lista!\n");
                return 1;
            }

            // Pede para o usuário entrar com os novos itens
            for(i = quantidadeItens; i < novaQuantidade; i++){
                printf("\n%d produto: ", i + 1);
                printf("\n Nome: "); scanf(" %[^\n]", lista[i].produto);
                printf("\n Preco: "); scanf(" %f", &lista[i].preco);
            }

            // Define a nova quantidade como a quantidade atual
            quantidadeItens = novaQuantidade;

            printf("\nNovos itens adicionados!\n");
            // Exibe todos os itens ao final
            exibirLista(lista, quantidadeItens);
        }
        else{
            printf("\nQuantidade inavlida! Digite um valor maior que 0, ou digite 0 para finalizar.\n");
        }

    } while(novaQuantidade != 0);

    free(lista);
    return 0;
}
