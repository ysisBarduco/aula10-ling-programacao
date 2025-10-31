/*
Exercício 2: Concatenação de Vetores
- Crie um programa que:
  - Aloque dois vetores de tamanhos diferentes
  - Preencha-os com valores
  - Crie um terceiro vetor que seja a concatenação dos dois primeiros
  - Libere toda a memória
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 4;
    int y = 3;
    int i;

    //Aloca dois vetores de tamanhos diferentes
    int *vetor1 = (int*) malloc(x * sizeof(int));
    int *vetor2 = (int*) malloc(y * sizeof(int));

    //Verifica se a alocação foi bem sucedida
    if(vetor1 == NULL){
        printf("\nErro ao alocar vetor 1!\n");
        return 1;
    }

    if(vetor2 == NULL){
        printf("\nErro ao alocar vetor 2!\n");
        return 1;
    }

    //Preenche os vetores
    printf("\nDigite os %d valores para o vetor 1: \n", x);
    for(i = 0; i < x; i++) {
        printf(" o %d numero: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os %d valores para o vetor 2: \n", y);
    for(i = 0; i < y; i++) {
        printf(" o %d numero: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    //Mostra os vetores preenchidos
    printf("\nVetor 1: ");
    for(i = 0; i < x; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for(i = 0; i < y; i++) {
        printf("%d ", vetor2[i]);
    }

    //Concatena os dois vetores e um terceiro vetor
    int *vetor3 = (int*) malloc((x + y) * sizeof(int));
    printf("\n\nConcatenando...");

    //Concatena os valores do vetor 1
    for(i = 0; i < x; i++){
        vetor3[i] = vetor1[i];
    }

    //Concatena os valores do vetor 2
    for(i = 0; i < y; i++){
        vetor3[i + x] = vetor2[i];
    }

    //Mostra o vetor resultante da concatenação
    printf("\nVetor resultante: ");
    for(i = 0; i < (x + y); i++){
        printf("%d ", vetor3[i]);
    }

    //Libera toda a memória
    vetor1 = (int*) realloc(vetor1, 0 * sizeof(int));
    vetor2 = (int*) realloc(vetor2, 0 * sizeof(int));
    vetor3 = (int*) realloc(vetor3, 0 * sizeof(int));

    free(vetor1);
    free(vetor2);
    free(vetor3);
    
    return 0;
}