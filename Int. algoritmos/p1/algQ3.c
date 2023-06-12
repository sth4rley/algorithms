#include <stdio.h>

int main (void) {

	// variaveis
	int quantidade = 100;
	int numeros[quantidade];
	int fatorial;

	// solicita os numeros para o usuario
	for(int i = 0; i<quantidade; i++){
		printf("Entre com um numero natural: ");
		scanf("%i", &numeros[i]);
	}

	// acessa cada elemento do vetor (0 ate 99)
	for (int i = 0; i<quantidade; i++){
		// caso o numero seja 0 o fatorial sera 1;
		if (numeros[i]==0){
			fatorial = 1;
		}
		// faz o calculo do fatorial para numeros naturais
		else if(numeros[i]>0){
			fatorial = 1;
			for(int z = 1; z<=numeros[i]; z++){
				fatorial *= z;
			};	
		}

		printf("O fatorial de %i vale %i\n",numeros[i],fatorial);
	}
}