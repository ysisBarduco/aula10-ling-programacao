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

void exibirLista(char **listaCompras, int quantidadeItens) {
    printf("\n== LISTA DE COMPRAS ==\n");
    for(int i = 0; i < quantidadeItens; i++){
        printf("%d. %s\n", i + 1, listaCompras[i]);
    }
}

int main(){
    int quantidade = 2;
    int quantidadeNovosItens;
    int i;

    //Começa com uma lista de 2 itens
    char **lista = (char**) malloc(quantidade * sizeof(char));

    if(lista == NULL){
        printf("\nErro ao alocar lista!\n");
        return 1;
    }

    for(i = 0; i < quantidade; i++){
        lista[i] = (char*) malloc(50 * sizeof(char)); //Aloca espaço para os caracteres das palavras, máximo de 50 caracteres
        if(lista[i] == NULL){
            printf("\nErro ao alocar lista[%d]!\n", i);
            return 1;
        }
    }

    strcpy(lista[0], "Item 1");
    strcpy(lista[1], "Item 2");

    exibirLista(lista, quantidade);

    //Permite ao usuário adicionar itens dinâmicamente
    do{
        printf("Quantos itens deseja adicionar? ");
        scanf("%d", &quantidadeNovosItens);
        
        if(quantidadeNovosItens < 0){
            printf("\nQuantidade inválida! Digite novamente.");
        }
    }while(quantidadeNovosItens < 0);

    //Soma a qauntidade de novos itens a quantidade de itens atual
    quantidade += quantidadeNovosItens;

    //Usa realloc() para expandir a lista
    **lista = (char**) realloc(lista, quantidade * sizeof(char*));

    printf("\nDigite: \n");
    for(i = 0; i < quantidade; i++){
        printf(" o novo item %d: ", i + 1);
        scanf(" %49[\n]", lista[i]);
    }

    //Exibe todos os itens ao final
    exibirLista(lista, quantidade);

    //Libera a memória
    for(i = 0; i < quantidade; i++){
        free(lista[i]);
    }
    free(lista);
    
    return 0;
}