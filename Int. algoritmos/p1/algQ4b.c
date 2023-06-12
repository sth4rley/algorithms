#include <stdio.h>

int main (void) {
	
	// variaveis
	int qntVendas[100];
	int maisVendido;
	int menosVendido;

	// recebe do usuario a quantidade de vendas do item
	for(int i = 0; i<100; i++){
		printf("Digite a quantidade de vendas do produto %i:\n", i+1);
		scanf("%i", &qntVendas[i]);
	}		

	// varre o vetor que armazena a quantidade de vendas
	for(int i = 0, maisVendido = 0, menosVendido; i<100; i++){
		// busca pelo produto com maior quantidade de vendas
		if(qntVendas[i] > maisVendido){
			maisVendido = i+1;
		}
		// busca pelo produto com menor quantidade de vendas
		if(qntVendas[i] < menosVendido){
			menosVendido = i+1;
		}
	}

	printf("O produto mais vendido é o produto de numero %i\n", maisVendido);
	printf("O produto menos vendido é o produto de numero %i\n", menosVendido);
}