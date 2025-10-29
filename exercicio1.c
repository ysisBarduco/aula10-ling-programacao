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

int main(){
    int n, i;
    int *vetor;

    //Solicita ao usuário quantos números ele quer digitar
    printf("\nQuantos valores deseja salvar no vetor?");
    scanf("%d", &n);
    vetor = (int*) malloc(n * sizeof(int));
}