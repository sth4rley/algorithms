#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[60];
    char cor[20];
    char tamanho;
} camisa;

void ordenaTamanho(camisa *, int);
void ordenaNome(camisa *, int);
void ordenaCor(camisa *, int);

void ordenaTamanhoX(camisa *, int);
void ordenaNomeX(camisa *, int);
void ordenaCorX(camisa *, int);


void ordenaCorX(camisa *camisas, int qntCamisas){
    camisa aux;
    int i, j;
    for(int i = 0; i<qntCamisas; i++)
      for(int j = i+1; j<qntCamisas; j++){
        // se for positivo eh pq str1 eh maior 
        if(strcmp(camisas[i].cor,camisas[j].cor)>0){
          aux = camisas[i];
          camisas[i] = camisas[j];
          camisas[j] = aux;
      };
   } 
}


void ordenaTamanhoX(camisa *camisas, int qntCamisas){
    camisa aux;
    int i, j;
    for(int i = 0; i<qntCamisas; i++)
      for(int j = i+1; j<qntCamisas; j++){
        // se for positivo eh pq o primeiro eh maior 
        if(camisas[i].tamanho<camisas[j].tamanho && camisas[i].cor == camisas[j].cor){
          aux = camisas[i];
          camisas[i] = camisas[j];
          camisas[j] = aux;
      };
   }
}



void ordenaNomeX(camisa *camisas, int qntCamisas){ 
    camisa aux;
    int i, j;
    for(int i = 0; i<qntCamisas; i++)
      for(int j = i+1; j<qntCamisas; j++){
        // se for positivo eh pq str1 eh maior 
        if(strcmp(camisas[i].nome,camisas[j].nome)>0 && camisas[i].tamanho == camisas[j].tamanho && camisas[i].cor == camisas[j].cor){
          aux = camisas[i];
          camisas[i] = camisas[j];
          camisas[j] = aux;
      };
   }
}


void main (){

    int qtsCamisetas, i;
    scanf("%i", &qtsCamisetas);

   while(1)  {
     if (qtsCamisetas == 0)
            break;

        camisa camisas[qtsCamisetas];
        for (i = 0; i < qtsCamisetas; i++) {
            scanf(" %[^\n]", camisas[i].nome);
            scanf("%s %c", camisas[i].cor, &camisas[i].tamanho);
        }
        
        // outra ideia
        // ordena por cor
        // ordena os que tem a mesma cor por tamanho
        // ordena os que tem a mesma cor e tamanho por nome

        //ordenaNomeX(camisas, qtsCamisetas);
        //ordenaTamanhoX(camisas, qtsCamisetas);
        ordenaCorX(camisas, qtsCamisetas);
        ordenaTamanhoX(camisas, qtsCamisetas);
        ordenaNomeX(camisas, qtsCamisetas);

        for (i = 0; i < qtsCamisetas; i++)
            printf("%s %c %s\n", camisas[i].cor, camisas[i].tamanho, camisas[i].nome);

        scanf("%i", &qtsCamisetas);
        if (qtsCamisetas != 0)
            printf("\n");
    
    };
   
}

void ordenaNome(camisa *camisas, int qntCamisas){ 
  camisa aux;
  int i, j;

  for (i = 1; i < qntCamisas; i++) {
    aux = camisas[i];
    for (j = i - 1; j >= 0 && strcmp(camisas[j].nome, aux.nome) > 0; j--)
      camisas[j + 1] = camisas[j];
    
    camisas[j + 1] = aux;
  }

}

void ordenaCor(camisa *camisas, int qntCamisas){
    camisa aux;
    int i, j;

    for (i = 1; i < qntCamisas; i++) {

      aux = camisas[i];

      for (j = i - 1; j >= 0 && strcmp(camisas[j].cor, aux.cor) > 0; j--)
        camisas[j+1] = camisas[j]; 
      
      camisas[j+1] = aux;
    
    }
}


void ordenaTamanho(camisa *camisas, int qntCamisas){
  camisa aux;
  int i, j;

  for (i = 1; i<qntCamisas; i++){
    aux = camisas[i];

    for(j = i - 1; j>=0 &&camisas[j].tamanho < aux.tamanho; j--)
      camisas[j+1] = camisas[j];
    
    camisas[j + 1] = aux;
  }

}
