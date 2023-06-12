#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

	// variaveis
	int quantidadeAlturas = 50;
	int vetorAlturas[quantidadeAlturas];
	float mediaAlturas = 0;
	float variancia = 0;
	float desvioPadrao = 0;

	// Solicita ao usuario o valor das alturas
	for(int i = 0; i < quantidadeAlturas; i++){
		printf("Digite a altura [%i]: ", i+1);	
		scanf("%i", &vetorAlturas[i]);
	}

	// Calcula a media e salva na variavel mediaAlturas
	for(int i = 0; i<quantidadeAlturas; i++){
		mediaAlturas += vetorAlturas[i];
	}
	mediaAlturas = mediaAlturas/quantidadeAlturas;

	// Calcula a variancia e salva na variavel variancia
	for(int i = 0; i<quantidadeAlturas; i++){
		variancia += pow(abs(vetorAlturas[i]-mediaAlturas),2);
	}
	variancia = variancia/quantidadeAlturas;
	
	// Calcula o desvio padrao
	desvioPadrao = sqrt(variancia);

	// Mostra o desvio padrao na tela
	printf("Desvio padrao: %f\n", desvioPadrao);
}