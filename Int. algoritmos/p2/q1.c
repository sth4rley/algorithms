/* 
    ENGENHARIA DE COMPUTACAO
    DOCENTE: ANA EMILIA DE MELO QUEIROZ
    DISCENTE: STHARLEY SANTOS LEITE

    2 AVALIACAO DE INTRODUCAO A ALGORITMOS 
    QUESTAO 1
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

// funcao para filtrar os veiculos por combustivel e ano e apresentar na tela
void listarVeiculos(Veiculo *veiculos, int n, int anoI, char combustivel) {
    int contadorBusca = 0;
    // verifica cada veiculo no array de veiculos
    for (int i = 0; i < n; i++) {
        // caso possua algum veiculo com ano maior ou igual ao ano inicial e combustivel igual ao informado
        if (veiculos[i].ano >= anoI && veiculos[i].combustivel == combustivel) {
            printf("--- Veiculo encontrado %i ---\n", ++contadorBusca);
            printf("Proprietario: %s\n", veiculos[i].proprietario);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Cor: %s\n", veiculos[i].cor);
            printf("Chassi: %s\n", veiculos[i].chassi);
            printf("Ano: %i\n", veiculos[i].ano);
            printf("Placa: %s\n\n", veiculos[i].placa);
        }
    }
}

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
int main () {
    int maxVeiculos = 5000;
    Veiculo veiculos[maxVeiculos];

    // cadastra os veiculos
    cadastrarVeiculos(veiculos, maxVeiculos); 
    // lista veiculos a partir de 1980 que utilizam diesel
    listarVeiculos(veiculos, maxVeiculos, 1980, 'D'); 

}
