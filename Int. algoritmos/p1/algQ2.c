#include <stdio.h>

int main(void) {

	// Variaveis
	int linhas = 100;
	int colunas = 100;
	int matriz[linhas][colunas];

	// recebe os valores do usuario
	for(int l = 0; l < linhas; l++){
		for(int c = 0; c < colunas; c++){
			printf("Digite o valor a ser salvo em [%i][%i]: \n",l+1,c+1);
			scanf("%i", &matriz[l][c]);
		}
	}
	
	// escreve na tela o triangulo supeiror da diagonal principal
	for(int lin = 0; lin<linhas; lin++){
		printf("\n"); // quebra linha sempre que mudar a linha
		for(int col = 0; col<colunas; col++){
			// caso o valor da linha seja menor ou igual
			// ao valor da coluna, mostra o valor do elemento
			if(lin<=col) {
				printf(" %i ",matriz[lin][col]);
			} 
				// caso contrario retorna um espaco em branco
			else { 
				printf("   ");
			}
		}
	};
}