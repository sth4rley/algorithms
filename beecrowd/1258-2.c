#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[60];
    char cor[20];
    char tamanho;
} camisa;

// apresenta as camisas na tela
void printa_camisas(camisa *camisas, int len) {
    for (int i = 0; i < len; i++)
        printf("%s %c %s\n", camisas[i].cor, camisas[i].tamanho, camisas[i].nome);
}

// essa funcao compara duas camisas
int comparar_camisas(camisa c1, camisa c2) {
    if (strcmp(c1.cor, c2.cor) != 0)
      return strcmp(c1.cor, c2.cor);
    else if (c1.tamanho != c2.tamanho)
      return c2.tamanho - c1.tamanho;
    else
      return strcmp(c1.nome, c2.nome);
}

// recebe o array de struct e troca as posicoes
// utilizando um struct auxiliar
// basicamente troca, uma posicao pela outra
void trocar_camisas(camisa camisas[], int index1, int index2) {
    camisa temp = camisas[index1];
    camisas[index1] = camisas[index2];
    camisas[index2] = temp;
}

void ordenar_camisas(camisa camisas[], int qntCamisas) {
    int i, j;
    int menor_camisa;

    // varre o array inteiro, utilizando o metodo selection sort
    for(i = 0; i < qntCamisas; ++i) {
        menor_camisa = i;
        for(j = i+1; j < qntCamisas; ++j) {
            if(comparar_camisas(camisas[menor_camisa], camisas[j]) > 0) {
                menor_camisa = j;
            }
        }
        trocar_camisas(camisas, i, menor_camisa);
    }
}

int main(void) {
    int i;
    int quantidade_camisas = -1;
    int contador_ordenacoes = 0;

    while(scanf("%i", &quantidade_camisas) != EOF) {
        if (quantidade_camisas == 0)
            continue;
        if(contador_ordenacoes > 0)
            printf("\n");
        
        camisa camisas[quantidade_camisas];
        for (i = 0; i < quantidade_camisas; i++) {
            scanf(" %[^\n]", camisas[i].nome);
            scanf("%s %c", camisas[i].cor, &camisas[i].tamanho);
        }

        ordenar_camisas(camisas, quantidade_camisas);
        contador_ordenacoes += 1;
        printa_camisas(camisas, quantidade_camisas);
    }

    return 0;
}

