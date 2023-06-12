/* 
    ENGENHARIA DE COMPUTACAO
    DOCENTE: ANA EMILIA DE MELO QUEIROZ
    DISCENTE: STHARLEY SANTOS LEITE

    2 AVALIACAO DE INTRODUCAO A ALGORITMOS 
    QUESTAO 2
*/

#include <stdio.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario [50];
    char combustivel; // A = álcool, D = diesel, G = gasolina
    char modelo [40];
    char cor[20];
    char chassi[30];
    int ano;  
    char placa[8]; // ABC1234\0
} Veiculo;

// funcao para cadastrar veiculos
void cadastrarVeiculos(Veiculo *veiculos, int n) {
    int contadorCadastro = 1;
    for (int i = 0; i < n; i++) {
        printf("--- Cadastro veiculo %i ---\n", contadorCadastro++);
        printf("Proprietario: ");
        scanf("%49[^\n]", veiculos[i].proprietario);
        printf("Combustivel:(A, D ou G)");
        scanf(" %c", &veiculos[i].combustivel);
        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);
        printf("Cor: ");
        scanf("%s", veiculos[i].cor);
        printf("Chassi: ");
        scanf("%s", veiculos[i].chassi);
        printf("Ano: ");
        scanf("%i", &veiculos[i].ano);
        printf("Placa: ");
        scanf("%s", veiculos[i].placa);
        printf("\n");
    }
}

// Funcao responsavel por trocar o proprietario de um veiculo a partir do chassi
void trocarProprietario(Veiculo *veiculos, int n, char *chassi, char *novoProprietario) {
    // percorre o vetor de veiculos ate achar o chassi
    for (int i = 0; i < n; i++) { 
        // ao achar o chassi correspondente, troca o proprietario
        if (strcmp(veiculos[i].chassi, chassi) == 0) {
            strcpy(veiculos[i].proprietario, novoProprietario);
        } 
    }
} 

int main () {
    int maxVeiculos = 5000;
    Veiculo veiculos[maxVeiculos];
    // cadastra os veiculos
    cadastrarVeiculos(veiculos, maxVeiculos); 
    // Realiza a troca do proprietario a partir do chassi
    trocarProprietario(veiculos, maxVeiculos, "9BW ZZZ377 VT 004251", "Stharley Santos Leite");
    // o carro agora eh meu :D
}