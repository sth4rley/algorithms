/* 
    ENGENHARIA DE COMPUTACAO
    DOCENTE: ANA EMILIA DE MELO QUEIROZ
    DISCENTE: STHARLEY SANTOS LEITE

    2 AVALIACAO DE INTRODUCAO A ALGORITMOS 
    QUESTAO 3
*/

#include <stdio.h>

typedef struct Intervalo {
    int inicio;
    int fim;
} Intervalo;

// Funcao responsavel por ler os numeros que serao fornecidos pelo usuario
void lerNumeros(int *numeros, int n) {
    for (int i = 0; i < n; i++) {
        printf("Insira o numero para a posicao[%d]: ", i);
        scanf("%i", &numeros[i]);
    }
}

// Funcao responsavel por ler o intervalo que sera fornecido pelo usuario
void lerIntervalo(Intervalo *intervalos) {
    printf("Insira a posicao inicial do intervalo: ");
    scanf("%i", &intervalos->inicio);
    printf("Insira a posicao final do intervalo: ");
    scanf("%i", &intervalos->fim);
}

//  Funcao responsavel por retornar a soma dos numeros contidos no intervalo fornecido pelo usuario
int SomaParesIntervalo(int *numeros, int n, Intervalo intervalo) {
    int soma = 0;
    for (int i = intervalo.inicio; i <= intervalo.fim; i++) {
        if(numeros[i] % 2 == 0) {
            soma += numeros[i];
        }
    }
    return soma;
}

// Funcao responsavel por imprimir os numeros impares contidos no intervalo fornecido pelo usuario
void imprimirImpares(int *numeros, int n, Intervalo intervalo) {
    for (int i = intervalo.inicio; i <= intervalo.fim; i++) {
        if(numeros[i]%2 != 0) {
            printf("%i ", numeros[i]);
        }
    }
}

int main () {
    int qntNumeros = 1000;
    int numeros[qntNumeros];
    Intervalo intervalo;
    // solicita os numeros ao usuario
    lerNumeros(numeros, qntNumeros);
    // solicita o intervalo ao usuario
    lerIntervalo(&intervalo);
    // apresenta ao usuario
    printf("Soma dos numeros contidos no intervalo: %i\n", SomaParesIntervalo(numeros, qntNumeros, intervalo));
    printf("Numeros impares contidos no intervalo: ");
    imprimirImpares(numeros, qntNumeros, intervalo);
    printf("\n");
}