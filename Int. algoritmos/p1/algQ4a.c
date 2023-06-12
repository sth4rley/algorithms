#include <stdio.h>

int main (void) {
	int precoProdutos[100];
	int qntVendas[100];
	int faturamentoMensal = 0;

	// Faturamento mensal
	for(int i = 0; i<100; i++){
		// recebe do usuario o preco do produto e quantidade do item
		printf("Digite o preco do produto %i:\n", i+1);
		scanf("%i", &precoProdutos[i]);
		printf("Digite a quantidade de vendas do produto %i:\n", i+1);
		scanf("%i", &qntVendas[i]);

		// calcula a venda do produto e armazena no faturamento mensal.
		faturamentoMensal += (precoProdutos[i]*qntVendas[i]);
	}

	printf("O faturamento mensal eh $i", faturamentoMensal);
	

	// O NUMERO DA MERCADORIA MAIS VENDIDA	
		int maisVendido;
	int menosVendido;

	// varre o vetor que armazena a quantidade de vendas
	for(int i = 0, maisVendido = 0, menosVendido; i<100; i++){
		// busca pelo produto com maior quantidade de vendas
		if(qntVendas[i] > maisVendido){
			maisVendido = i+1
		}
		// busca pelo produto com menor quantidade de vendas
		if(qntVendas[i] < menosVendido){
			menosVendido = i+1;
		}
	}
}