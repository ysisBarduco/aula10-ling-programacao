# aula10-ling-programacao

## Dados do Discente
- Discente: Ysis Barduco Straub de Lima
- GRR: GRR20251303
- Turno: Vespertino
- Curso: Tecnologia em Analise e Desenvolvimento de Sistemas

## Exercícios

### 1. Conversor de Temperaturas
**Descrição:**  
Desenvolva um programa que converta temperaturas entre as escalas **Celsius**, **Fahrenheit** e **Kelvin**.

**Requisitos:**
- Crie as seguintes funções de conversão:
  - `float celsiusParaFahrenheit(float celsius)` — Fórmula: **F = C × 9/5 + 32**
  - `float fahrenheitParaCelsius(float fahrenheit)` — Fórmula: **C = (F - 32) × 5/9**
  - `float celsiusParaKelvin(float celsius)` — Fórmula: **K = C + 273.15**
  - `float kelvinParaCelsius(float kelvin)` — Fórmula: **C = K - 273.15**
  - `float fahrenheitParaKelvin(float fahrenheit)` — converta primeiro para Celsius, depois para Kelvin
  - `float kelvinParaFahrenheit(float kelvin)` — converta primeiro para Celsius, depois para Fahrenheit
- Apresente um **menu com 6 opções de conversão**, mais a **opção de sair**
- Exiba o **resultado com 2 casas decimais**

### Exercício 1: Vetor de Números Pares
- Crie um programa que:
 - Solicite ao usuário quantos números ele quer digitar
 - Aloque dinamicamente um vetor
 - Leia os números
 - Exiba apenas os números pares
 - Libere a memória

### Exercício 2: Concatenação de Vetores
- Crie um programa que:
 - Aloque dois vetores de tamanhos diferentes
 - Preencha-os com valores
 - Crie um terceiro vetor que seja a concatenação dos dois primeiros
 - Libere toda a memória

## Exercício 3: Lista de Compras Dinâmica
- Crie um programa que:
 - Comece com uma lista de 2 itens
 - Permita ao usuário adicionar itens dinamicamente
 - Use realloc() para expandir a lista
 - Exiba todos os itens ao final