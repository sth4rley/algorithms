/* 
    ENGENHARIA DE COMPUTACAO
    DOCENTE: ANA EMILIA DE MELO QUEIROZ
    DISCENTE: STHARLEY SANTOS LEITE

    2 AVALIACAO DE INTRODUCAO A ALGORITMOS 
    QUESTAO 4
*/

#include <stdio.h>

// Funcao responsavel por ler os numeros que serao fornecidos pelo usuario
void lerNumeros(int *numeros, int qntNumeros){
    for (int i = 0; i < qntNumeros; i++) {
        printf("Insira o %dº número: ", i + 1);
        scanf("%i", &numeros[i]);
    }
}

// Funcao responsavel por retornar o calculo da media dos numeros fornecidos pelo usuario
float media (int *numeros, int qntNumeros){
    int soma = 0;
    for (int i = 0; i < qntNumeros; i++) {
        soma += numeros[i];
    }
    return soma/qntNumeros;
}

// Funcao responsavel por retornar o maior numero contido no vetor
int maior (int *numeros, int qntNumeros) {
    int maior = 0;
    for (int i = 0; i < qntNumeros; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    return maior;
}

// Funcao responsavel por retornar o menor numero contido no vetor
int menor (int *numeros, int qntNumeros){
    int menor = numeros[0];
    for (int i = 0; i < qntNumeros; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    return menor;
}

// Funcao responsavel por retornar o percentual de numeros impares contidos no vetor
float percImpares (int *numeros, int qntNumeros){
    int impares = 0;
    for (int i = 0; i < qntNumeros; i++) {
        if (numeros[i]%2 != 0) {
            impares++;
        }
    }
    return (impares*100)/qntNumeros;
}

// Funcao responsavel por retornar o percentual de multiplos de 3 contidos no vetor
float percMult3 (int *numeros, int qntNumeros){
    int multiplos = 0;
    for (int i = 0; i < qntNumeros; i++) {
        if (numeros[i]%3 == 0) {
            multiplos++;
        }
    }
    return (multiplos*100)/qntNumeros;
}

int main () {
    // define a quantidade de numeros que serao fornecidos pelo usuario
    int qntNumeros = 100;
    int numeros [qntNumeros];

    // chama a funcao lerNumeros para ler os numeros fornecidos pelo usuario
    lerNumeros(numeros, qntNumeros);

    // apresenta o retorno das funcoes
    printf("A média dos números é: %.2f\n", media(numeros, qntNumeros));
    printf("O maior número é: %i\n", maior(numeros, qntNumeros));
    printf("O menor número é: %i\n", menor(numeros, qntNumeros));
    printf("A porcentagem de números ímpares é: %.2f%%\n", percImpares(numeros, qntNumeros));
    printf("A porcentagem de números múltiplos de 3 é: %.2f%%\n", percMult3(numeros, qntNumeros));
}