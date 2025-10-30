/*
Exercício 1: Vetor de Números Pares
- Crie um programa que:
  - Solicite ao usuário quantos números ele quer digitar
  - Aloque dinamicamente um vetor
  - Leia os números
  - Exiba apenas os números pares
  - Libere a memória
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int quantidade;
  int i;
  int *vetor;

  //Solicita ao usário quantos números ele quer digitar
  printf("\nQuantos numeros deseja armazenar no vetor? ");
  scanf("%d", &quantidade);

  //Alocar dinamicamente um vetor
  vetor = (int*) malloc(quantidade * sizeof(int));

  //Verifica se a alocação foi bem sucedida
  if(vetor == NULL) {
    printf("\nErro ao alocar memória!\n");
    return 1;
  }
  
  //Lê os números
  printf("\nDigite: \n");
  for (i = 0; i < quantidade; i++) {
    printf(" o %d numero: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  //Exibe os números pares
  printf("\nNumeros pares digitados: ");
  for(i = 0; i < quantidade; i++) {
    if((vetor[i] % 2) == 0) {
      printf("%d ", vetor[i]);
    }
  }

  //Libera a memória
  vetor = (int*) realloc(vetor, 0 * sizeof(int));
  free(vetor);

  return 0;
}